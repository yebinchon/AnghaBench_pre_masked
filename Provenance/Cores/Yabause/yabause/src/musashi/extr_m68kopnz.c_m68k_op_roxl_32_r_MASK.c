
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64 ;
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
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 int VAR_8 ;
 int FUNC_5 () ;

void FUNC_6(void)
{
 uint* VAR_9 = &VAR_2;
 uint VAR_10 = VAR_1 & 0x3f;
 uint VAR_11 = VAR_10 % 33;
 uint VAR_12 = *VAR_9;
 uint VAR_13 = FUNC_0((FUNC_2(VAR_12, VAR_11) & ~(1 << (VAR_11 - 1))) | (FUNC_5() << (VAR_11 - 1)));
 uint VAR_14 = VAR_12 & (1 << (32 - VAR_11));

 if(VAR_10 != 0)
  FUNC_4(VAR_10<<VAR_0);

 if(VAR_11 != 0)
 {
  *VAR_9 = VAR_13;
  VAR_6 = (VAR_14 != 0)<<8;
 }
 else
  VAR_13 = VAR_12;
 VAR_3 = VAR_6;
 VAR_4 = FUNC_1(VAR_13);
 VAR_7 = VAR_13;
 VAR_5 = VAR_8;


}
