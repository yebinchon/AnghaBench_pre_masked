
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_fixed_point ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(png_fixed_point VAR_1)
{
   if (VAR_1 < VAR_0)
   {

      if (VAR_1 == 0)
         return 0;

      return FUNC_0((VAR_1 * 11 + 2)/5 );
   }

   return 1;
}
