
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct talitos_request {int dummy; } ;
struct talitos_private {scalar_t__ irq; unsigned int num_channels; unsigned int chfifo_len; unsigned int exec_units; unsigned int desc_types; int fifo_len; int alg_list; TYPE_1__* chan; int features; int reg; int done_task; struct of_device* ofdev; } ;
struct TYPE_8__ {int cra_driver_name; } ;
struct talitos_crypto_alg {TYPE_4__ crypto_alg; int entry; } ;
struct talitos_channel {int dummy; } ;
struct of_device_id {int dummy; } ;
struct device {int dummy; } ;
struct of_device {struct device_node* node; struct device dev; } ;
struct device_node {int dummy; } ;
struct TYPE_7__ {int desc_hdr_template; } ;
struct TYPE_6__ {int submit_count; void* fifo; int tail_lock; int head_lock; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct talitos_crypto_alg*) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (struct talitos_crypto_alg*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*,char*,...) ;
 int FUNC_9 (struct device*,char*,...) ;
 int FUNC_10 (struct device*,struct talitos_private*) ;
 int FUNC_11 (struct device*,int ) ;
 TYPE_2__* VAR_7 ;
 scalar_t__ FUNC_12 (struct device*,int ) ;
 int FUNC_13 (struct device*) ;
 int FUNC_14 (int) ;
 scalar_t__ FUNC_15 (struct device_node*,int ) ;
 int FUNC_16 (unsigned int) ;
 int FUNC_17 (struct talitos_crypto_alg*) ;
 void* FUNC_18 (int,int ) ;
 int FUNC_19 (int *,int *) ;
 scalar_t__ FUNC_20 (struct device_node*,char*) ;
 unsigned int* FUNC_21 (struct device_node*,char*,int *) ;
 int FUNC_22 (struct device_node*,int ) ;
 int FUNC_23 (scalar_t__,int ,int ,int ,struct device*) ;
 int FUNC_24 (unsigned int) ;
 int FUNC_25 (int *) ;
 struct talitos_crypto_alg* FUNC_26 (struct device*,TYPE_2__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_27 (struct device*) ;
 int FUNC_28 (struct of_device*) ;
 int FUNC_29 (int *,int ,unsigned long) ;

__attribute__((used)) static int FUNC_30(struct of_device *VAR_10,
    const struct of_device_id *VAR_11)
{
 struct device *VAR_12 = &VAR_10->dev;
 struct device_node *VAR_13 = VAR_10->node;
 struct talitos_private *VAR_14;
 const unsigned int *VAR_15;
 int VAR_16, VAR_17;

 VAR_14 = FUNC_18(sizeof(struct talitos_private), VAR_3);
 if (!VAR_14)
  return -VAR_2;

 FUNC_10(VAR_12, VAR_14);

 VAR_14->ofdev = VAR_10;

 FUNC_29(&VAR_14->done_task, VAR_8, (unsigned long)VAR_12);

 FUNC_2(&VAR_14->alg_list);

 VAR_14->irq = FUNC_15(VAR_13, 0);

 if (VAR_14->irq == VAR_4) {
  FUNC_8(VAR_12, "failed to map irq\n");
  VAR_17 = -VAR_1;
  goto err_out;
 }


 VAR_17 = FUNC_23(VAR_14->irq, VAR_9, 0,
     FUNC_7(VAR_12), VAR_12);
 if (VAR_17) {
  FUNC_8(VAR_12, "failed to request irq %d\n", VAR_14->irq);
  FUNC_14(VAR_14->irq);
  VAR_14->irq = VAR_4;
  goto err_out;
 }

 VAR_14->reg = FUNC_22(VAR_13, 0);
 if (!VAR_14->reg) {
  FUNC_8(VAR_12, "failed to of_iomap\n");
  VAR_17 = -VAR_2;
  goto err_out;
 }


 VAR_15 = FUNC_21(VAR_13, "fsl,num-channels", ((void*)0));
 if (VAR_15)
  VAR_14->num_channels = *VAR_15;

 VAR_15 = FUNC_21(VAR_13, "fsl,channel-fifo-len", ((void*)0));
 if (VAR_15)
  VAR_14->chfifo_len = *VAR_15;

 VAR_15 = FUNC_21(VAR_13, "fsl,exec-units-mask", ((void*)0));
 if (VAR_15)
  VAR_14->exec_units = *VAR_15;

 VAR_15 = FUNC_21(VAR_13, "fsl,descriptor-types-mask", ((void*)0));
 if (VAR_15)
  VAR_14->desc_types = *VAR_15;

 if (!FUNC_16(VAR_14->num_channels) || !VAR_14->chfifo_len ||
     !VAR_14->exec_units || !VAR_14->desc_types) {
  FUNC_8(VAR_12, "invalid property data in device tree node\n");
  VAR_17 = -VAR_1;
  goto err_out;
 }

 if (FUNC_20(VAR_13, "fsl,sec3.0"))
  VAR_14->features |= VAR_6;

 if (FUNC_20(VAR_13, "fsl,sec2.1"))
  VAR_14->features |= VAR_5;

 VAR_14->chan = FUNC_18(sizeof(struct talitos_channel) *
        VAR_14->num_channels, VAR_3);
 if (!VAR_14->chan) {
  FUNC_8(VAR_12, "failed to allocate channel management space\n");
  VAR_17 = -VAR_2;
  goto err_out;
 }

 for (VAR_16 = 0; VAR_16 < VAR_14->num_channels; VAR_16++) {
  FUNC_25(&VAR_14->chan[VAR_16].head_lock);
  FUNC_25(&VAR_14->chan[VAR_16].tail_lock);
 }

 VAR_14->fifo_len = FUNC_24(VAR_14->chfifo_len);

 for (VAR_16 = 0; VAR_16 < VAR_14->num_channels; VAR_16++) {
  VAR_14->chan[VAR_16].fifo = FUNC_18(sizeof(struct talitos_request) *
          VAR_14->fifo_len, VAR_3);
  if (!VAR_14->chan[VAR_16].fifo) {
   FUNC_8(VAR_12, "failed to allocate request fifo %d\n", VAR_16);
   VAR_17 = -VAR_2;
   goto err_out;
  }
 }

 for (VAR_16 = 0; VAR_16 < VAR_14->num_channels; VAR_16++)
  FUNC_5(&VAR_14->chan[VAR_16].submit_count,
      -(VAR_14->chfifo_len - 1));

 FUNC_11(VAR_12, FUNC_1(36));


 VAR_17 = FUNC_13(VAR_12);
 if (VAR_17) {
  FUNC_8(VAR_12, "failed to initialize device\n");
  goto err_out;
 }


 if (FUNC_12(VAR_12, VAR_0)) {
  VAR_17 = FUNC_27(VAR_12);
  if (VAR_17) {
   FUNC_8(VAR_12, "failed to register hwrng: %d\n", VAR_17);
   goto err_out;
  } else
   FUNC_9(VAR_12, "hwrng\n");
 }


 for (VAR_16 = 0; VAR_16 < FUNC_0(VAR_7); VAR_16++) {
  if (FUNC_12(VAR_12, VAR_7[VAR_16].desc_hdr_template)) {
   struct talitos_crypto_alg *VAR_18;

   VAR_18 = FUNC_26(VAR_12, &VAR_7[VAR_16]);
   if (FUNC_3(VAR_18)) {
    VAR_17 = FUNC_4(VAR_18);
    goto err_out;
   }

   VAR_17 = FUNC_6(&VAR_18->crypto_alg);
   if (VAR_17) {
    FUNC_8(VAR_12, "%s alg registration failed\n",
     VAR_18->crypto_alg.cra_driver_name);
    FUNC_17(VAR_18);
   } else {
    FUNC_19(&VAR_18->entry, &VAR_14->alg_list);
    FUNC_9(VAR_12, "%s\n",
      VAR_18->crypto_alg.cra_driver_name);
   }
  }
 }

 return 0;

err_out:
 FUNC_28(VAR_10);

 return VAR_17;
}
