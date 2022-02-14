
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int * phys_buffer; int * virt_buffer; } ;
struct TYPE_4__ {int size; scalar_t__ phys; int virt; int ** virt_buffer; scalar_t__ rx_slot; void* dev_id; } ;
struct rio_priv {TYPE_3__* msg_regs; TYPE_2__ msg_tx_ring; int dev; TYPE_1__ msg_rx_ring; } ;
struct rio_mport {struct rio_priv* priv; } ;
struct TYPE_6__ {int imr; int isr; int ifqepar; int ifqdpar; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rio_mport*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int,scalar_t__*,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int VAR_7 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int ,int ,int ,char*,void*) ;
 int FUNC_7 (int *,int) ;

int FUNC_8(struct rio_mport *VAR_8, void *VAR_9, int VAR_10, int VAR_11)
{
 int VAR_12, VAR_13 = 0;
 struct rio_priv *VAR_14 = VAR_8->priv;

 if ((VAR_11 < VAR_5) ||
     (VAR_11 > VAR_4) || (!FUNC_4(VAR_11))) {
  VAR_13 = -VAR_0;
  goto out;
 }


 VAR_14->msg_rx_ring.dev_id = VAR_9;
 VAR_14->msg_rx_ring.size = VAR_11;
 VAR_14->msg_rx_ring.rx_slot = 0;
 for (VAR_12 = 0; VAR_12 < VAR_14->msg_rx_ring.size; VAR_12++)
  VAR_14->msg_rx_ring.virt_buffer[VAR_12] = ((void*)0);


 VAR_14->msg_rx_ring.virt = FUNC_1(VAR_14->dev,
    VAR_14->msg_rx_ring.size * VAR_3,
    &VAR_14->msg_rx_ring.phys, VAR_2);
 if (!VAR_14->msg_rx_ring.virt) {
  VAR_13 = -VAR_1;
  goto out;
 }


 FUNC_5(&VAR_14->msg_regs->ifqdpar, (u32) VAR_14->msg_rx_ring.phys);
 FUNC_5(&VAR_14->msg_regs->ifqepar, (u32) VAR_14->msg_rx_ring.phys);


 FUNC_5(&VAR_14->msg_regs->isr, 0x00000091);


 VAR_13 = FUNC_6(FUNC_0(VAR_8), VAR_7, 0,
    "msg_rx", (void *)VAR_8);
 if (VAR_13 < 0) {
  FUNC_2(VAR_14->dev, VAR_6,
      VAR_14->msg_tx_ring.virt_buffer[VAR_12],
      VAR_14->msg_tx_ring.phys_buffer[VAR_12]);
  goto out;
 }
 FUNC_5(&VAR_14->msg_regs->imr, 0x001b0060);


 FUNC_7(&VAR_14->msg_regs->imr, (FUNC_3(VAR_11) - 2) << 12);


 FUNC_7(&VAR_14->msg_regs->imr, 0x1);

      out:
 return VAR_13;
}
