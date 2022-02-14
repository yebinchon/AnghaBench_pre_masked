
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue {int dummy; } ;
struct proc {int dummy; } ;


 scalar_t__ FUNC_0 (struct workqueue*) ;
 struct workqueue* FUNC_1 (struct proc*) ;

bool
FUNC_2(struct proc *VAR_0)
{
 struct workqueue *VAR_1 = FUNC_1(VAR_0);
 return !VAR_1 || FUNC_0(VAR_1);
}
