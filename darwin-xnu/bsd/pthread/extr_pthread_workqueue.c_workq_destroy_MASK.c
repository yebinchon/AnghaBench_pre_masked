
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue {int wq_lock; int wq_turnstile; } ;
struct turnstile {int dummy; } ;


 int FUNC_0 (struct turnstile*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (uintptr_t,int *,struct turnstile**) ;
 int FUNC_4 (struct turnstile*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int ,struct workqueue*) ;

void
FUNC_6(struct workqueue *VAR_2)
{
 struct turnstile *VAR_3;

 FUNC_3((uintptr_t)VAR_2, &VAR_2->wq_turnstile, &VAR_3);
 FUNC_0(VAR_3);
 FUNC_2();
 FUNC_4(VAR_3);

 FUNC_1(&VAR_2->wq_lock, VAR_0);
 FUNC_5(VAR_1, VAR_2);
}
