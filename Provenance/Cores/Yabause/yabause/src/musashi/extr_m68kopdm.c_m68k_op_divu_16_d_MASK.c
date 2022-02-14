
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ) ;

void FUNC_4(void)
{
 uint* VAR_10 = &VAR_1;
 uint VAR_11 = FUNC_0(VAR_2);

 if(VAR_11 != 0)
 {
  uint VAR_12 = *VAR_10 / VAR_11;
  uint VAR_13 = *VAR_10 % VAR_11;

  if(VAR_12 < 0x10000)
  {
   VAR_7 = VAR_12;
   VAR_5 = FUNC_2(VAR_12);
   VAR_6 = VAR_8;
   VAR_4 = VAR_0;
   *VAR_10 = FUNC_1(FUNC_0(VAR_12) | (VAR_13 << 16));
   return;
  }
  VAR_6 = VAR_9;
  return;
 }
 FUNC_3(VAR_3);
}
