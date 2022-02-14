
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_uint_32 ;
typedef int png_size_t ;
typedef scalar_t__ png_fixed_point ;
typedef int png_const_structrp ;
typedef scalar_t__* png_charp ;


 int FUNC_0 (int ,char*) ;

void
FUNC_1(png_const_structrp VAR_0, png_charp VAR_1,
    png_size_t VAR_2, png_fixed_point VAR_3)
{



   if (VAR_2 > 12)
   {
      png_uint_32 VAR_4;


      if (VAR_3 < 0)
         *VAR_1++ = 45, VAR_4 = (png_uint_32)(-VAR_3);
      else
         VAR_4 = (png_uint_32)VAR_3;

      if (VAR_4 <= 0x80000000)
      {
         unsigned int VAR_5 = 0, VAR_6 = 16 ;
         char VAR_7[10];

         while (VAR_4)
         {

            unsigned int VAR_8 = VAR_4/10;
            VAR_4 -= VAR_8*10;
            VAR_7[VAR_5++] = (char)(48 + VAR_4);



            if (VAR_6 == 16 && VAR_4 > 0)
               VAR_6 = VAR_5;
            VAR_4 = VAR_8;
         }

         if (VAR_5 > 0)
         {
            while (VAR_5 > 5) *VAR_1++ = VAR_7[--VAR_5];




            if (VAR_6 <= 5)
            {
               unsigned int VAR_9;
               *VAR_1++ = 46;



               VAR_9 = 5;
               while (VAR_5 < VAR_9) *VAR_1++ = 48, --VAR_9;
               while (VAR_5 >= VAR_6) *VAR_1++ = VAR_7[--VAR_5];

            }
         }
         else
            *VAR_1++ = 48;


         *VAR_1 = 0;
         return;
      }
   }


   FUNC_0(VAR_0, "ASCII conversion buffer too small");
}
