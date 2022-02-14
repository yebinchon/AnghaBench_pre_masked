
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int png_xy ;
typedef int png_const_structrp ;
typedef TYPE_1__* png_colorspacerp ;
typedef int png_XYZ ;
struct TYPE_3__ {int flags; int end_points_XYZ; int end_points_xy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int const*,int *,int) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_3(png_const_structrp VAR_4,
    png_colorspacerp VAR_5, const png_xy *VAR_6, const png_XYZ *VAR_7,
    int VAR_8)
{
   if ((VAR_5->flags & VAR_2) != 0)
      return 0;





   if (VAR_8 < 2 &&
       (VAR_5->flags & VAR_1) != 0)
   {



      if (FUNC_2(VAR_6, &VAR_5->end_points_xy,
          100) == 0)
      {
         VAR_5->flags |= VAR_2;
         FUNC_1(VAR_4, "inconsistent chromaticities");
         return 0;
      }


      if (VAR_8 == 0)
         return 1;
   }

   VAR_5->end_points_xy = *VAR_6;
   VAR_5->end_points_XYZ = *VAR_7;
   VAR_5->flags |= VAR_1;




   if (FUNC_2(VAR_6, &VAR_3, 1000) != 0)
      VAR_5->flags |= VAR_0;

   else
      VAR_5->flags &= FUNC_0(
         VAR_0);

   return 2;
}
