
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
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_9 ;
 int FUNC_2 (int) ;
 int VAR_10 ;
 int VAR_11 ;

void FUNC_3(void)
{
 uint* VAR_12 = &VAR_3;
 uint VAR_13 = VAR_2 & 0x3f;
 uint VAR_14 = *VAR_12;
 uint VAR_15 = VAR_14 >> VAR_13;

 if(VAR_13 != 0)
 {
  FUNC_2(VAR_13<<VAR_1);

  if(VAR_13 < 32)
  {
   *VAR_12 = VAR_15;
   VAR_4 = VAR_7 = (VAR_14 >> (VAR_13 - 1))<<8;
   VAR_5 = VAR_9;
   VAR_8 = VAR_15;
   VAR_6 = VAR_10;
   return;
  }

  *VAR_12 = 0;
  VAR_7 = VAR_4 = (VAR_13 == 32 ? FUNC_0(VAR_14)>>23 : 0);
  VAR_5 = VAR_9;
  VAR_8 = VAR_11;
  VAR_6 = VAR_10;
  return;
 }

 VAR_4 = VAR_0;
 VAR_5 = FUNC_1(VAR_14);
 VAR_8 = VAR_14;
 VAR_6 = VAR_10;
}
