
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int KHRN_IMAGE_FORMAT_T ;
 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;

uint32_t FUNC_2(KHRN_IMAGE_FORMAT_T VAR_3)
{
   FUNC_1(VAR_3 != VAR_1);

   switch (VAR_3 & VAR_0) {
   case 129:
      switch (VAR_3 & VAR_2) {
         case 137: return 1;
         case 133: return 4;
         case 131: return 8;
         case 136: return 16;
         case 135: return 24;
         case 134: return 32;
         case 132: return 64;
         default: FUNC_0(); return 0;
      }
   case 130: return 4;
   case 128: return 16;
   default: FUNC_0(); return 0;
   }
}
