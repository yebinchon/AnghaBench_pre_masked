
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct sdio_func {int dev; int device; int vendor; int class; TYPE_2__* card; } ;
struct sdio_device_id {int dummy; } ;
struct TYPE_5__ {scalar_t__ bus_width; } ;
struct mmc_host {int caps; TYPE_1__ ios; } ;
struct lbs_private {int fw_ready; int hw_host_to_card; struct if_sdio_packet* card; } ;
struct if_sdio_packet {unsigned int model; int ioport; struct if_sdio_packet* next; struct if_sdio_packet* packets; int workqueue; scalar_t__ rx_unit; struct lbs_private* priv; scalar_t__ firmware; scalar_t__ helper; int packet_worker; int lock; int scratch_reg; struct sdio_func* func; } ;
struct if_sdio_card {unsigned int model; int ioport; struct if_sdio_card* next; struct if_sdio_card* packets; int workqueue; scalar_t__ rx_unit; struct lbs_private* priv; scalar_t__ firmware; scalar_t__ helper; int packet_worker; int lock; int scratch_reg; struct sdio_func* func; } ;
struct cmd_header {int dummy; } ;
typedef int cmd ;
struct TYPE_7__ {int model; scalar_t__ firmware; scalar_t__ helper; } ;
struct TYPE_6__ {int num_info; int quirks; int * info; struct mmc_host* host; } ;


 int ARRAY_SIZE (TYPE_3__*) ;
 int CMD_FUNC_INIT ;
 int ENODEV ;
 int ENOMEM ;
 int GFP_KERNEL ;
 int IF_SDIO_FW_STATUS ;
 int IF_SDIO_H_INT_MASK ;
 scalar_t__ IF_SDIO_IOPORT ;



 int IF_SDIO_SCRATCH ;
 int IF_SDIO_SCRATCH_OLD ;
 int INIT_WORK (int *,int ) ;
 int LBS_DEB_SDIO ;
 scalar_t__ MMC_BUS_WIDTH_1 ;
 int MMC_CAP_SDIO_IRQ ;
 int MMC_QUIRK_LENIENT_FN0 ;
 int SDIO_BUS_ECSI ;
 int SDIO_CCCR_IF ;
 scalar_t__ __lbs_cmd (struct lbs_private*,int ,struct cmd_header*,int,int ,unsigned long) ;
 int create_workqueue (char*) ;
 int destroy_workqueue (int ) ;
 int flush_workqueue (int ) ;
 int if_sdio_host_to_card ;
 int if_sdio_host_to_card_worker ;
 int if_sdio_interrupt ;
 TYPE_3__* if_sdio_models ;
 int if_sdio_prog_firmware (struct if_sdio_packet*) ;
 scalar_t__ if_sdio_read_rx_unit (struct if_sdio_packet*) ;
 int kfree (struct if_sdio_packet*) ;
 struct if_sdio_packet* kzalloc (int,int ) ;
 struct lbs_private* lbs_add_card (struct if_sdio_packet*,int *) ;
 int lbs_cmd_copyback ;
 int lbs_deb_enter (int ) ;
 int lbs_deb_leave_args (int ,char*,int) ;
 int lbs_deb_sdio (char*,...) ;
 scalar_t__ lbs_fw_name ;
 scalar_t__ lbs_helper_name ;
 int lbs_pr_alert (char*) ;
 int lbs_pr_err (char*,...) ;
 int lbs_remove_card (struct lbs_private*) ;
 int lbs_start_card (struct lbs_private*) ;
 int memset (struct cmd_header*,int ,int) ;
 int sdio_claim_host (struct sdio_func*) ;
 int sdio_claim_irq (struct sdio_func*,int ) ;
 int sdio_disable_func (struct sdio_func*) ;
 int sdio_enable_func (struct sdio_func*) ;
 int sdio_f0_readb (struct sdio_func*,int ,int*) ;
 int sdio_f0_writeb (struct sdio_func*,int ,int ,int*) ;
 int sdio_readb (struct sdio_func*,scalar_t__,int*) ;
 int sdio_release_host (struct sdio_func*) ;
 int sdio_release_irq (struct sdio_func*) ;
 int sdio_set_drvdata (struct sdio_func*,struct if_sdio_packet*) ;
 int sdio_writeb (struct sdio_func*,int,int ,int*) ;
 int spin_lock_init (int *) ;
 int sscanf (int ,char*,unsigned int*) ;
 int strcmp (int ,char*) ;

