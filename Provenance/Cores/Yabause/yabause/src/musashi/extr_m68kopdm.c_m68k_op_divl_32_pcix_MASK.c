
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
 int VAR_7 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;

void FUNC_11(void)
{
 if(FUNC_2(VAR_1))
 {
  uint VAR_12 = FUNC_7();
  uint VAR_13 = FUNC_8();
  uint VAR_14 = VAR_8[VAR_12 & 7];
  uint VAR_15 = VAR_8[(VAR_12 >> 12) & 7];
  uint VAR_16 = 0;
  uint VAR_17 = 0;
  uint VAR_18 = 0;
  uint VAR_19 = 0;
  sint VAR_20;
  uint VAR_21;

  if(VAR_13 != 0)
  {

   if(FUNC_0(VAR_12))
   {
    if(FUNC_1(VAR_12))
    {

     if(VAR_14 == 0 && VAR_15 == 0x80000000 && VAR_13 == 0xffffffff)
     {
      VAR_8[VAR_12 & 7] = 0;
      VAR_8[(VAR_12 >> 12) & 7] = 0x80000000;

      VAR_4 = VAR_7;
      VAR_6 = VAR_11;
      VAR_5 = VAR_9;
      VAR_3 = VAR_0;
      return;
     }
     if(FUNC_3(VAR_14))
     {
      VAR_18 = 1;
      VAR_14 = (uint)FUNC_5((-(sint)VAR_14) - (VAR_15 != 0));
      VAR_15 = (uint)FUNC_5(-(sint)VAR_15);
     }
     if(FUNC_3(VAR_13))
     {
      VAR_19 = 1;
      VAR_13 = (uint)FUNC_5(-(sint)VAR_13);

     }
    }


    if(VAR_14 >= VAR_13)
    {
     VAR_5 = VAR_10;
     return;
    }

    for(VAR_20 = 31; VAR_20 >= 0; VAR_20--)
    {
     VAR_16 <<= 1;
     VAR_17 = (VAR_17 << 1) + ((VAR_14 >> VAR_20) & 1);
     if(VAR_17 >= VAR_13)
     {
      VAR_17 -= VAR_13;
      VAR_16++;
     }
    }
    for(VAR_20 = 31; VAR_20 >= 0; VAR_20--)
    {
     VAR_16 <<= 1;
     VAR_21 = FUNC_3(VAR_17);
     VAR_17 = (VAR_17 << 1) + ((VAR_15 >> VAR_20) & 1);
     if(VAR_17 >= VAR_13 || VAR_21)
     {
      VAR_17 -= VAR_13;
      VAR_16++;
     }
    }

    if(FUNC_1(VAR_12))
    {
     if(VAR_16 > 0x7fffffff)
     {
      VAR_5 = VAR_10;
      return;
     }
     if(VAR_18)
     {
      VAR_17 = (uint)FUNC_5(-(sint)VAR_17);
      VAR_16 = (uint)FUNC_5(-(sint)VAR_16);
     }
     if(VAR_19)
      VAR_16 = (uint)FUNC_5(-(sint)VAR_16);
    }

    VAR_8[VAR_12 & 7] = VAR_17;
    VAR_8[(VAR_12 >> 12) & 7] = VAR_16;

    VAR_4 = FUNC_6(VAR_16);
    VAR_6 = VAR_16;
    VAR_5 = VAR_9;
    VAR_3 = VAR_0;
    return;
   }


   if(FUNC_1(VAR_12))
   {

    if(VAR_15 == 0x80000000 && VAR_13 == 0xffffffff)
    {
     VAR_4 = VAR_7;
     VAR_6 = VAR_11;
     VAR_5 = VAR_9;
     VAR_3 = VAR_0;
     VAR_8[(VAR_12 >> 12) & 7] = 0x80000000;
     VAR_8[VAR_12 & 7] = 0;
     return;
    }
    VAR_8[VAR_12 & 7] = FUNC_4(VAR_15) % FUNC_4(VAR_13);
    VAR_16 = VAR_8[(VAR_12 >> 12) & 7] = FUNC_4(VAR_15) / FUNC_4(VAR_13);
   }
   else
   {
    VAR_8[VAR_12 & 7] = FUNC_5(VAR_15) % FUNC_5(VAR_13);
    VAR_16 = VAR_8[(VAR_12 >> 12) & 7] = FUNC_5(VAR_15) / FUNC_5(VAR_13);
   }

   VAR_4 = FUNC_6(VAR_16);
   VAR_6 = VAR_16;
   VAR_5 = VAR_9;
   VAR_3 = VAR_0;
   return;
  }
  FUNC_10(VAR_2);
  return;
 }
 FUNC_9();


}
