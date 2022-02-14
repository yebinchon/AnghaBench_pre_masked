
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* store_palette ;
typedef int png_uint_32 ;
typedef int png_const_bytep ;
typedef int png_byte ;
struct TYPE_8__ {unsigned int palette_index; unsigned int red; unsigned int green; unsigned int blue; unsigned int alpha; int red_sBIT; int green_sBIT; int blue_sBIT; int alpha_sBIT; int colour_type; int bit_depth; int sample_depth; int sig_bits; int littleendian; int swap16; scalar_t__ mono_inverted; scalar_t__ alpha_inverted; scalar_t__ alpha_first; scalar_t__ swap_rgb; scalar_t__ have_tRNS; } ;
typedef TYPE_2__ image_pixel ;
struct TYPE_7__ {unsigned int red; unsigned int green; unsigned int blue; unsigned int alpha; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 void* FUNC_1 (int ,int,int,int ,unsigned int,int const,int const) ;

__attribute__((used)) static void
FUNC_2(image_pixel *VAR_1, png_const_bytep VAR_2, png_byte VAR_3,
    png_byte VAR_4, png_uint_32 VAR_5, store_palette VAR_6,
    const image_pixel *VAR_7 )
{
   const png_byte VAR_8 = (png_byte)(VAR_3 ==
      VAR_0 ? 8 : VAR_4);
   const unsigned int VAR_9 = (1U<<VAR_8)-1;
   const int VAR_10 = (VAR_7 != 0 && VAR_7->swap16);
   const int VAR_11 = (VAR_7 != 0 && VAR_7->littleendian);
   const int VAR_12 = (VAR_7 != 0 && VAR_7->sig_bits);





   VAR_1->palette_index = VAR_1->red = VAR_1->green = VAR_1->blue =
      FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, 0, VAR_10, VAR_11);
   VAR_1->alpha = VAR_9;
   VAR_1->red_sBIT = VAR_1->green_sBIT = VAR_1->blue_sBIT = VAR_1->alpha_sBIT =
      VAR_8;


   if (VAR_3 == 3)
   {

      if (VAR_6 != 0)
      {
         const unsigned int VAR_13 = VAR_1->palette_index;

         VAR_1->red = VAR_6[VAR_13].red;
         VAR_1->green = VAR_6[VAR_13].green;
         VAR_1->blue = VAR_6[VAR_13].blue;
         VAR_1->alpha = VAR_6[VAR_13].alpha;
      }
   }

   else
   {
      unsigned int VAR_14 = 0;

      if ((VAR_3 & 4) != 0 && VAR_7 != 0 && VAR_7->alpha_first)
      {
         VAR_1->alpha = VAR_1->red;

         VAR_1->palette_index = VAR_1->red = VAR_1->green = VAR_1->blue =
            FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, 1, VAR_10, VAR_11);
         VAR_14 = 1;
      }

      if (VAR_3 & 2)
      {

         VAR_1->green = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, ++VAR_14, VAR_10,
                 VAR_11);

         if (VAR_7 != 0 && VAR_7->swap_rgb)
             VAR_1->red = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, ++VAR_14, VAR_10,
                     VAR_11);
         else
             VAR_1->blue = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, ++VAR_14, VAR_10,
                     VAR_11);
      }

      else if (VAR_7 != 0 && VAR_7->mono_inverted)
         VAR_1->red = VAR_1->green = VAR_1->blue = VAR_1->red ^ VAR_9;

      if ((VAR_3 & 4) != 0)
      {
         if (VAR_7 == 0 || !VAR_7->alpha_first)
             VAR_1->alpha = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, ++VAR_14, VAR_10,
                     VAR_11);

         if (VAR_7 != 0 && VAR_7->alpha_inverted)
            VAR_1->alpha ^= VAR_9;
      }
   }





   FUNC_0(VAR_1,
      VAR_12 ? (1U << VAR_7->red_sBIT)-1 : VAR_9,
      VAR_12 ? (1U << VAR_7->green_sBIT)-1 : VAR_9,
      VAR_12 ? (1U << VAR_7->blue_sBIT)-1 : VAR_9,
      VAR_12 ? (1U << VAR_7->alpha_sBIT)-1 : VAR_9);




   VAR_1->colour_type = VAR_3;
   VAR_1->bit_depth = VAR_4;
   VAR_1->sample_depth = VAR_8;
   VAR_1->have_tRNS = 0;
   VAR_1->swap_rgb = 0;
   VAR_1->alpha_first = 0;
   VAR_1->alpha_inverted = 0;
   VAR_1->mono_inverted = 0;
   VAR_1->swap16 = 0;
   VAR_1->littleendian = 0;
   VAR_1->sig_bits = 0;
}
