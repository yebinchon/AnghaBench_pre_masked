
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_uint_16 ;
typedef int png_int_32 ;
typedef double png_fixed_point ;


 int VAR_0 ;
 double FUNC_0 (int) ;
 int FUNC_1 (double) ;
 int FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (double*,double,int,int ) ;
 int FUNC_4 (int,double) ;

png_uint_16
FUNC_5(unsigned int VAR_1, png_fixed_point VAR_2)
{
   if (VAR_1 > 0 && VAR_1 < 65535)
   {
      png_int_32 VAR_3 = FUNC_2(VAR_1);
      png_fixed_point VAR_4;

      if (FUNC_3(&VAR_4, VAR_2, VAR_3, VAR_0) != 0)
         return FUNC_1(VAR_4);


      VAR_1 = 0;

   }

   return (png_uint_16)VAR_1;
}
