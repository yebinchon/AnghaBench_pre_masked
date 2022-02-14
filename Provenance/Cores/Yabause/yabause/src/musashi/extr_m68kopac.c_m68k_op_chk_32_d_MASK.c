
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sint ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_9 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;

void FUNC_5(void)
{
 if(FUNC_0(VAR_1))
 {
  sint VAR_10 = FUNC_1(VAR_2);
  sint VAR_11 = FUNC_1(VAR_3);

  VAR_8 = FUNC_2(VAR_10);
  VAR_7 = VAR_9;
  VAR_5 = VAR_0;

  if(VAR_10 >= 0 && VAR_10 <= VAR_11)
  {
   return;
  }
  VAR_6 = (VAR_10 < 0)<<7;
  FUNC_4(VAR_4);
  return;
 }
 FUNC_3();
}
