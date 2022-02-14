
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue {int dummy; } ;
struct proc {int p_wqptr; } ;


 struct workqueue* FUNC_0 (int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static struct workqueue *
FUNC_1(struct proc *VAR_1)
{
 return FUNC_0(&VAR_1->p_wqptr, VAR_0);
}
