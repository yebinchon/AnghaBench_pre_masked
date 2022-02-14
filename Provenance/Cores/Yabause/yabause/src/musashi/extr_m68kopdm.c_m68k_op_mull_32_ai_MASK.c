
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
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int* VAR_6 ;
 int VAR_7 ;
 int FUNC_10 () ;

void FUNC_11(void)
{
 if(FUNC_2(VAR_1))
 {
  uint VAR_8 = FUNC_9();
  uint VAR_9 = FUNC_8();
  uint VAR_10 = VAR_6[(VAR_8 >> 12) & 7];
  uint VAR_11 = FUNC_3(VAR_9 ^ VAR_10);
  uint VAR_12;
  uint VAR_13;
  uint VAR_14;
  uint VAR_15;
  uint VAR_16;
  uint VAR_17;
  uint VAR_18;
  uint VAR_19;
  uint VAR_20;
  uint VAR_21;

  VAR_2 = VAR_0;

  if(FUNC_1(VAR_8))
  {
   if(FUNC_3(VAR_9))
    VAR_9 = (uint)FUNC_5(-(sint)VAR_9);
   if(FUNC_3(VAR_10))
    VAR_10 = (uint)FUNC_5(-(sint)VAR_10);
  }

  VAR_12 = FUNC_4(VAR_9);
  VAR_13 = VAR_9>>16;
  VAR_14 = FUNC_4(VAR_10);
  VAR_15 = VAR_10>>16;


  VAR_16 = VAR_12 * VAR_14;
  VAR_17 = VAR_12 * VAR_15;
  VAR_18 = VAR_13 * VAR_14;
  VAR_19 = VAR_13 * VAR_15;

  VAR_20 = VAR_16 + (FUNC_4(VAR_17)<<16) + (FUNC_4(VAR_18)<<16);
  VAR_21 = VAR_19 + (VAR_17>>16) + (VAR_18>>16) + (((VAR_16>>16) + FUNC_4(VAR_17) + FUNC_4(VAR_18)) >> 16);

  if(FUNC_1(VAR_8) && VAR_11)
  {
   VAR_21 = (uint)FUNC_5((-(sint)VAR_21) - (VAR_20 != 0));
   VAR_20 = (uint)FUNC_5(-(sint)VAR_20);
  }

  if(FUNC_0(VAR_8))
  {
   VAR_6[VAR_8 & 7] = VAR_21;
   VAR_6[(VAR_8 >> 12) & 7] = VAR_20;
   VAR_3 = FUNC_6(VAR_21);
   VAR_5 = VAR_21 | VAR_20;
   VAR_4 = VAR_7;
   return;
  }

  VAR_6[(VAR_8 >> 12) & 7] = VAR_20;
  VAR_3 = FUNC_6(VAR_20);
  VAR_5 = VAR_20;
  if(FUNC_1(VAR_8))
   VAR_4 = (!((FUNC_3(VAR_20) && VAR_21 == 0xffffffff) || (!FUNC_3(VAR_20) && !VAR_21)))<<7;
  else
   VAR_4 = (VAR_21 != 0) << 7;
  return;
 }
 FUNC_10();


}
