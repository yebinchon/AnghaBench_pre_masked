
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_uint_32 ;
typedef scalar_t__ png_int_32 ;
typedef int* png_fixed_point_p ;
typedef int png_fixed_point ;


 double FUNC_0 (double) ;

int
FUNC_1(png_fixed_point_p VAR_0, png_fixed_point VAR_1, png_int_32 VAR_2,
    png_int_32 VAR_3)
{

   if (VAR_3 != 0)
   {
      if (VAR_1 == 0 || VAR_2 == 0)
      {
         *VAR_0 = 0;
         return 1;
      }
      else
      {
         int VAR_4 = 0;
         png_uint_32 VAR_5, VAR_6, VAR_7;
         png_uint_32 VAR_8, VAR_9, VAR_10;

         if (VAR_1 < 0)
            VAR_4 = 1, VAR_5 = -VAR_1;
         else
            VAR_5 = VAR_1;

         if (VAR_2 < 0)
            VAR_4 = !VAR_4, VAR_6 = -VAR_2;
         else
            VAR_6 = VAR_2;

         if (VAR_3 < 0)
            VAR_4 = !VAR_4, VAR_7 = -VAR_3;
         else
            VAR_7 = VAR_3;




         VAR_8 = (VAR_5 >> 16) * (VAR_6 & 0xffff) +
                           (VAR_5 & 0xffff) * (VAR_6 >> 16);



         VAR_9 = (VAR_5 >> 16) * (VAR_6 >> 16) + (VAR_8 >> 16);
         VAR_10 = (VAR_5 & 0xffff) * (VAR_6 & 0xffff);

         VAR_8 = (VAR_8 & 0xffff) << 16;
         VAR_10 += VAR_8;

         if (VAR_10 < VAR_8)
            ++VAR_9;

         if (VAR_9 < VAR_7)
         {




            int VAR_11 = 32;
            png_fixed_point VAR_12 = 0;

            while (--VAR_11 >= 0)
            {
               png_uint_32 VAR_13, VAR_14;

               if (VAR_11 > 0)
                  VAR_13 = VAR_7 >> (32-VAR_11), VAR_14 = VAR_7 << VAR_11;

               else
                  VAR_13 = 0, VAR_14 = VAR_7;

               if (VAR_9 > VAR_13)
               {
                  if (VAR_10 < VAR_14) --VAR_9;
                  VAR_9 -= VAR_13, VAR_10 -= VAR_14, VAR_12 += 1<<VAR_11;
               }

               else
                  if (VAR_9 == VAR_13 && VAR_10 >= VAR_14)
                     VAR_9 = 0, VAR_10 -= VAR_14, VAR_12 += 1<<VAR_11;
            }


            if (VAR_10 >= (VAR_7 >> 1))
               ++VAR_12;

            if (VAR_4 != 0)
               VAR_12 = -VAR_12;


            if ((VAR_4 != 0 && VAR_12 <= 0) ||
                (VAR_4 == 0 && VAR_12 >= 0))
            {
               *VAR_0 = VAR_12;
               return 1;
            }
         }

      }
   }

   return 0;
}
