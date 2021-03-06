
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bnad {int cfg_flags; int num_tx; int num_txq_per_tx; int bna_lock; } ;
struct bna_intr_info {int num; TYPE_1__* idl; int intr_type; } ;
struct bna_intr_descr {int dummy; } ;
typedef enum bnad_intr_source { ____Placeholder_bnad_intr_source } bnad_intr_source ;
struct TYPE_2__ {int vector; } ;


 int BNAD_CF_MSIX ;


 int BNAD_INTX_RX_IB_BITMASK ;
 int BNAD_INTX_TX_IB_BITMASK ;
 int BNAD_MAILBOX_MSIX_VECTORS ;
 int BNA_INTR_T_INTX ;
 int BNA_INTR_T_MSIX ;
 int BUG () ;
 int ENOMEM ;
 int GFP_KERNEL ;
 void* kcalloc (int,int,int ) ;
 int spin_lock_irqsave (int *,unsigned long) ;
 int spin_unlock_irqrestore (int *,unsigned long) ;

__attribute__((used)) static int
bnad_txrx_irq_alloc(struct bnad *bnad, enum bnad_intr_source src,
      u32 txrx_id, struct bna_intr_info *intr_info)
{
 int i, vector_start = 0;
 u32 cfg_flags;
 unsigned long flags;

 spin_lock_irqsave(&bnad->bna_lock, flags);
 cfg_flags = bnad->cfg_flags;
 spin_unlock_irqrestore(&bnad->bna_lock, flags);

 if (cfg_flags & BNAD_CF_MSIX) {
  intr_info->intr_type = BNA_INTR_T_MSIX;
  intr_info->idl = kcalloc(intr_info->num,
     sizeof(struct bna_intr_descr),
     GFP_KERNEL);
  if (!intr_info->idl)
   return -ENOMEM;

  switch (src) {
  case 128:
   vector_start = BNAD_MAILBOX_MSIX_VECTORS + txrx_id;
   break;

  case 129:
   vector_start = BNAD_MAILBOX_MSIX_VECTORS +
     (bnad->num_tx * bnad->num_txq_per_tx) +
     txrx_id;
   break;

  default:
   BUG();
  }

  for (i = 0; i < intr_info->num; i++)
   intr_info->idl[i].vector = vector_start + i;
 } else {
  intr_info->intr_type = BNA_INTR_T_INTX;
  intr_info->num = 1;
  intr_info->idl = kcalloc(intr_info->num,
     sizeof(struct bna_intr_descr),
     GFP_KERNEL);
  if (!intr_info->idl)
   return -ENOMEM;

  switch (src) {
  case 128:
   intr_info->idl[0].vector = BNAD_INTX_TX_IB_BITMASK;
   break;

  case 129:
   intr_info->idl[0].vector = BNAD_INTX_RX_IB_BITMASK;
   break;
  }
 }
 return 0;
}
