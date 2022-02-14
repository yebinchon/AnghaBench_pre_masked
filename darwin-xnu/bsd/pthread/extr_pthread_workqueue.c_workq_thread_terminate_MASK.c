
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue {scalar_t__ wq_reqcount; int wq_nthreads; int wq_thidlecount; int wq_thrunlist; } ;
struct uthread {int uu_workq_flags; int uu_thread; } ;
struct proc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct uthread*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,struct workqueue*,int ,int ,int ,int ) ;
 struct workqueue* FUNC_2 (struct proc*) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (struct workqueue*,int) ;
 int FUNC_5 (struct workqueue*) ;
 int FUNC_6 (struct proc*,struct workqueue*,int ) ;
 int FUNC_7 (struct workqueue*) ;
 scalar_t__ VAR_5 ;

void
FUNC_8(struct proc *VAR_6, struct uthread *VAR_7)
{
 struct workqueue *VAR_8 = FUNC_2(VAR_6);

 FUNC_5(VAR_8);
 FUNC_0(&VAR_8->wq_thrunlist, VAR_7, VAR_4);
 if (VAR_7->uu_workq_flags & VAR_2) {
  FUNC_1(VAR_1 | VAR_0,
    VAR_8, VAR_8->wq_thidlecount, 0, 0, 0);
  FUNC_4(VAR_8, 1);
 }
 if (VAR_8->wq_nthreads-- == VAR_5) {




  if (VAR_8->wq_reqcount) {
   FUNC_6(VAR_6, VAR_8, VAR_3);
  }
 }
 FUNC_7(VAR_8);

 FUNC_3(VAR_7->uu_thread);
}
