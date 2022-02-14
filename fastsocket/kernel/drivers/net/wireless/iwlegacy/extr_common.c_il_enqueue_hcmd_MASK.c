
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
typedef scalar_t__ u16 ;
struct il_queue {int n_bd; int write_ptr; } ;
struct il_tx_queue {int need_update; struct il_cmd_meta* meta; struct il_device_cmd** cmd; struct il_queue q; } ;
struct il_priv {size_t cmd_queue; int hcmd_lock; TYPE_2__* ops; int pci_dev; int restart; int workqueue; struct il_tx_queue* txq; } ;
struct il_host_cmd {int len; int id; long flags; int data; int callback; } ;
struct TYPE_6__ {int cmd; int sequence; int flags; } ;
struct TYPE_4__ {int payload; } ;
struct il_device_cmd {TYPE_3__ hdr; TYPE_1__ cmd; } ;
struct il_cmd_meta {int flags; int callback; struct il_host_cmd* source; } ;
typedef int dma_addr_t ;
struct TYPE_5__ {int (* get_hcmd_size ) (int,int) ;int (* txq_attach_buf_to_tfd ) (struct il_priv*,struct il_tx_queue*,int ,scalar_t__,int,int ) ;int (* txq_update_byte_cnt_tbl ) (struct il_priv*,struct il_tx_queue*,int ) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;


 int FUNC_1 (char*,int ,int,int ,scalar_t__,int ,size_t,size_t) ;
 int FUNC_2 (char*,int ,int,int ,scalar_t__,int ,size_t,size_t) ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (char*,char*) ;
 int VAR_8 ;
 int FUNC_6 (size_t) ;
 int VAR_9 ;
 size_t VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct il_cmd_meta*,int ,int ) ;
 int FUNC_11 (struct il_cmd_meta*,int,scalar_t__) ;
 size_t FUNC_12 (struct il_queue*,int ,long) ;
 int FUNC_13 (int) ;
 scalar_t__ FUNC_14 (struct il_priv*) ;
 scalar_t__ FUNC_15 (struct il_priv*) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (struct il_queue*) ;
 int FUNC_18 (struct il_priv*,struct il_tx_queue*) ;
 int FUNC_19 (int ) ;
 int VAR_12 ;
 int FUNC_20 (int *,int ,int) ;
 int FUNC_21 (struct il_cmd_meta*,int ,int) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (int ,TYPE_3__*,scalar_t__,int ) ;
 int FUNC_24 (int ,int *) ;
 int FUNC_25 (int *,unsigned long) ;
 int FUNC_26 (int *,unsigned long) ;
 int FUNC_27 (int,int) ;
 int FUNC_28 (struct il_priv*,struct il_tx_queue*,int ) ;
 int FUNC_29 (struct il_priv*,struct il_tx_queue*,int ,scalar_t__,int,int ) ;
 scalar_t__ FUNC_30 (int ) ;

int
FUNC_31(struct il_priv *VAR_13, struct il_host_cmd *VAR_14)
{
 struct il_tx_queue *VAR_15 = &VAR_13->txq[VAR_13->cmd_queue];
 struct il_queue *VAR_16 = &VAR_15->q;
 struct il_device_cmd *VAR_17;
 struct il_cmd_meta *VAR_18;
 dma_addr_t VAR_19;
 unsigned long VAR_20;
 int VAR_21;
 u32 VAR_22;
 u16 VAR_23;

 VAR_14->len = VAR_13->ops->get_hcmd_size(VAR_14->id, VAR_14->len);
 VAR_23 = (u16) (VAR_14->len + sizeof(VAR_17->hdr));






 FUNC_0((VAR_23 > VAR_11) &&
        !(VAR_14->flags & VAR_2));
 FUNC_0(VAR_23 > VAR_7);

 if (FUNC_15(VAR_13) || FUNC_14(VAR_13)) {
  FUNC_5("Not sending command - %s KILL\n",
   FUNC_15(VAR_13) ? "RF" : "CT");
  return -VAR_4;
 }

 FUNC_25(&VAR_13->hcmd_lock, VAR_20);

 if (FUNC_17(VAR_16) < ((VAR_14->flags & VAR_0) ? 2 : 1)) {
  FUNC_26(&VAR_13->hcmd_lock, VAR_20);

  FUNC_4("Restarting adapter due to command queue full\n");
  FUNC_24(VAR_13->workqueue, &VAR_13->restart);
  return -VAR_6;
 }

 VAR_22 = FUNC_12(VAR_16, VAR_16->write_ptr, VAR_14->flags & VAR_2);
 VAR_17 = VAR_15->cmd[VAR_22];
 VAR_18 = &VAR_15->meta[VAR_22];

 if (FUNC_8(VAR_18->flags & VAR_1)) {
  FUNC_26(&VAR_13->hcmd_lock, VAR_20);
  return -VAR_6;
 }

 FUNC_21(VAR_18, 0, sizeof(*VAR_18));
 VAR_18->flags = VAR_14->flags | VAR_1;
 if (VAR_14->flags & VAR_3)
  VAR_18->source = VAR_14;
 if (VAR_14->flags & VAR_0)
  VAR_18->callback = VAR_14->callback;

 VAR_17->hdr.cmd = VAR_14->id;
 FUNC_20(&VAR_17->cmd.payload, VAR_14->data, VAR_14->len);




 VAR_17->hdr.flags = 0;
 VAR_17->hdr.sequence =
     FUNC_9(FUNC_6(VAR_13->cmd_queue) | FUNC_3(VAR_16->write_ptr));
 if (VAR_14->flags & VAR_2)
  VAR_17->hdr.sequence |= VAR_9;
 VAR_21 = sizeof(struct il_device_cmd);
 if (VAR_22 == VAR_10)
  VAR_21 = VAR_7;
 VAR_19 =
     FUNC_23(VAR_13->pci_dev, &VAR_17->hdr, VAR_23,
      VAR_8);
 if (FUNC_30(FUNC_22(VAR_13->pci_dev, VAR_19))) {
  VAR_22 = -VAR_5;
  goto out;
 }
 FUNC_10(VAR_18, VAR_12, VAR_19);
 FUNC_11(VAR_18, VAR_21, VAR_23);

 VAR_15->need_update = 1;

 if (VAR_13->ops->txq_update_byte_cnt_tbl)

  VAR_13->ops->txq_update_byte_cnt_tbl(VAR_13, VAR_15, 0);

 VAR_13->ops->txq_attach_buf_to_tfd(VAR_13, VAR_15, VAR_19, VAR_23, 1,
         FUNC_7(VAR_14->len));


 VAR_16->write_ptr = FUNC_16(VAR_16->write_ptr, VAR_16->n_bd);
 FUNC_18(VAR_13, VAR_15);

out:
 FUNC_26(&VAR_13->hcmd_lock, VAR_20);
 return VAR_22;
}
