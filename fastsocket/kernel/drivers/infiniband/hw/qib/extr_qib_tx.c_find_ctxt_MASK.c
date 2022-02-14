
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_devdata {unsigned int first_user_ctxt; unsigned int cfgctxts; int uctxt_lock; struct qib_ctxtdata** rcd; } ;
struct qib_ctxtdata {unsigned int pio_base; unsigned int piocnt; int subctxt_cnt; int * user_event_mask; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct qib_devdata *VAR_1, unsigned VAR_2)
{
 struct qib_ctxtdata *VAR_3;
 unsigned VAR_4;
 int VAR_5 = 0;

 FUNC_1(&VAR_1->uctxt_lock);
 for (VAR_4 = VAR_1->first_user_ctxt; VAR_4 < VAR_1->cfgctxts; VAR_4++) {
  VAR_3 = VAR_1->rcd[VAR_4];
  if (!VAR_3 || VAR_2 < VAR_3->pio_base ||
      VAR_2 >= VAR_3->pio_base + VAR_3->piocnt)
   continue;
  if (VAR_3->user_event_mask) {
   int VAR_6;




   FUNC_0(VAR_0,
    &VAR_3->user_event_mask[0]);
   for (VAR_6 = 1; VAR_6 < VAR_3->subctxt_cnt; VAR_6++)
    FUNC_0(VAR_0,
     &VAR_3->user_event_mask[VAR_6]);
  }
  VAR_5 = 1;
  break;
 }
 FUNC_2(&VAR_1->uctxt_lock);

 return VAR_5;
}
