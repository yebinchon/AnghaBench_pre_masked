
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
struct waitq {scalar_t__ waitq_eventmask; } ;
struct TYPE_6__ {struct waitq* waitq; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (struct waitq*) ;
 struct waitq* FUNC_4 (struct waitq*) ;
 int FUNC_5 (struct waitq*) ;
 scalar_t__ FUNC_6 (struct waitq*) ;
 int FUNC_7 (struct waitq*) ;
 int FUNC_8 (struct waitq*) ;
 int FUNC_9 (struct waitq*,TYPE_1__*) ;
 int FUNC_10 (struct waitq*) ;

int FUNC_11(struct waitq *VAR_0, thread_t VAR_1)
{
 struct waitq *VAR_2;

 FUNC_1(VAR_1);
 FUNC_0(VAR_1->waitq == VAR_0);


 if (!FUNC_5(VAR_0)) {
  VAR_2 = FUNC_4(VAR_0);
 } else {
  VAR_2 = VAR_0;
 }


 if (!FUNC_7(VAR_2))
  return 0;

 FUNC_9(VAR_2, VAR_1);
 FUNC_2(VAR_1);
 FUNC_8(VAR_0);


 if (FUNC_6(VAR_2) && FUNC_3(VAR_2)) {
  VAR_2->waitq_eventmask = 0;

 }

 FUNC_10(VAR_2);

 return 1;
}
