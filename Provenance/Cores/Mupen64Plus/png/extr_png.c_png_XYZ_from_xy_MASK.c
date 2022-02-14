
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ redx; scalar_t__ redy; scalar_t__ greenx; scalar_t__ greeny; scalar_t__ bluex; scalar_t__ bluey; scalar_t__ whitex; int whitey; } ;
typedef TYPE_1__ png_xy ;
typedef scalar_t__ png_fixed_point ;
struct TYPE_6__ {scalar_t__ red_X; scalar_t__ red_Y; scalar_t__ red_Z; scalar_t__ green_X; scalar_t__ green_Y; scalar_t__ green_Z; scalar_t__ blue_X; scalar_t__ blue_Y; scalar_t__ blue_Z; } ;
typedef TYPE_2__ png_XYZ ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__*,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static int
FUNC_2(png_XYZ *VAR_1, const png_xy *VAR_2)
{
   png_fixed_point VAR_3, VAR_4, VAR_5;
   png_fixed_point VAR_6, VAR_7, VAR_8;






   if (VAR_2->redx < 0 || VAR_2->redx > VAR_0) return 1;
   if (VAR_2->redy < 0 || VAR_2->redy > VAR_0-VAR_2->redx) return 1;
   if (VAR_2->greenx < 0 || VAR_2->greenx > VAR_0) return 1;
   if (VAR_2->greeny < 0 || VAR_2->greeny > VAR_0-VAR_2->greenx) return 1;
   if (VAR_2->bluex < 0 || VAR_2->bluex > VAR_0) return 1;
   if (VAR_2->bluey < 0 || VAR_2->bluey > VAR_0-VAR_2->bluex) return 1;
   if (VAR_2->whitex < 0 || VAR_2->whitex > VAR_0) return 1;
   if (VAR_2->whitey < 5 || VAR_2->whitey > VAR_0-VAR_2->whitex) return 1;
   if (FUNC_0(&VAR_6, VAR_2->greenx-VAR_2->bluex, VAR_2->redy - VAR_2->bluey, 7) == 0)
      return 2;
   if (FUNC_0(&VAR_7, VAR_2->greeny-VAR_2->bluey, VAR_2->redx - VAR_2->bluex, 7) == 0)
      return 2;
   VAR_8 = VAR_6 - VAR_7;


   if (FUNC_0(&VAR_6, VAR_2->greenx-VAR_2->bluex, VAR_2->whitey-VAR_2->bluey, 7) == 0)
      return 2;
   if (FUNC_0(&VAR_7, VAR_2->greeny-VAR_2->bluey, VAR_2->whitex-VAR_2->bluex, 7) == 0)
      return 2;






   if (FUNC_0(&VAR_3, VAR_2->whitey, VAR_8, VAR_6-VAR_7) == 0 ||
       VAR_3 <= VAR_2->whitey )
      return 1;


   if (FUNC_0(&VAR_6, VAR_2->redy-VAR_2->bluey, VAR_2->whitex-VAR_2->bluex, 7) == 0)
      return 2;
   if (FUNC_0(&VAR_7, VAR_2->redx-VAR_2->bluex, VAR_2->whitey-VAR_2->bluey, 7) == 0)
      return 2;
   if (FUNC_0(&VAR_4, VAR_2->whitey, VAR_8, VAR_6-VAR_7) == 0 ||
       VAR_4 <= VAR_2->whitey)
      return 1;




   VAR_5 = FUNC_1(VAR_2->whitey) - FUNC_1(VAR_3) -
       FUNC_1(VAR_4);
   if (VAR_5 <= 0)
      return 1;



   if (FUNC_0(&VAR_1->red_X, VAR_2->redx, VAR_0, VAR_3) == 0)
      return 1;
   if (FUNC_0(&VAR_1->red_Y, VAR_2->redy, VAR_0, VAR_3) == 0)
      return 1;
   if (FUNC_0(&VAR_1->red_Z, VAR_0 - VAR_2->redx - VAR_2->redy, VAR_0,
       VAR_3) == 0)
      return 1;

   if (FUNC_0(&VAR_1->green_X, VAR_2->greenx, VAR_0, VAR_4) == 0)
      return 1;
   if (FUNC_0(&VAR_1->green_Y, VAR_2->greeny, VAR_0, VAR_4) == 0)
      return 1;
   if (FUNC_0(&VAR_1->green_Z, VAR_0 - VAR_2->greenx - VAR_2->greeny, VAR_0,
       VAR_4) == 0)
      return 1;

   if (FUNC_0(&VAR_1->blue_X, VAR_2->bluex, VAR_5, VAR_0) == 0)
      return 1;
   if (FUNC_0(&VAR_1->blue_Y, VAR_2->bluey, VAR_5, VAR_0) == 0)
      return 1;
   if (FUNC_0(&VAR_1->blue_Z, VAR_0 - VAR_2->bluex - VAR_2->bluey, VAR_5,
       VAR_0) == 0)
      return 1;

   return 0;
}
