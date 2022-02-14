
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue {int dummy; } ;
struct turnstile {scalar_t__ ts_priority; int ts_waitq; struct workqueue* ts_inheritor; } ;
typedef int spl_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct workqueue*) ;
 int FUNC_4 (struct workqueue*) ;
 int FUNC_5 (struct workqueue*) ;
 int FUNC_6 (struct workqueue*,int) ;

__attribute__((used)) static void
FUNC_7(struct turnstile *VAR_1, spl_t VAR_2)
{
 struct workqueue *VAR_3 = VAR_1->ts_inheritor;
 bool VAR_4 = FUNC_4(VAR_3);

 if (FUNC_0(VAR_1->ts_priority <= VAR_0)) {
  FUNC_2(&VAR_1->ts_waitq);
  FUNC_1(VAR_2);
  return;
 }

 if (!VAR_4) FUNC_5(VAR_3);
 FUNC_2(&VAR_1->ts_waitq);
 FUNC_1(VAR_2);

 FUNC_6(VAR_3, VAR_4);

 if (!VAR_4) FUNC_3(VAR_3);
}
