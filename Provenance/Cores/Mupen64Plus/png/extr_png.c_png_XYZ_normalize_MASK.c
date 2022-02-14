
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int png_int_32 ;
struct TYPE_3__ {scalar_t__ red_Y; scalar_t__ green_Y; scalar_t__ blue_Y; scalar_t__ red_X; scalar_t__ green_X; scalar_t__ blue_X; scalar_t__ red_Z; scalar_t__ green_Z; scalar_t__ blue_Z; } ;
typedef TYPE_1__ png_XYZ ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int*,int,int,int) ;

__attribute__((used)) static int
FUNC_1(png_XYZ *VAR_1)
{
   png_int_32 VAR_2;

   if (VAR_1->red_Y < 0 || VAR_1->green_Y < 0 || VAR_1->blue_Y < 0 ||
      VAR_1->red_X < 0 || VAR_1->green_X < 0 || VAR_1->blue_X < 0 ||
      VAR_1->red_Z < 0 || VAR_1->green_Z < 0 || VAR_1->blue_Z < 0)
      return 1;






   VAR_2 = VAR_1->red_Y;
   if (0x7fffffff - VAR_2 < VAR_1->green_X)
      return 1;
   VAR_2 += VAR_1->green_Y;
   if (0x7fffffff - VAR_2 < VAR_1->blue_X)
      return 1;
   VAR_2 += VAR_1->blue_Y;

   if (VAR_2 != VAR_0)
   {
      if (FUNC_0(&VAR_1->red_X, VAR_1->red_X, VAR_0, VAR_2) == 0)
         return 1;
      if (FUNC_0(&VAR_1->red_Y, VAR_1->red_Y, VAR_0, VAR_2) == 0)
         return 1;
      if (FUNC_0(&VAR_1->red_Z, VAR_1->red_Z, VAR_0, VAR_2) == 0)
         return 1;

      if (FUNC_0(&VAR_1->green_X, VAR_1->green_X, VAR_0, VAR_2) == 0)
         return 1;
      if (FUNC_0(&VAR_1->green_Y, VAR_1->green_Y, VAR_0, VAR_2) == 0)
         return 1;
      if (FUNC_0(&VAR_1->green_Z, VAR_1->green_Z, VAR_0, VAR_2) == 0)
         return 1;

      if (FUNC_0(&VAR_1->blue_X, VAR_1->blue_X, VAR_0, VAR_2) == 0)
         return 1;
      if (FUNC_0(&VAR_1->blue_Y, VAR_1->blue_Y, VAR_0, VAR_2) == 0)
         return 1;
      if (FUNC_0(&VAR_1->blue_Z, VAR_1->blue_Z, VAR_0, VAR_2) == 0)
         return 1;
   }

   return 0;
}
