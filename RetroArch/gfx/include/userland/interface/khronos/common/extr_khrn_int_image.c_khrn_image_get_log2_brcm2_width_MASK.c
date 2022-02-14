
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int KHRN_IMAGE_FORMAT_T ;







 int VAR_0 ;

 int VAR_1 ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;

uint32_t FUNC_4(KHRN_IMAGE_FORMAT_T VAR_2)
{
   FUNC_3(FUNC_1(VAR_2) || FUNC_2(VAR_2));

   switch (VAR_2 & VAR_0) {
   case 129:
   {
      switch (VAR_2 & VAR_1) {
      case 135: return 6;
      case 132: return 4;
      case 131: return 3;
      case 134: return 3;
      case 133: return 2;
      default: FUNC_0(); return 0;
      }
   }
   case 130: return 3;
   case 128: return 3;
   default: FUNC_0(); return 0;
   }
}
