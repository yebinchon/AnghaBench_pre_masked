
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sym_tcb {struct sym_ccb* nego_cp; } ;
struct TYPE_2__ {void* resel_sa; void* itl_task_sa; } ;
struct sym_lcb {size_t* cb_tags; size_t if_tag; scalar_t__ busy_itlq; scalar_t__ busy_itl; int started_no_tag; int started_tags; TYPE_1__ head; void** itlq_tbl; int * tags_sum; } ;
struct sym_hcb {int dummy_ccbq; int free_ccbq; struct sym_ccb* last_cp; int bad_itl_ba; int bad_itlq_ba; struct sym_tcb* target; } ;
struct sym_ccb {size_t target; size_t tag; size_t tags_si; scalar_t__ started; int link2_ccbq; int link_ccbq; int host_status; int * cmd; int lun; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct sym_hcb*,int ) ;
 size_t VAR_4 ;
 void* FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 struct sym_lcb* FUNC_4 (struct sym_tcb*,int ) ;
 int FUNC_5 (int *,char*,struct sym_ccb*,size_t) ;
 int FUNC_6 (int *) ;

void FUNC_7 (struct sym_hcb *VAR_6, struct sym_ccb *VAR_7)
{
 struct sym_tcb *VAR_8 = &VAR_6->target[VAR_7->target];
 struct sym_lcb *VAR_9 = FUNC_4(VAR_8, VAR_7->lun);

 if (VAR_0 & VAR_1) {
  FUNC_5(VAR_7->cmd, "ccb @%p freeing tag %d.\n",
    VAR_7, VAR_7->tag);
 }




 if (VAR_9) {



  if (VAR_7->tag != VAR_3) {






   VAR_9->cb_tags[VAR_9->if_tag] = VAR_7->tag;
   if (++VAR_9->if_tag == VAR_4)
    VAR_9->if_tag = 0;




   VAR_9->itlq_tbl[VAR_7->tag] = FUNC_1(VAR_6->bad_itlq_ba);
   --VAR_9->busy_itlq;
  } else {




   VAR_9->head.itl_task_sa = FUNC_1(VAR_6->bad_itl_ba);
   --VAR_9->busy_itl;
  }



  if (VAR_9->busy_itlq == 0 && VAR_9->busy_itl == 0)
   VAR_9->head.resel_sa =
    FUNC_1(FUNC_0(VAR_6, VAR_5));
 }






 if (VAR_7 == VAR_8->nego_cp)
  VAR_8->nego_cp = ((void*)0);
 VAR_7->cmd = ((void*)0);
 VAR_7->host_status = VAR_2;
 FUNC_6(&VAR_7->link_ccbq);
 FUNC_2(&VAR_7->link_ccbq, &VAR_6->free_ccbq);
}
