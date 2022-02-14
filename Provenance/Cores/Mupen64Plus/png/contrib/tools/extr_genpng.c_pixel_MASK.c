
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct arg {TYPE_1__* color; } ;
typedef scalar_t__* png_uint_16p ;
typedef scalar_t__ png_uint_16 ;
struct TYPE_2__ {double const red; double const green; double const blue; } ;


 int FUNC_0 (struct arg*,double,double) ;
 scalar_t__ FUNC_1 (double) ;

__attribute__((used)) static void
FUNC_2(png_uint_16p VAR_0, struct arg *VAR_1, int VAR_2, double VAR_3, double VAR_4)
{



   double VAR_5=0, VAR_6=0, VAR_7=0, VAR_8=0;

   while (--VAR_2 >= 0 && VAR_8 != 1)
   {



      const double VAR_9 = FUNC_0(VAR_1+VAR_2, VAR_3, VAR_4) * (1-VAR_8);

      VAR_5 += VAR_9 * VAR_1[VAR_2].color->red;
      VAR_6 += VAR_9 * VAR_1[VAR_2].color->green;
      VAR_7 += VAR_9 * VAR_1[VAR_2].color->blue;
      VAR_8 += VAR_9;
   }




   if (VAR_8 > 0)
   {
      if (VAR_8 > 1)
      {
         if (VAR_5 > 1) VAR_5 = 1;
         if (VAR_6 > 1) VAR_6 = 1;
         if (VAR_7 > 1) VAR_7 = 1;
         VAR_8 = 1;
      }


      VAR_0[0] = (png_uint_16) FUNC_1(VAR_5 * 65535);
      VAR_0[1] = (png_uint_16) FUNC_1(VAR_6 * 65535);
      VAR_0[2] = (png_uint_16) FUNC_1(VAR_7 * 65535);
      VAR_0[3] = (png_uint_16) FUNC_1(VAR_8 * 65535);
   }

   else
      VAR_0[3] = VAR_0[2] = VAR_0[1] = VAR_0[0] = 0;
}
