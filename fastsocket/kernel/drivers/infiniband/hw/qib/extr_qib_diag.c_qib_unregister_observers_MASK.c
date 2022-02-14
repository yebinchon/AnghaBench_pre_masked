
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_devdata {int qib_diag_trans_lock; struct diag_observer_list_elt* diag_observer_list; } ;
struct diag_observer_list_elt {struct diag_observer_list_elt* next; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct diag_observer_list_elt*) ;

__attribute__((used)) static void FUNC_3(struct qib_devdata *VAR_0)
{
 struct diag_observer_list_elt *VAR_1;
 unsigned long VAR_2;

 FUNC_0(&VAR_0->qib_diag_trans_lock, VAR_2);
 VAR_1 = VAR_0->diag_observer_list;
 while (VAR_1) {

  VAR_0->diag_observer_list = VAR_1->next;
  FUNC_1(&VAR_0->qib_diag_trans_lock, VAR_2);
  FUNC_2(VAR_1);

  FUNC_0(&VAR_0->qib_diag_trans_lock, VAR_2);
  VAR_1 = VAR_0->diag_observer_list;
 }
 FUNC_1(&VAR_0->qib_diag_trans_lock, VAR_2);
}
