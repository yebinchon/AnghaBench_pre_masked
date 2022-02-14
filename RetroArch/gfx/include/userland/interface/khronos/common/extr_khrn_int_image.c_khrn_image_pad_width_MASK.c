
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int KHRN_IMAGE_FORMAT_T ;





 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int) ;

uint32_t FUNC_6(KHRN_IMAGE_FORMAT_T VAR_2, uint32_t VAR_3)
{
   FUNC_5(VAR_2 != VAR_0);

   switch (VAR_2 & VAR_1) {
   case 128:
      FUNC_5(!(FUNC_1(VAR_2) & 7));
      return VAR_3;
   case 131: return FUNC_4(VAR_3, (uint32_t) (1 << FUNC_2(VAR_2)));
   case 130: return FUNC_4(VAR_3, (uint32_t) (1 << FUNC_3(VAR_2)));
   case 129: return FUNC_4(VAR_3, 64);
   default: FUNC_0(); return 0;
   }
}
