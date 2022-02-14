
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue {int dummy; } ;
struct proc {int p_wqptr; } ;


 struct workqueue* VAR_0 ;
 struct workqueue* FUNC_0 (int *,struct workqueue*,int ) ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (struct proc*) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct proc *VAR_2, struct workqueue *VAR_3)
{
 VAR_3 = FUNC_0(&VAR_2->p_wqptr, VAR_3, VAR_1);
 if (VAR_3 == VAR_0) {
  FUNC_1(VAR_2);
  FUNC_3(&VAR_2->p_wqptr);
  FUNC_2(VAR_2);
 }
}
