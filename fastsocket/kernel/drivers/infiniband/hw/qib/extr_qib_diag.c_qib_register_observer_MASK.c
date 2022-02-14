
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_devdata {int qib_diag_trans_lock; struct diag_observer_list_elt* diag_observer_list; } ;
struct diag_observer_list_elt {struct diag_observer_list_elt* next; struct diag_observer const* op; } ;
struct diag_observer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct diag_observer_list_elt* FUNC_3 (int) ;

int FUNC_4(struct qib_devdata *VAR_2,
     const struct diag_observer *VAR_3)
{
 struct diag_observer_list_elt *VAR_4;
 int VAR_5 = -VAR_0;

 if (!VAR_2 || !VAR_3)
  goto bail;
 VAR_5 = -VAR_1;
 VAR_4 = FUNC_3(sizeof *VAR_4);
 if (!VAR_4) {
  FUNC_0("vmalloc for observer failed\n");
  goto bail;
 }
 if (VAR_4) {
  unsigned long VAR_6;

  FUNC_1(&VAR_2->qib_diag_trans_lock, VAR_6);
  VAR_4->op = VAR_3;
  VAR_4->next = VAR_2->diag_observer_list;
  VAR_2->diag_observer_list = VAR_4;
  FUNC_2(&VAR_2->qib_diag_trans_lock, VAR_6);
  VAR_5 = 0;
 }
bail:
 return VAR_5;
}
