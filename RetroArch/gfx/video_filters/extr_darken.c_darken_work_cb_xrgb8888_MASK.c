
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct softfilter_thread_data {unsigned int width; unsigned int height; int in_pitch; int out_pitch; scalar_t__ out_data; scalar_t__ in_data; } ;



__attribute__((used)) static void FUNC_0(void *VAR_0, void *VAR_1)
{
   struct softfilter_thread_data *VAR_2 =
      (struct softfilter_thread_data*)VAR_1;
   const uint32_t *VAR_3 = (const uint32_t*)VAR_2->in_data;
   uint32_t *VAR_4 = (uint32_t*)VAR_2->out_data;
   unsigned VAR_5 = VAR_2->width;
   unsigned VAR_6 = VAR_2->height;

   unsigned VAR_7, VAR_8;
   for (VAR_8 = 0; VAR_8 < VAR_6;
         VAR_8++, VAR_3 += VAR_2->in_pitch >> 2, VAR_4 += VAR_2->out_pitch >> 2)
      for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
         VAR_4[VAR_7] = (VAR_3[VAR_7] >> 2) & (0x3f * 0x01010101);
}
