
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct softfilter_thread_data {int in_pitch; int out_pitch; unsigned int height; unsigned int width; scalar_t__ out_data; scalar_t__ in_data; } ;
typedef int scanline_color_buf ;
typedef int color_buf ;


 int FUNC_0 (int*,int*,int) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, void *VAR_1)
{
   struct softfilter_thread_data *VAR_2 = (struct softfilter_thread_data*)VAR_1;
   const uint16_t *VAR_3 = (const uint16_t*)VAR_2->in_data;
   uint16_t *VAR_4 = (uint16_t*)VAR_2->out_data;
   unsigned VAR_5 = (unsigned)(VAR_2->in_pitch >> 1);
   unsigned VAR_6 = (unsigned)(VAR_2->out_pitch >> 1);
   unsigned VAR_7, VAR_8;

   for (VAR_8 = 0; VAR_8 < VAR_2->height; ++VAR_8)
   {
      uint16_t *VAR_9 = VAR_4;
      for (VAR_7 = 0; VAR_7 < VAR_2->width; ++VAR_7)
      {
         uint16_t VAR_10 = *(VAR_3 + VAR_7);
         uint8_t VAR_11 = (VAR_10 >> 11 & 0x1F);
         uint8_t VAR_12 = (VAR_10 >> 6 & 0x1F);
         uint8_t VAR_13 = (VAR_10 & 0x1F);
         uint16_t VAR_14 =
               (((VAR_11 >> 1) + (VAR_11 >> 2)) << 11) |
               (((VAR_12 >> 1) + (VAR_12 >> 2)) << 6) |
               (((VAR_13 >> 1) + (VAR_13 >> 2)) );
         uint16_t VAR_15[2];
         uint16_t VAR_16[2];

         VAR_15[0] = VAR_10;
         VAR_15[1] = VAR_10;

         VAR_16[0] = VAR_14;
         VAR_16[1] = VAR_14;

         FUNC_0(VAR_9, VAR_15, sizeof(VAR_15));
         FUNC_0(VAR_9 + VAR_6, VAR_16, sizeof(VAR_16));

         VAR_9 += 2;
      }

      VAR_3 += VAR_5;
      VAR_4 += VAR_6 << 1;
   }
}
