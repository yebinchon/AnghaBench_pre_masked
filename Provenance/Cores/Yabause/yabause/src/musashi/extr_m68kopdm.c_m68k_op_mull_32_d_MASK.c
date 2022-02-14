
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64 ;
typedef int uint ;
typedef scalar_t__ sint64 ;
typedef scalar_t__ sint32 ;
typedef int sint ;


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
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 int* VAR_7 ;
 int VAR_8 ;
 int FUNC_9 () ;

void FUNC_10(void)
{
 if(FUNC_2(VAR_1))
 {
  uint VAR_9 = FUNC_8();
  uint VAR_10 = VAR_2;
  uint VAR_11 = VAR_7[(VAR_9 >> 12) & 7];
  uint VAR_12 = FUNC_3(VAR_10 ^ VAR_11);
  uint VAR_13;
  uint VAR_14;
  uint VAR_15;
  uint VAR_16;
  uint VAR_17;
  uint VAR_18;
  uint VAR_19;
  uint VAR_20;
  uint VAR_21;
  uint VAR_22;

  VAR_3 = VAR_0;

  if(FUNC_1(VAR_9))
  {
   if(FUNC_3(VAR_10))
    VAR_10 = (uint)FUNC_5(-(sint)VAR_10);
   if(FUNC_3(VAR_11))
    VAR_11 = (uint)FUNC_5(-(sint)VAR_11);
  }

  VAR_13 = FUNC_4(VAR_10);
  VAR_14 = VAR_10>>16;
  VAR_15 = FUNC_4(VAR_11);
  VAR_16 = VAR_11>>16;


  VAR_17 = VAR_13 * VAR_15;
  VAR_18 = VAR_13 * VAR_16;
  VAR_19 = VAR_14 * VAR_15;
  VAR_20 = VAR_14 * VAR_16;

  VAR_21 = VAR_17 + (FUNC_4(VAR_18)<<16) + (FUNC_4(VAR_19)<<16);
  VAR_22 = VAR_20 + (VAR_18>>16) + (VAR_19>>16) + (((VAR_17>>16) + FUNC_4(VAR_18) + FUNC_4(VAR_19)) >> 16);

  if(FUNC_1(VAR_9) && VAR_12)
  {
   VAR_22 = (uint)FUNC_5((-(sint)VAR_22) - (VAR_21 != 0));
   VAR_21 = (uint)FUNC_5(-(sint)VAR_21);
  }

  if(FUNC_0(VAR_9))
  {
   VAR_7[VAR_9 & 7] = VAR_22;
   VAR_7[(VAR_9 >> 12) & 7] = VAR_21;
   VAR_4 = FUNC_6(VAR_22);
   VAR_6 = VAR_22 | VAR_21;
   VAR_5 = VAR_8;
   return;
  }

  VAR_7[(VAR_9 >> 12) & 7] = VAR_21;
  VAR_4 = FUNC_6(VAR_21);
  VAR_6 = VAR_21;
  if(FUNC_1(VAR_9))
   VAR_5 = (!((FUNC_3(VAR_21) && VAR_22 == 0xffffffff) || (!FUNC_3(VAR_21) && !VAR_22)))<<7;
  else
   VAR_5 = (VAR_22 != 0) << 7;
  return;
 }
 FUNC_9();


}
