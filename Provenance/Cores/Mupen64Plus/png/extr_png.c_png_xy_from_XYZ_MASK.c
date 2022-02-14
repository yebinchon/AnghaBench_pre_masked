
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int whitey; int whitex; int bluey; int bluex; int greeny; int greenx; int redy; int redx; } ;
typedef TYPE_1__ png_xy ;
typedef scalar_t__ png_int_32 ;
struct TYPE_6__ {scalar_t__ blue_Y; scalar_t__ blue_X; scalar_t__ blue_Z; scalar_t__ green_Y; scalar_t__ green_X; scalar_t__ green_Z; scalar_t__ red_Y; scalar_t__ red_X; scalar_t__ red_Z; } ;
typedef TYPE_2__ png_XYZ ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(png_xy *VAR_1, const png_XYZ *VAR_2)
{
   png_int_32 VAR_3, VAR_4, VAR_5, VAR_6;

   VAR_3 = VAR_2->red_X + VAR_2->red_Y + VAR_2->red_Z;
   if (FUNC_0(&VAR_1->redx, VAR_2->red_X, VAR_0, VAR_3) == 0)
      return 1;
   if (FUNC_0(&VAR_1->redy, VAR_2->red_Y, VAR_0, VAR_3) == 0)
      return 1;
   VAR_4 = VAR_3;
   VAR_5 = VAR_2->red_X;
   VAR_6 = VAR_2->red_Y;

   VAR_3 = VAR_2->green_X + VAR_2->green_Y + VAR_2->green_Z;
   if (FUNC_0(&VAR_1->greenx, VAR_2->green_X, VAR_0, VAR_3) == 0)
      return 1;
   if (FUNC_0(&VAR_1->greeny, VAR_2->green_Y, VAR_0, VAR_3) == 0)
      return 1;
   VAR_4 += VAR_3;
   VAR_5 += VAR_2->green_X;
   VAR_6 += VAR_2->green_Y;

   VAR_3 = VAR_2->blue_X + VAR_2->blue_Y + VAR_2->blue_Z;
   if (FUNC_0(&VAR_1->bluex, VAR_2->blue_X, VAR_0, VAR_3) == 0)
      return 1;
   if (FUNC_0(&VAR_1->bluey, VAR_2->blue_Y, VAR_0, VAR_3) == 0)
      return 1;
   VAR_4 += VAR_3;
   VAR_5 += VAR_2->blue_X;
   VAR_6 += VAR_2->blue_Y;




   if (FUNC_0(&VAR_1->whitex, VAR_5, VAR_0, VAR_4) == 0)
      return 1;
   if (FUNC_0(&VAR_1->whitey, VAR_6, VAR_0, VAR_4) == 0)
      return 1;

   return 0;
}
