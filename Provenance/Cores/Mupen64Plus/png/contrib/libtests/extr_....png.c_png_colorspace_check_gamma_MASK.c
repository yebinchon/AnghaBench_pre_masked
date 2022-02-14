
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int png_fixed_point ;
typedef int png_const_structrp ;
typedef TYPE_1__* png_colorspacerp ;
struct TYPE_3__ {int flags; int gamma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_3(png_const_structrp VAR_5,
    png_colorspacerp VAR_6, png_fixed_point VAR_7, int VAR_8)
{
   png_fixed_point VAR_9;

   if ((VAR_6->flags & VAR_3) != 0 &&
       (FUNC_2(&VAR_9, VAR_6->gamma, VAR_4, VAR_7) == 0 ||
      FUNC_1(VAR_9) != 0))
   {






      if ((VAR_6->flags & VAR_2) != 0 || VAR_8 == 2)
      {
         FUNC_0(VAR_5, "gamma value does not match sRGB",
             VAR_0);

         return VAR_8 == 2;
      }

      else
      {
         FUNC_0(VAR_5, "gamma value does not match libpng estimate",
             VAR_1);
         return VAR_8 == 1;
      }
   }

   return 1;
}
