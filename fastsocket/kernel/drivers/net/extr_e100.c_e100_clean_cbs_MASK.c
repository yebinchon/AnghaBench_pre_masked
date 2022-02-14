
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ count; } ;
struct TYPE_7__ {TYPE_1__ cbs; } ;
struct nic {scalar_t__ cbs_avail; struct cb* cbs; struct cb* cb_to_clean; struct cb* cb_to_send; struct cb* cb_to_use; int cuc_cmd; int cbs_dma_addr; int cbs_pool; int pdev; TYPE_2__ params; } ;
struct TYPE_8__ {int size; int buf_addr; } ;
struct TYPE_9__ {TYPE_3__ tbd; } ;
struct TYPE_10__ {TYPE_4__ tcb; } ;
struct cb {struct cb* next; scalar_t__ skb; TYPE_5__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct cb*,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct nic *VAR_2)
{
 if (VAR_2->cbs) {
  while (VAR_2->cbs_avail != VAR_2->params.cbs.count) {
   struct cb *VAR_3 = VAR_2->cb_to_clean;
   if (VAR_3->skb) {
    FUNC_4(VAR_2->pdev,
     FUNC_2(VAR_3->u.tcb.tbd.buf_addr),
     FUNC_1(VAR_3->u.tcb.tbd.size),
     VAR_0);
    FUNC_0(VAR_3->skb);
   }
   VAR_2->cb_to_clean = VAR_2->cb_to_clean->next;
   VAR_2->cbs_avail++;
  }
  FUNC_3(VAR_2->cbs_pool, VAR_2->cbs, VAR_2->cbs_dma_addr);
  VAR_2->cbs = ((void*)0);
  VAR_2->cbs_avail = 0;
 }
 VAR_2->cuc_cmd = VAR_1;
 VAR_2->cb_to_use = VAR_2->cb_to_send = VAR_2->cb_to_clean =
  VAR_2->cbs;
}
