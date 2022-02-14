
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int png_uint_32 ;
typedef TYPE_1__* png_row_infop ;
typedef int* png_bytep ;
typedef unsigned int png_byte ;
struct TYPE_3__ {int bit_depth; int channels; int width; unsigned int pixel_depth; int rowbytes; } ;


 int FUNC_0 (unsigned int,int) ;
 int FUNC_1 (int,char*) ;

__attribute__((used)) static void
FUNC_2(png_row_infop VAR_0, png_bytep VAR_1, png_uint_32 VAR_2)
{
   FUNC_1(1, "in png_do_pack");

   if (VAR_0->bit_depth == 8 &&
      VAR_0->channels == 1)
   {
      switch ((int)VAR_2)
      {
         case 1:
         {
            png_bytep VAR_3, VAR_4;
            int VAR_5, VAR_6;
            png_uint_32 VAR_7;
            png_uint_32 VAR_8 = VAR_0->width;

            VAR_3 = VAR_1;
            VAR_4 = VAR_1;
            VAR_5 = 0x80;
            VAR_6 = 0;

            for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
            {
               if (*VAR_3 != 0)
                  VAR_6 |= VAR_5;

               VAR_3++;

               if (VAR_5 > 1)
                  VAR_5 >>= 1;

               else
               {
                  VAR_5 = 0x80;
                  *VAR_4 = (png_byte)VAR_6;
                  VAR_4++;
                  VAR_6 = 0;
               }
            }

            if (VAR_5 != 0x80)
               *VAR_4 = (png_byte)VAR_6;

            break;
         }

         case 2:
         {
            png_bytep VAR_9, VAR_10;
            unsigned int VAR_11;
            int VAR_12;
            png_uint_32 VAR_13;
            png_uint_32 VAR_14 = VAR_0->width;

            VAR_9 = VAR_1;
            VAR_10 = VAR_1;
            VAR_11 = 6;
            VAR_12 = 0;

            for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++)
            {
               png_byte VAR_15;

               VAR_15 = (png_byte)(*VAR_9 & 0x03);
               VAR_12 |= (VAR_15 << VAR_11);

               if (VAR_11 == 0)
               {
                  VAR_11 = 6;
                  *VAR_10 = (png_byte)VAR_12;
                  VAR_10++;
                  VAR_12 = 0;
               }

               else
                  VAR_11 -= 2;

               VAR_9++;
            }

            if (VAR_11 != 6)
               *VAR_10 = (png_byte)VAR_12;

            break;
         }

         case 4:
         {
            png_bytep VAR_16, VAR_17;
            unsigned int VAR_18;
            int VAR_19;
            png_uint_32 VAR_20;
            png_uint_32 VAR_21 = VAR_0->width;

            VAR_16 = VAR_1;
            VAR_17 = VAR_1;
            VAR_18 = 4;
            VAR_19 = 0;

            for (VAR_20 = 0; VAR_20 < VAR_21; VAR_20++)
            {
               png_byte VAR_22;

               VAR_22 = (png_byte)(*VAR_16 & 0x0f);
               VAR_19 |= (VAR_22 << VAR_18);

               if (VAR_18 == 0)
               {
                  VAR_18 = 4;
                  *VAR_17 = (png_byte)VAR_19;
                  VAR_17++;
                  VAR_19 = 0;
               }

               else
                  VAR_18 -= 4;

               VAR_16++;
            }

            if (VAR_18 != 4)
               *VAR_17 = (png_byte)VAR_19;

            break;
         }

         default:
            break;
      }

      VAR_0->bit_depth = (png_byte)VAR_2;
      VAR_0->pixel_depth = (png_byte)(VAR_2 * VAR_0->channels);
      VAR_0->rowbytes = FUNC_0(VAR_0->pixel_depth,
          VAR_0->width);
   }
}
