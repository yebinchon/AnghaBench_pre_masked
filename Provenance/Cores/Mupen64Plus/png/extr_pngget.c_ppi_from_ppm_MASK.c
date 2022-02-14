
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_uint_32 ;
typedef int png_int_32 ;
typedef int png_fixed_point ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,int,int) ;

__attribute__((used)) static png_uint_32
FUNC_1(png_uint_32 VAR_1)
{
   png_fixed_point VAR_2;
   if (VAR_1 <= VAR_0 && FUNC_0(&VAR_2, (png_int_32)VAR_1, 127,
       5000) != 0)
      return (png_uint_32)VAR_2;


   return 0;

}
