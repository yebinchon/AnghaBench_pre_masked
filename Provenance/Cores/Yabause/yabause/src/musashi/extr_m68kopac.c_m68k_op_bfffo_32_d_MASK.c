
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64 ;
typedef int uint ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int* VAR_7 ;
 int FUNC_5 (int,int) ;
 int VAR_8 ;
 int FUNC_6 () ;

void FUNC_7(void)
{
 if(FUNC_2(VAR_1))
 {
  uint VAR_9 = FUNC_4();
  uint VAR_10 = (VAR_9>>6)&31;
  uint VAR_11 = VAR_9;
  uint64 VAR_12 = VAR_2;
  uint VAR_13;


  if(FUNC_1(VAR_9))
   VAR_10 = VAR_7[VAR_10&7];
  if(FUNC_0(VAR_9))
   VAR_11 = VAR_7[VAR_11&7];

  VAR_10 &= 31;
  VAR_11 = ((VAR_11-1) & 31) + 1;

  VAR_12 = FUNC_5(VAR_12, VAR_10);
  VAR_4 = FUNC_3(VAR_12);
  VAR_12 >>= 32 - VAR_11;

  VAR_6 = VAR_12;
  VAR_5 = VAR_8;
  VAR_3 = VAR_0;

  for(VAR_13 = 1<<(VAR_11-1);VAR_13 && !(VAR_12 & VAR_13);VAR_13>>= 1)
   VAR_10++;

  VAR_7[(VAR_9>>12)&7] = VAR_10;

  return;
 }
 FUNC_6();
}
