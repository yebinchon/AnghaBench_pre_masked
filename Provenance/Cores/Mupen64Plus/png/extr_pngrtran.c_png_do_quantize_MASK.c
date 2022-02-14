
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ png_uint_32 ;
typedef TYPE_1__* png_row_infop ;
typedef void** png_const_bytep ;
typedef size_t* png_bytep ;
struct TYPE_3__ {scalar_t__ width; int bit_depth; scalar_t__ color_type; int channels; int pixel_depth; void* rowbytes; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int,char*) ;

__attribute__((used)) static void
FUNC_2(png_row_infop VAR_6, png_bytep VAR_7,
    png_const_bytep VAR_8, png_const_bytep VAR_9)
{
   png_bytep VAR_10, VAR_11;
   png_uint_32 VAR_12;
   png_uint_32 VAR_13=VAR_6->width;

   FUNC_1(1, "in png_do_quantize");

   if (VAR_6->bit_depth == 8)
   {
      if (VAR_6->color_type == VAR_1 && VAR_8)
      {
         int VAR_14, VAR_15, VAR_16, VAR_17;
         VAR_10 = VAR_7;
         VAR_11 = VAR_7;
         for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
         {
            VAR_14 = *VAR_10++;
            VAR_15 = *VAR_10++;
            VAR_16 = *VAR_10++;
            VAR_17 = (((VAR_14 >> (8 - VAR_5)) &
                ((1 << VAR_5) - 1)) <<
                (VAR_4 + VAR_3)) |
                (((VAR_15 >> (8 - VAR_4)) &
                ((1 << VAR_4) - 1)) <<
                (VAR_3)) |
                ((VAR_16 >> (8 - VAR_3)) &
                ((1 << VAR_3) - 1));

            *VAR_11++ = VAR_8[VAR_17];
         }

         VAR_6->color_type = VAR_0;
         VAR_6->channels = 1;
         VAR_6->pixel_depth = VAR_6->bit_depth;
         VAR_6->rowbytes = FUNC_0(VAR_6->pixel_depth, VAR_13);
      }

      else if (VAR_6->color_type == VAR_2 &&
         VAR_8 != ((void*)0))
      {
         int VAR_18, VAR_19, VAR_20, VAR_21;
         VAR_10 = VAR_7;
         VAR_11 = VAR_7;
         for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
         {
            VAR_18 = *VAR_10++;
            VAR_19 = *VAR_10++;
            VAR_20 = *VAR_10++;
            VAR_10++;

            VAR_21 = (((VAR_18 >> (8 - VAR_5)) &
                ((1 << VAR_5) - 1)) <<
                (VAR_4 + VAR_3)) |
                (((VAR_19 >> (8 - VAR_4)) &
                ((1 << VAR_4) - 1)) <<
                (VAR_3)) |
                ((VAR_20 >> (8 - VAR_3)) &
                ((1 << VAR_3) - 1));

            *VAR_11++ = VAR_8[VAR_21];
         }

         VAR_6->color_type = VAR_0;
         VAR_6->channels = 1;
         VAR_6->pixel_depth = VAR_6->bit_depth;
         VAR_6->rowbytes = FUNC_0(VAR_6->pixel_depth, VAR_13);
      }

      else if (VAR_6->color_type == VAR_0 &&
         VAR_9)
      {
         VAR_10 = VAR_7;

         for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++, VAR_10++)
         {
            *VAR_10 = VAR_9[*VAR_10];
         }
      }
   }
}
