
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* png_uint_16 ;
typedef TYPE_3__* png_structrp ;
typedef scalar_t__ png_fixed_point ;
struct TYPE_6__ {scalar_t__ red_Y; scalar_t__ green_Y; scalar_t__ blue_Y; } ;
struct TYPE_7__ {int flags; TYPE_1__ end_points_XYZ; } ;
struct TYPE_8__ {scalar_t__ rgb_to_gray_coefficients_set; void* rgb_to_gray_green_coeff; void* rgb_to_gray_red_coeff; TYPE_2__ colorspace; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_1 (scalar_t__*,scalar_t__,int,scalar_t__) ;

void
FUNC_2(png_structrp VAR_1)
{

   if (VAR_1->rgb_to_gray_coefficients_set == 0 &&
      (VAR_1->colorspace.flags & VAR_0) != 0)
   {



      png_fixed_point VAR_2 = VAR_1->colorspace.end_points_XYZ.red_Y;
      png_fixed_point VAR_3 = VAR_1->colorspace.end_points_XYZ.green_Y;
      png_fixed_point VAR_4 = VAR_1->colorspace.end_points_XYZ.blue_Y;
      png_fixed_point VAR_5 = VAR_2+VAR_3+VAR_4;

      if (VAR_5 > 0 &&
         VAR_2 >= 0 && FUNC_1(&VAR_2, VAR_2, 32768, VAR_5) && VAR_2 >= 0 && VAR_2 <= 32768 &&
         VAR_3 >= 0 && FUNC_1(&VAR_3, VAR_3, 32768, VAR_5) && VAR_3 >= 0 && VAR_3 <= 32768 &&
         VAR_4 >= 0 && FUNC_1(&VAR_4, VAR_4, 32768, VAR_5) && VAR_4 >= 0 && VAR_4 <= 32768 &&
         VAR_2+VAR_3+VAR_4 <= 32769)
      {





         int VAR_6 = 0;

         if (VAR_2+VAR_3+VAR_4 > 32768)
            VAR_6 = -1;
         else if (VAR_2+VAR_3+VAR_4 < 32768)
            VAR_6 = 1;

         if (VAR_6 != 0)
         {
            if (VAR_3 >= VAR_2 && VAR_3 >= VAR_4)
               VAR_3 += VAR_6;
            else if (VAR_2 >= VAR_3 && VAR_2 >= VAR_4)
               VAR_2 += VAR_6;
            else
               VAR_4 += VAR_6;
         }


         if (VAR_2+VAR_3+VAR_4 != 32768)
            FUNC_0(VAR_1,
                "internal error handling cHRM coefficients");

         else
         {
            VAR_1->rgb_to_gray_red_coeff = (png_uint_16)VAR_2;
            VAR_1->rgb_to_gray_green_coeff = (png_uint_16)VAR_3;
         }
      }





      else
         FUNC_0(VAR_1, "internal error handling cHRM->XYZ");
   }
}
