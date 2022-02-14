
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int sint ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 int* VAR_6 ;
 int VAR_7 ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int,int) ;
 int FUNC_13 (int,int) ;

void FUNC_14(void)
{
 if(FUNC_2(VAR_1))
 {
  uint VAR_8 = FUNC_8();
  sint VAR_9 = (VAR_8>>6)&31;
  uint VAR_10 = VAR_8;
  uint VAR_11 = VAR_6[(VAR_8>>12)&7];
  uint VAR_12;
  uint VAR_13;
  uint VAR_14;
  uint VAR_15;
  uint VAR_16;
  uint VAR_17 = 0;
  uint VAR_18 = 0;
  uint VAR_19 = FUNC_3();


  if(FUNC_1(VAR_8))
   VAR_9 = FUNC_4(VAR_6[VAR_9&7]);
  if(FUNC_0(VAR_8))
   VAR_10 = VAR_6[VAR_10&7];


  VAR_19 += VAR_9 / 8;
  VAR_9 %= 8;
  if(VAR_9 < 0)
  {
   VAR_9 += 8;
   VAR_19--;
  }
  VAR_10 = ((VAR_10-1) & 31) + 1;

  VAR_14 = FUNC_5(0xffffffff << (32 - VAR_10));
  VAR_16 = VAR_14 >> VAR_9;

  VAR_11 = FUNC_5(VAR_11 << (32 - VAR_10));
  VAR_3 = FUNC_7(VAR_11);
  VAR_5 = VAR_11;
  VAR_12 = VAR_11 >> VAR_9;

  VAR_15 = FUNC_10(VAR_19);
  VAR_4 = VAR_7;
  VAR_2 = VAR_0;

  FUNC_12(VAR_19, (VAR_15 & ~VAR_16) | VAR_12);

  if((VAR_10 + VAR_9) > 32)
  {
   VAR_18 = FUNC_6(VAR_14);
   VAR_13 = FUNC_6(VAR_11);
   VAR_17 = FUNC_11(VAR_19+4);
   VAR_5 |= (VAR_17 & VAR_18);
   FUNC_13(VAR_19+4, (VAR_17 & ~VAR_18) | VAR_13);
  }
  return;
 }
 FUNC_9();
}
