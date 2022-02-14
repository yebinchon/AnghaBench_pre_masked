
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
 int VAR_7 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_8 ;
 int FUNC_7 () ;
 int* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;

void FUNC_10(void)
{
 if(FUNC_2(VAR_1))
 {
  uint VAR_13 = FUNC_7();
  uint VAR_14 = VAR_2;
  uint VAR_15 = VAR_9[VAR_13 & 7];
  uint VAR_16 = VAR_9[(VAR_13 >> 12) & 7];
  uint VAR_17 = 0;
  uint VAR_18 = 0;
  uint VAR_19 = 0;
  uint VAR_20 = 0;
  sint VAR_21;
  uint VAR_22;

  if(VAR_14 != 0)
  {

   if(FUNC_0(VAR_13))
   {
    if(FUNC_1(VAR_13))
    {

     if(VAR_15 == 0 && VAR_16 == 0x80000000 && VAR_14 == 0xffffffff)
     {
      VAR_9[VAR_13 & 7] = 0;
      VAR_9[(VAR_13 >> 12) & 7] = 0x80000000;

      VAR_5 = VAR_8;
      VAR_7 = VAR_12;
      VAR_6 = VAR_10;
      VAR_4 = VAR_0;
      return;
     }
     if(FUNC_3(VAR_15))
     {
      VAR_19 = 1;
      VAR_15 = (uint)FUNC_5((-(sint)VAR_15) - (VAR_16 != 0));
      VAR_16 = (uint)FUNC_5(-(sint)VAR_16);
     }
     if(FUNC_3(VAR_14))
     {
      VAR_20 = 1;
      VAR_14 = (uint)FUNC_5(-(sint)VAR_14);

     }
    }


    if(VAR_15 >= VAR_14)
    {
     VAR_6 = VAR_11;
     return;
    }

    for(VAR_21 = 31; VAR_21 >= 0; VAR_21--)
    {
     VAR_17 <<= 1;
     VAR_18 = (VAR_18 << 1) + ((VAR_15 >> VAR_21) & 1);
     if(VAR_18 >= VAR_14)
     {
      VAR_18 -= VAR_14;
      VAR_17++;
     }
    }
    for(VAR_21 = 31; VAR_21 >= 0; VAR_21--)
    {
     VAR_17 <<= 1;
     VAR_22 = FUNC_3(VAR_18);
     VAR_18 = (VAR_18 << 1) + ((VAR_16 >> VAR_21) & 1);
     if(VAR_18 >= VAR_14 || VAR_22)
     {
      VAR_18 -= VAR_14;
      VAR_17++;
     }
    }

    if(FUNC_1(VAR_13))
    {
     if(VAR_17 > 0x7fffffff)
     {
      VAR_6 = VAR_11;
      return;
     }
     if(VAR_19)
     {
      VAR_18 = (uint)FUNC_5(-(sint)VAR_18);
      VAR_17 = (uint)FUNC_5(-(sint)VAR_17);
     }
     if(VAR_20)
      VAR_17 = (uint)FUNC_5(-(sint)VAR_17);
    }

    VAR_9[VAR_13 & 7] = VAR_18;
    VAR_9[(VAR_13 >> 12) & 7] = VAR_17;

    VAR_5 = FUNC_6(VAR_17);
    VAR_7 = VAR_17;
    VAR_6 = VAR_10;
    VAR_4 = VAR_0;
    return;
   }


   if(FUNC_1(VAR_13))
   {

    if(VAR_16 == 0x80000000 && VAR_14 == 0xffffffff)
    {
     VAR_5 = VAR_8;
     VAR_7 = VAR_12;
     VAR_6 = VAR_10;
     VAR_4 = VAR_0;
     VAR_9[(VAR_13 >> 12) & 7] = 0x80000000;
     VAR_9[VAR_13 & 7] = 0;
     return;
    }
    VAR_9[VAR_13 & 7] = FUNC_4(VAR_16) % FUNC_4(VAR_14);
    VAR_17 = VAR_9[(VAR_13 >> 12) & 7] = FUNC_4(VAR_16) / FUNC_4(VAR_14);
   }
   else
   {
    VAR_9[VAR_13 & 7] = FUNC_5(VAR_16) % FUNC_5(VAR_14);
    VAR_17 = VAR_9[(VAR_13 >> 12) & 7] = FUNC_5(VAR_16) / FUNC_5(VAR_14);
   }

   VAR_5 = FUNC_6(VAR_17);
   VAR_7 = VAR_17;
   VAR_6 = VAR_10;
   VAR_4 = VAR_0;
   return;
  }
  FUNC_9(VAR_3);
  return;
 }
 FUNC_8();


}
