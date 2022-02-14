
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
 int FUNC_3 () ;
 int VAR_9 ;
 int VAR_10 ;

void FUNC_4(void)
{
 uint* VAR_11 = &VAR_2;
 uint VAR_12 = *VAR_11;
 uint VAR_13 = FUNC_0(0x9a - VAR_12 - FUNC_3());

 if(VAR_13 != 0x9a)
 {
  VAR_5 = ~VAR_13;

  if((VAR_13 & 0x0f) == 0xa)
   VAR_13 = (VAR_13 & 0xf0) + 0x10;

  VAR_13 = FUNC_0(VAR_13);

  VAR_5 &= VAR_13;

  *VAR_11 = FUNC_1(*VAR_11) | VAR_13;

  VAR_7 |= VAR_13;
  VAR_3 = VAR_1;
  VAR_6 = VAR_10;
 }
 else
 {
  VAR_5 = VAR_8;
  VAR_3 = VAR_0;
  VAR_6 = VAR_9;
 }
 VAR_4 = FUNC_2(VAR_13);
}
