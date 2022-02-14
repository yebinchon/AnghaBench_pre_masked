
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct txdma_mailbox {int dummy; } ;
struct tx_ring_info {scalar_t__ wrap_bit; scalar_t__ cons; scalar_t__ prod; scalar_t__ pending; int * descr; int descr_dma; TYPE_1__* tx_buffs; int * mbox; int mbox_dma; } ;
struct niu {int device; TYPE_2__* ops; } ;
typedef int __le64 ;
struct TYPE_4__ {int (* free_coherent ) (int ,int,int *,int ) ;} ;
struct TYPE_3__ {scalar_t__ skb; } ;


 int VAR_0 ;
 int FUNC_0 (struct niu*,struct tx_ring_info*,int) ;
 int FUNC_1 (int ,int,int *,int ) ;
 int FUNC_2 (int ,int,int *,int ) ;

__attribute__((used)) static void FUNC_3(struct niu *VAR_1, struct tx_ring_info *VAR_2)
{
 if (VAR_2->mbox) {
  VAR_1->ops->free_coherent(VAR_1->device,
           sizeof(struct txdma_mailbox),
           VAR_2->mbox, VAR_2->mbox_dma);
  VAR_2->mbox = ((void*)0);
 }
 if (VAR_2->descr) {
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
   if (VAR_2->tx_buffs[VAR_3].skb)
    (void) FUNC_0(VAR_1, VAR_2, VAR_3);
  }

  VAR_1->ops->free_coherent(VAR_1->device,
           VAR_0 * sizeof(__le64),
           VAR_2->descr, VAR_2->descr_dma);
  VAR_2->descr = ((void*)0);
  VAR_2->pending = 0;
  VAR_2->prod = 0;
  VAR_2->cons = 0;
  VAR_2->wrap_bit = 0;
 }
}
