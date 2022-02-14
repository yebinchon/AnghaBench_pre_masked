
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct waitq {int dummy; } ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_1 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (char*,struct waitq*,int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct waitq*) ;
 scalar_t__ FUNC_8 (struct waitq*,int) ;

void FUNC_9(struct waitq *VAR_2)
{
 if (FUNC_0(FUNC_8(VAR_2,
        VAR_1 * 2) == 0)) {
  boolean_t VAR_3 = VAR_0;

  while (FUNC_3()) {
   FUNC_4();
   VAR_3 = FUNC_8(VAR_2,
        VAR_1 * 2);
   if (VAR_3)
    break;
  }
  if (VAR_3 == VAR_0)
   FUNC_5("waitq deadlock - waitq=%p, cpu=%d\n",
         VAR_2, FUNC_2());
 }

 FUNC_6(VAR_0);

 FUNC_1(FUNC_7(VAR_2));
}
