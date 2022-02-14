
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
typedef int uint32_t ;
struct rpng_process {int* decoded_scanline; int* inflate_buf; unsigned int pitch; unsigned int bpp; int* prev_scanline; int palette; } ;
struct png_ihdr {int color_type; int depth; int width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int*,unsigned int) ;
 void* FUNC_1 (int,int,int) ;
 int FUNC_2 (int *,int*,int ,int ) ;
 int FUNC_3 (int *,int*,int ,int ) ;
 int FUNC_4 (int *,int*,int ,int ,int ) ;
 int FUNC_5 (int *,int*,int ,int ) ;
 int FUNC_6 (int *,int*,int ,int ) ;

__attribute__((used)) static int FUNC_7(uint32_t *VAR_2, const struct png_ihdr *VAR_3,
      struct rpng_process *VAR_4, unsigned VAR_5)
{
   unsigned VAR_6;

   switch (VAR_5)
   {
      case 136:
         FUNC_0(VAR_4->decoded_scanline, VAR_4->inflate_buf, VAR_4->pitch);
         break;
      case 134:
         for (VAR_6 = 0; VAR_6 < VAR_4->bpp; VAR_6++)
            VAR_4->decoded_scanline[VAR_6] = VAR_4->inflate_buf[VAR_6];
         for (VAR_6 = VAR_4->bpp; VAR_6 < VAR_4->pitch; VAR_6++)
            VAR_4->decoded_scanline[VAR_6] = VAR_4->decoded_scanline[VAR_6 - VAR_4->bpp] + VAR_4->inflate_buf[VAR_6];
         break;
      case 133:
         for (VAR_6 = 0; VAR_6 < VAR_4->pitch; VAR_6++)
            VAR_4->decoded_scanline[VAR_6] = VAR_4->prev_scanline[VAR_6] + VAR_4->inflate_buf[VAR_6];
         break;
      case 137:
         for (VAR_6 = 0; VAR_6 < VAR_4->bpp; VAR_6++)
         {
            uint8_t VAR_7 = VAR_4->prev_scanline[VAR_6] >> 1;
            VAR_4->decoded_scanline[VAR_6] = VAR_7 + VAR_4->inflate_buf[VAR_6];
         }
         for (VAR_6 = VAR_4->bpp; VAR_6 < VAR_4->pitch; VAR_6++)
         {
            uint8_t VAR_8 = (VAR_4->decoded_scanline[VAR_6 - VAR_4->bpp] + VAR_4->prev_scanline[VAR_6]) >> 1;
            VAR_4->decoded_scanline[VAR_6] = VAR_8 + VAR_4->inflate_buf[VAR_6];
         }
         break;
      case 135:
         for (VAR_6 = 0; VAR_6 < VAR_4->bpp; VAR_6++)
            VAR_4->decoded_scanline[VAR_6] = FUNC_1(0, VAR_4->prev_scanline[VAR_6], 0) + VAR_4->inflate_buf[VAR_6];
         for (VAR_6 = VAR_4->bpp; VAR_6 < VAR_4->pitch; VAR_6++)
            VAR_4->decoded_scanline[VAR_6] = FUNC_1(VAR_4->decoded_scanline[VAR_6 - VAR_4->bpp],
                  VAR_4->prev_scanline[VAR_6], VAR_4->prev_scanline[VAR_6 - VAR_4->bpp]) + VAR_4->inflate_buf[VAR_6];
         break;

      default:
         return VAR_0;
   }

   switch (VAR_3->color_type)
   {
      case 132:
         FUNC_2(VAR_2, VAR_4->decoded_scanline, VAR_3->width, VAR_3->depth);
         break;
      case 129:
         FUNC_5(VAR_2, VAR_4->decoded_scanline, VAR_3->width, VAR_3->depth);
         break;
      case 130:
         FUNC_4(VAR_2, VAR_4->decoded_scanline, VAR_3->width,
               VAR_3->depth, VAR_4->palette);
         break;
      case 131:
         FUNC_3(VAR_2, VAR_4->decoded_scanline, VAR_3->width,
               VAR_3->depth);
         break;
      case 128:
         FUNC_6(VAR_2, VAR_4->decoded_scanline, VAR_3->width, VAR_3->depth);
         break;
   }

   FUNC_0(VAR_4->prev_scanline, VAR_4->decoded_scanline, VAR_4->pitch);

   return VAR_1;
}
