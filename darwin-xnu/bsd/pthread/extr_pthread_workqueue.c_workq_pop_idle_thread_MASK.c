
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue {int wq_thidlecount; int wq_threads_scheduled; int wq_thrunlist; int wq_thnewlist; int wq_thidlelist; } ;
struct uthread {int uu_workq_flags; } ;


 struct uthread* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct uthread*,int ) ;
 int FUNC_2 (int *,struct uthread*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int FUNC_5 (struct workqueue*,int) ;

__attribute__((used)) static struct uthread *
FUNC_6(struct workqueue *VAR_4)
{
 struct uthread *VAR_5;

 if ((VAR_5 = FUNC_0(&VAR_4->wq_thidlelist))) {
  FUNC_2(&VAR_4->wq_thidlelist, VAR_5, VAR_3);
 } else {
  VAR_5 = FUNC_0(&VAR_4->wq_thnewlist);
  FUNC_2(&VAR_4->wq_thnewlist, VAR_5, VAR_3);
 }
 FUNC_1(&VAR_4->wq_thrunlist, VAR_5, VAR_3);

 FUNC_4((VAR_5->uu_workq_flags & VAR_2) == 0);
 VAR_5->uu_workq_flags |= VAR_2 | VAR_1;
 VAR_4->wq_threads_scheduled++;
 VAR_4->wq_thidlecount--;

 if (FUNC_3(VAR_5->uu_workq_flags & VAR_0)) {
  VAR_5->uu_workq_flags ^= VAR_0;
  FUNC_5(VAR_4, 1);
 }
 return VAR_5;
}
