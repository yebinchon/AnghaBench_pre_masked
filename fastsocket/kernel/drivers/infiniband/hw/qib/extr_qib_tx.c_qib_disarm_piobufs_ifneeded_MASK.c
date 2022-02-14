
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_devdata {int pioavail_lock; int (* f_sendctrl ) (int ,int ) ;int pio_need_disarm; } ;
struct qib_ctxtdata {unsigned int pio_base; unsigned int piocnt; unsigned int subctxt_cnt; int ppd; int * user_event_mask; struct qib_devdata* dd; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;

int FUNC_6(struct qib_ctxtdata *VAR_1)
{
 struct qib_devdata *VAR_2 = VAR_1->dd;
 unsigned VAR_3;
 unsigned VAR_4;
 unsigned VAR_5 = 0;

 VAR_4 = VAR_1->pio_base + VAR_1->piocnt;





 if (VAR_1->user_event_mask) {




  FUNC_2(VAR_0, &VAR_1->user_event_mask[0]);
  for (VAR_3 = 1; VAR_3 < VAR_1->subctxt_cnt; VAR_3++)
   FUNC_2(VAR_0,
      &VAR_1->user_event_mask[VAR_3]);
 }
 FUNC_3(&VAR_2->pioavail_lock);
 for (VAR_3 = VAR_1->pio_base; VAR_3 < VAR_4; VAR_3++) {
  if (FUNC_1(VAR_3, VAR_2->pio_need_disarm)) {
   VAR_5++;
   VAR_2->f_sendctrl(VAR_1->ppd, FUNC_0(VAR_3));
  }
 }
 FUNC_4(&VAR_2->pioavail_lock);
 return 0;
}
