
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 unsigned int FUNC_1 (unsigned int) ;
 int VAR_1 ;
 int FUNC_2 (unsigned int,unsigned int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 float VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (float) ;

void FUNC_6(unsigned VAR_9, unsigned VAR_10,
      float VAR_11, unsigned VAR_12,
      int VAR_13, int VAR_14, bool VAR_15)
{


   if (VAR_9 == 4)
   {
      VAR_9 = 320;
      VAR_10 = 240;
   }

   VAR_4 = VAR_10;
   VAR_5 = VAR_11;

   if (VAR_15)
      VAR_6 = FUNC_1(VAR_9);
   else
      VAR_6 = VAR_9;

   VAR_0 = VAR_13;
   VAR_1 = VAR_14;

   if (VAR_12 == 2)
   {
      if (VAR_11 > 53)
         VAR_5 = VAR_11 * 2;

      if (VAR_11 <= 53)
         VAR_5 = 120.0f;
   }

   FUNC_0();


   if (
      (VAR_7 != VAR_4) ||
      (VAR_6 != VAR_8) || (VAR_0 != VAR_2)
      )
      FUNC_2(VAR_6, VAR_4);

   VAR_7 = VAR_4;
   VAR_8 = VAR_6;
    VAR_2 = VAR_0;


   if (FUNC_4() != VAR_3)
   {
      FUNC_5((float)VAR_3);
      FUNC_3();
   }
}
