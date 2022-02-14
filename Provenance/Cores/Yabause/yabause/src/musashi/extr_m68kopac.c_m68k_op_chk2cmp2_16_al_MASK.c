
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 () ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int* VAR_4 ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;

void FUNC_11(void)
{
 if(FUNC_4(VAR_0))
 {
  uint VAR_5 = FUNC_7();
  uint VAR_6 = VAR_4[(VAR_5 >> 12) & 15]&0xffff;
  uint VAR_7 = FUNC_5();
  uint VAR_8 = FUNC_10(VAR_7);
  uint VAR_9 = FUNC_10(VAR_7 + 2);

  if(!FUNC_1(VAR_5))
   VAR_2 = FUNC_6(VAR_6) - FUNC_6(VAR_8);
  else
   VAR_2 = VAR_6 - VAR_8;

  VAR_3 = !((VAR_9==VAR_6) | (VAR_8==VAR_6));
  VAR_2 = FUNC_2(VAR_2);
  if(FUNC_3())
  {
   if(FUNC_0(VAR_5))
    FUNC_9(VAR_1);
   return;
  }
  if(!FUNC_1(VAR_5))
   VAR_2 = FUNC_6(VAR_9) - FUNC_6(VAR_6);
  else
   VAR_2 = VAR_9 - VAR_6;

  VAR_2 = FUNC_2(VAR_2);
  if(FUNC_3() && FUNC_0(VAR_5))
    FUNC_9(VAR_1);
  return;
 }
 FUNC_8();
}
