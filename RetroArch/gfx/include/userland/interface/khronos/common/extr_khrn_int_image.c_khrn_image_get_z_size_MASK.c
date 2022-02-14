
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int KHRN_IMAGE_FORMAT_T ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;

uint32_t FUNC_2(KHRN_IMAGE_FORMAT_T VAR_4)
{
   if (FUNC_1(VAR_4) && (VAR_4 & VAR_3)) {
      if (VAR_4 == VAR_0 || VAR_4 == VAR_1)
         return 24;
      switch (VAR_4 & VAR_2) {
      case 128: return 24;
      case 129: return 16;
      default: FUNC_0(); return 0;
      }
   } else {
      return 0;
   }
}