__attribute__((used)) static int if_sdio_probe(struct sdio_func *func,
  const struct sdio_device_id *id)
{
 struct if_sdio_card *card;
 struct lbs_private *priv;
 int ret, i;
 unsigned int model;
 struct if_sdio_packet *packet;
 struct mmc_host *host = func->card->host;

 lbs_deb_enter(LBS_DEB_SDIO);

 for (i = 0;i < func->card->num_info;i++) {
  if (sscanf(func->card->info[i],
    "802.11 SDIO ID: %x", &model) == 1)
   break;
  if (sscanf(func->card->info[i],
    "ID: %x", &model) == 1)
   break;
  if (!strcmp(func->card->info[i], "IBIS Wireless SDIO Card")) {
   model = 130;
   break;
  }
 }

 if (i == func->card->num_info) {
  lbs_pr_err("unable to identify card model\n");
  return -ENODEV;
 }

 card = kzalloc(sizeof(struct if_sdio_card), GFP_KERNEL);
 if (!card)
  return -ENOMEM;

 card->func = func;
 card->model = model;

 switch (card->model) {
 case 130:
  card->scratch_reg = IF_SDIO_SCRATCH_OLD;
  break;
 case 129:
  card->scratch_reg = IF_SDIO_SCRATCH;
  break;
 case 128:
 default:
  card->scratch_reg = IF_SDIO_FW_STATUS;
  break;
 }

 spin_lock_init(&card->lock);
 card->workqueue = create_workqueue("libertas_sdio");
 INIT_WORK(&card->packet_worker, if_sdio_host_to_card_worker);

 for (i = 0;i < ARRAY_SIZE(if_sdio_models);i++) {
  if (card->model == if_sdio_models[i].model)
   break;
 }

 if (i == ARRAY_SIZE(if_sdio_models)) {
  lbs_pr_err("unkown card model 0x%x\n", card->model);
  ret = -ENODEV;
  goto free;
 }

 card->helper = if_sdio_models[i].helper;
 card->firmware = if_sdio_models[i].firmware;

 if (lbs_helper_name) {
  lbs_deb_sdio("overriding helper firmware: %s\n",
   lbs_helper_name);
  card->helper = lbs_helper_name;
 }

 if (lbs_fw_name) {
  lbs_deb_sdio("overriding firmware: %s\n", lbs_fw_name);
  card->firmware = lbs_fw_name;
 }

 sdio_claim_host(func);

 ret = sdio_enable_func(func);
 if (ret)
  goto release;

 ret = sdio_claim_irq(func, if_sdio_interrupt);
 if (ret)
  goto disable;




 if ((card->model == 129) &&
     (host->caps & MMC_CAP_SDIO_IRQ) &&
     (host->ios.bus_width == MMC_BUS_WIDTH_1)) {
  u8 reg;

  func->card->quirks |= MMC_QUIRK_LENIENT_FN0;
  reg = sdio_f0_readb(func, SDIO_CCCR_IF, &ret);
  if (ret)
   goto release_int;

  reg |= SDIO_BUS_ECSI;
  sdio_f0_writeb(func, reg, SDIO_CCCR_IF, &ret);
  if (ret)
   goto release_int;
 }

 card->ioport = sdio_readb(func, IF_SDIO_IOPORT, &ret);
 if (ret)
  goto release_int;

 card->ioport |= sdio_readb(func, IF_SDIO_IOPORT + 1, &ret) << 8;
 if (ret)
  goto release_int;

 card->ioport |= sdio_readb(func, IF_SDIO_IOPORT + 2, &ret) << 16;
 if (ret)
  goto release_int;

 sdio_release_host(func);

 sdio_set_drvdata(func, card);

 lbs_deb_sdio("class = 0x%X, vendor = 0x%X, "
   "device = 0x%X, model = 0x%X, ioport = 0x%X\n",
   func->class, func->vendor, func->device,
   model, (unsigned)card->ioport);

 ret = if_sdio_prog_firmware(card);
 if (ret)
  goto reclaim;

 priv = lbs_add_card(card, &func->dev);
 if (!priv) {
  ret = -ENOMEM;
  goto reclaim;
 }

 card->priv = priv;

 priv->card = card;
 priv->hw_host_to_card = if_sdio_host_to_card;

 priv->fw_ready = 1;

 sdio_claim_host(func);





 if ((card->model != 130)
   && (card->model != 129))
  card->rx_unit = if_sdio_read_rx_unit(card);
 else
  card->rx_unit = 0;




 sdio_writeb(func, 0x0f, IF_SDIO_H_INT_MASK, &ret);
 sdio_release_host(func);
 if (ret)
  goto reclaim;




 if (card->model == 128) {
  struct cmd_header cmd;

  memset(&cmd, 0, sizeof(cmd));

  lbs_deb_sdio("send function INIT command\n");
  if (__lbs_cmd(priv, CMD_FUNC_INIT, &cmd, sizeof(cmd),
    lbs_cmd_copyback, (unsigned long) &cmd))
   lbs_pr_alert("CMD_FUNC_INIT cmd failed\n");
 }

 ret = lbs_start_card(priv);
 if (ret)
  goto err_activate_card;

out:
 lbs_deb_leave_args(LBS_DEB_SDIO, "ret %d", ret);

 return ret;

err_activate_card:
 flush_workqueue(card->workqueue);
 lbs_remove_card(priv);
reclaim:
 sdio_claim_host(func);
release_int:
 sdio_release_irq(func);
disable:
 sdio_disable_func(func);
release:
 sdio_release_host(func);
free:
 destroy_workqueue(card->workqueue);
 while (card->packets) {
  packet = card->packets;
  card->packets = card->packets->next;
  kfree(packet);
 }

 kfree(card);

 goto out;
}
