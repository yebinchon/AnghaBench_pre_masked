
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dspfilter_output {float* samples; unsigned int frames; } ;
struct dspfilter_input {float* samples; unsigned int frames; } ;
struct delta_data {float* old; float intensity; } ;



__attribute__((used)) static void FUNC_0(void *VAR_0, struct dspfilter_output *VAR_1,
      const struct dspfilter_input *VAR_2)
{
   unsigned VAR_3, VAR_4;
   struct delta_data *VAR_5 = (struct delta_data*)VAR_0;
   float *VAR_6 = VAR_1->samples;
   VAR_1->samples = VAR_2->samples;
   VAR_1->frames = VAR_2->frames;

   for (VAR_3 = 0; VAR_3 < VAR_2->frames; VAR_3++)
   {
      for (VAR_4 = 0; VAR_4 < 2; VAR_4++)
      {
           float VAR_7 = *VAR_6;
           *VAR_6++ = VAR_7 + (VAR_7 - VAR_5->old[VAR_4]) * VAR_5->intensity;
           VAR_5->old[VAR_4] = VAR_7;
      }
   }
}
