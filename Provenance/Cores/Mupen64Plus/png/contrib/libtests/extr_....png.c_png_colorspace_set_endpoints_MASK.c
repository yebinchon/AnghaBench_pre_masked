
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int png_xy ;
typedef int png_const_structrp ;
typedef TYPE_1__* png_colorspacerp ;
typedef int png_XYZ ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,TYPE_1__*,int *,int *,int) ;
 int FUNC_3 (int ,char*) ;

int
FUNC_4(png_const_structrp VAR_1,
    png_colorspacerp VAR_2, const png_XYZ *VAR_3, int VAR_4)
{
   png_XYZ VAR_5 = *VAR_3;
   png_xy VAR_6;

   switch (FUNC_1(&VAR_6, &VAR_5))
   {
      case 0:
         return FUNC_2(VAR_1, VAR_2, &VAR_6, &VAR_5,
             VAR_4);

      case 1:

         VAR_2->flags |= VAR_0;
         FUNC_0(VAR_1, "invalid end points");
         break;

      default:
         VAR_2->flags |= VAR_0;
         FUNC_3(VAR_1, "internal error checking chromaticities");
   }

   return 0;
}
