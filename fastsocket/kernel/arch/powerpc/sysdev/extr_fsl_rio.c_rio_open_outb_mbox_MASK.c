
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int size; int* phys_buffer; int phys; void** virt_buffer; void* virt; scalar_t__ tx_slot; void* dev_id; } ;
struct rio_priv {TYPE_2__ msg_tx_ring; int dev; TYPE_1__* msg_regs; } ;
struct rio_mport {struct rio_priv* priv; } ;
struct TYPE_3__ {int omr; int osr; int osar; int odqepar; int odqdpar; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rio_mport*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (int ,int,int*,int ) ;
 int FUNC_2 (int ,int,void*,int) ;
 int VAR_7 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (void*,int ,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int ,int ,int ,char*,void*) ;

int FUNC_9(struct rio_mport *VAR_8, void *VAR_9, int VAR_10, int VAR_11)
{
 int VAR_12, VAR_13, VAR_14 = 0;
 struct rio_priv *VAR_15 = VAR_8->priv;

 if ((VAR_11 < VAR_4) ||
     (VAR_11 > VAR_3) || (!FUNC_5(VAR_11))) {
  VAR_14 = -VAR_0;
  goto out;
 }


 VAR_15->msg_tx_ring.dev_id = VAR_9;
 VAR_15->msg_tx_ring.size = VAR_11;

 for (VAR_12 = 0; VAR_12 < VAR_15->msg_tx_ring.size; VAR_12++) {
  VAR_15->msg_tx_ring.virt_buffer[VAR_12] =
   FUNC_1(VAR_15->dev, VAR_5,
    &VAR_15->msg_tx_ring.phys_buffer[VAR_12], VAR_2);
  if (!VAR_15->msg_tx_ring.virt_buffer[VAR_12]) {
   VAR_14 = -VAR_1;
   for (VAR_13 = 0; VAR_13 < VAR_15->msg_tx_ring.size; VAR_13++)
    if (VAR_15->msg_tx_ring.virt_buffer[VAR_13])
     FUNC_2(VAR_15->dev,
       VAR_5,
       VAR_15->msg_tx_ring.
       virt_buffer[VAR_13],
       VAR_15->msg_tx_ring.
       phys_buffer[VAR_13]);
   goto out;
  }
 }


 VAR_15->msg_tx_ring.virt = FUNC_1(VAR_15->dev,
    VAR_15->msg_tx_ring.size * VAR_6,
    &VAR_15->msg_tx_ring.phys, VAR_2);
 if (!VAR_15->msg_tx_ring.virt) {
  VAR_14 = -VAR_1;
  goto out_dma;
 }
 FUNC_6(VAR_15->msg_tx_ring.virt, 0,
   VAR_15->msg_tx_ring.size * VAR_6);
 VAR_15->msg_tx_ring.tx_slot = 0;


 FUNC_7(&VAR_15->msg_regs->odqdpar, VAR_15->msg_tx_ring.phys);
 FUNC_7(&VAR_15->msg_regs->odqepar, VAR_15->msg_tx_ring.phys);


 FUNC_7(&VAR_15->msg_regs->osar, 0x00000004);


 FUNC_7(&VAR_15->msg_regs->osr, 0x000000b3);


 VAR_14 = FUNC_8(FUNC_0(VAR_8), VAR_7, 0,
    "msg_tx", (void *)VAR_8);
 if (VAR_14 < 0)
  goto out_irq;
 FUNC_7(&VAR_15->msg_regs->omr, 0x00100220);


 FUNC_7(&VAR_15->msg_regs->omr,
   FUNC_4(&VAR_15->msg_regs->omr) |
   ((FUNC_3(VAR_11) - 2) << 12));


 FUNC_7(&VAR_15->msg_regs->omr, FUNC_4(&VAR_15->msg_regs->omr) | 0x1);

      out:
 return VAR_14;

      out_irq:
 FUNC_2(VAR_15->dev,
     VAR_15->msg_tx_ring.size * VAR_6,
     VAR_15->msg_tx_ring.virt, VAR_15->msg_tx_ring.phys);

      out_dma:
 for (VAR_12 = 0; VAR_12 < VAR_15->msg_tx_ring.size; VAR_12++)
  FUNC_2(VAR_15->dev, VAR_5,
      VAR_15->msg_tx_ring.virt_buffer[VAR_12],
      VAR_15->msg_tx_ring.phys_buffer[VAR_12]);

 return VAR_14;
}
