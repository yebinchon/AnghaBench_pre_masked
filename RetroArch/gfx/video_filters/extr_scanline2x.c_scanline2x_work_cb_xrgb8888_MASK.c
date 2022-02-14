
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct softfilter_thread_data {int in_pitch; int out_pitch; unsigned int height; unsigned int width; scalar_t__ out_data; scalar_t__ in_data; } ;
typedef int scanline_color_buf ;
typedef int color_buf ;


 int FUNC_0 (int*,int*,int) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, void *VAR_1)
{
   struct softfilter_thread_data *VAR_2 = (struct softfilter_thread_data*)VAR_1;
   const uint32_t *VAR_3 = (const uint32_t*)VAR_2->in_data;
   uint32_t *VAR_4 = (uint32_t*)VAR_2->out_data;
   unsigned VAR_5 = (unsigned)(VAR_2->in_pitch >> 2);
   unsigned VAR_6 = (unsigned)(VAR_2->out_pitch >> 2);
   unsigned VAR_7, VAR_8;

   for (VAR_8 = 0; VAR_8 < VAR_2->height; ++VAR_8)
   {
      uint32_t *VAR_9 = VAR_4;
      for (VAR_7 = 0; VAR_7 < VAR_2->width; ++VAR_7)
      {



         uint32_t VAR_10 = *(VAR_3 + VAR_7);
         uint8_t VAR_11 = (VAR_10 >> 24 & 0xFF);
         uint8_t VAR_12 = (VAR_10 >> 16 & 0xFF);
         uint8_t VAR_13 = (VAR_10 >> 8 & 0xFF);
         uint8_t VAR_14 = (VAR_10 & 0xFF);
         uint32_t VAR_15 =
               (((VAR_11 >> 1) + (VAR_11 >> 2)) << 24) |
               (((VAR_12 >> 1) + (VAR_12 >> 2)) << 16) |
               (((VAR_13 >> 1) + (VAR_13 >> 2)) << 8) |
               (((VAR_14 >> 1) + (VAR_14 >> 2)) );
         uint32_t VAR_16[2];
         uint32_t VAR_17[2];

         VAR_16[0] = VAR_10;
         VAR_16[1] = VAR_10;

         VAR_17[0] = VAR_15;
         VAR_17[1] = VAR_15;

         FUNC_0(VAR_9, VAR_16, sizeof(VAR_16));
         FUNC_0(VAR_9 + VAR_6, VAR_17, sizeof(VAR_17));

         VAR_9 += 2;
      }

      VAR_3 += VAR_5;
      VAR_4 += VAR_6 << 1;
   }
}
