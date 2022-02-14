
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__* VAR_5 ;
 int VAR_6 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 () ;

void FUNC_13(void)
{
 if(VAR_3)
 {
  uint VAR_7;
  uint VAR_8;
  uint VAR_9;

  FUNC_12();

  if(FUNC_0(VAR_2))
  {
   VAR_7 = FUNC_7();
   VAR_8 = FUNC_8();
   FUNC_6(VAR_8);
   FUNC_10(VAR_7);

   VAR_0 = VAR_4;
   VAR_1 = VAR_6;

   return;
  }

  if(FUNC_1(VAR_2))
  {
   VAR_9 = FUNC_9(VAR_5[7]+6) >> 12;
   if(VAR_9 == 0)
   {
    VAR_7 = FUNC_7();
    VAR_8 = FUNC_8();
    FUNC_4();
    FUNC_6(VAR_8);
    FUNC_10(VAR_7);
    VAR_0 = VAR_4;
    VAR_1 = VAR_6;
    return;
   }
   VAR_0 = VAR_4;
   VAR_1 = VAR_6;

   FUNC_2();
   return;
  }


rte_loop:
  VAR_9 = FUNC_9(VAR_5[7]+6) >> 12;
  switch(VAR_9)
  {
   case 0:
    VAR_7 = FUNC_7();
    VAR_8 = FUNC_8();
    FUNC_4();
    FUNC_6(VAR_8);
    FUNC_10(VAR_7);
    VAR_0 = VAR_4;
    VAR_1 = VAR_6;
    return;
   case 1:
    VAR_7 = FUNC_7();
    FUNC_5();
    FUNC_4();
    FUNC_11(VAR_7);
    goto rte_loop;
   case 2:
    VAR_7 = FUNC_7();
    VAR_8 = FUNC_8();
    FUNC_4();
    FUNC_5();
    FUNC_6(VAR_8);
    FUNC_10(VAR_7);
    VAR_0 = VAR_4;
    VAR_1 = VAR_6;
    return;
  }

  VAR_0 = VAR_4;
  VAR_1 = VAR_6;
  FUNC_2();
  return;
 }
 FUNC_3();
}
