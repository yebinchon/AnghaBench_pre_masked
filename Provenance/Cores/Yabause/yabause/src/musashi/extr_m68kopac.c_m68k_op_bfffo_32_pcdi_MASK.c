
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
 int FUNC_7 () ;
 int* VAR_6 ;
 int VAR_7 ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;

void FUNC_11(void)
{
 if(FUNC_2(VAR_1))
 {
  uint VAR_8 = FUNC_7();
  sint VAR_9 = (VAR_8>>6)&31;
  sint VAR_10;
  uint VAR_11 = VAR_8;
  uint VAR_12;
  uint VAR_13;
  uint VAR_14 = FUNC_3();


  if(FUNC_1(VAR_8))
   VAR_9 = FUNC_4(VAR_6[VAR_9&7]);
  if(FUNC_0(VAR_8))
   VAR_11 = VAR_6[VAR_11&7];


  VAR_14 += VAR_9 / 8;
  VAR_10 = VAR_9 % 8;
  if(VAR_10 < 0)
  {
   VAR_10 += 8;
   VAR_14--;
  }
  VAR_11 = ((VAR_11-1) & 31) + 1;

  VAR_12 = FUNC_9(VAR_14);
  VAR_12 = FUNC_5(VAR_12<<VAR_10);

  if((VAR_10+VAR_11) > 32)
   VAR_12 |= (FUNC_10(VAR_14+4) << VAR_10) >> 8;

  VAR_3 = FUNC_6(VAR_12);
  VAR_12 >>= (32 - VAR_11);

  VAR_5 = VAR_12;
  VAR_4 = VAR_7;
  VAR_2 = VAR_0;

  for(VAR_13 = 1<<(VAR_11-1);VAR_13 && !(VAR_12 & VAR_13);VAR_13>>= 1)
   VAR_9++;

  VAR_6[(VAR_8>>12)&7] = VAR_9;

  return;
 }
 FUNC_8();
}
