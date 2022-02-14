
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_int_32 ;
typedef int png_fixed_point ;
typedef int png_const_structrp ;


 scalar_t__ FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int ,char*) ;

png_fixed_point
FUNC_2(png_const_structrp VAR_0, png_fixed_point VAR_1, png_int_32 VAR_2,
    png_int_32 VAR_3)
{
   png_fixed_point VAR_4;

   if (FUNC_0(&VAR_4, VAR_1, VAR_2, VAR_3) != 0)
      return VAR_4;

   FUNC_1(VAR_0, "fixed point overflow ignored");
   return 0;
}
