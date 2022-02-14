
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue {int wq_flags; } ;
struct proc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 struct workqueue* FUNC_1 (struct proc*) ;
 int VAR_1 ;

void
FUNC_2(struct proc *VAR_2)
{
 struct workqueue *VAR_3 = FUNC_1(VAR_2);

 if (VAR_3) FUNC_0(&VAR_3->wq_flags, VAR_0, VAR_1);
}
