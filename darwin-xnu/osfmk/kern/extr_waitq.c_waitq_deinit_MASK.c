
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct waitq {scalar_t__ waitq_isvalid; } ;
typedef int spl_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct waitq*) ;
 scalar_t__ FUNC_4 (struct waitq*) ;
 int FUNC_5 (struct waitq*) ;
 int FUNC_6 (struct waitq*) ;
 int FUNC_7 (struct waitq*) ;
 int FUNC_8 (struct waitq*) ;
 int FUNC_9 (struct waitq*) ;

void FUNC_10(struct waitq *VAR_0)
{
 spl_t VAR_1;

 if (!VAR_0 || !FUNC_5(VAR_0))
  return;

 if (FUNC_4(VAR_0))
  VAR_1 = FUNC_1();
 FUNC_6(VAR_0);
 if (!FUNC_9(VAR_0)) {
  FUNC_8(VAR_0);
  if (FUNC_4(VAR_0))
   FUNC_2(VAR_1);
  return;
 }

 VAR_0->waitq_isvalid = 0;

 if (!FUNC_4(VAR_0)) {
  FUNC_7(VAR_0);

 } else {
  FUNC_8(VAR_0);
  FUNC_2(VAR_1);
 }

 FUNC_0(FUNC_3(VAR_0));
}
