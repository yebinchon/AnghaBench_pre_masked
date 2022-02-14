
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int* VAR_4 ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;

void FUNC_10(void)
{
 if(FUNC_3(VAR_0))
 {
  uint VAR_5 = FUNC_6();
  uint VAR_6 = VAR_4[(VAR_5 >> 12) & 15]&0xff;
  uint VAR_7 = FUNC_4();
  uint VAR_8 = FUNC_9(VAR_7);
  uint VAR_9 = FUNC_9(VAR_7 + 1);

  if(!FUNC_1(VAR_5))
   VAR_2 = FUNC_5(VAR_6) - FUNC_5(VAR_8);
  else
   VAR_2 = VAR_6 - VAR_8;
  VAR_3 = !((VAR_9==VAR_6) | (VAR_8==VAR_6));
  if(FUNC_2())
  {
   if(FUNC_0(VAR_5))
    FUNC_8(VAR_1);
   return;
  }

  VAR_2 = VAR_9 - VAR_6;
  if(FUNC_2() && FUNC_0(VAR_5))
    FUNC_8(VAR_1);
  return;
 }
 FUNC_7();
}
