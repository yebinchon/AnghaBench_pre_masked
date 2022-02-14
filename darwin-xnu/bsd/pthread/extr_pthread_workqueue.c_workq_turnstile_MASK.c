
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue {struct turnstile* wq_turnstile; } ;
struct turnstile {int dummy; } ;
struct proc {int dummy; } ;


 struct turnstile* VAR_0 ;
 struct workqueue* FUNC_0 (struct proc*) ;

struct turnstile *
FUNC_1(struct proc *VAR_1)
{
 struct workqueue *VAR_2 = FUNC_0(VAR_1);
 return VAR_2 ? VAR_2->wq_turnstile : VAR_0;
}
