
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct softfilter_thread_data {int in_pitch; int out_pitch; unsigned int height; unsigned int width; scalar_t__ out_data; scalar_t__ in_data; } ;
typedef int color_buf ;


 int FUNC_0 (int *,int *,int) ;

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
         uint16_t VAR_11[2];

         VAR_11[0] = VAR_10;
         VAR_11[1] = VAR_10;

         FUNC_0(VAR_9, VAR_11, sizeof(VAR_11));
         FUNC_0(VAR_9 + VAR_6, VAR_11, sizeof(VAR_11));

         VAR_9 += 2;
      }

      VAR_3 += VAR_5;
      VAR_4 += VAR_6 << 1;
   }
}
