
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct echo_data {unsigned int num_channels; float amp; TYPE_1__* channels; } ;
struct dspfilter_output {float* samples; unsigned int frames; } ;
struct dspfilter_input {float* samples; unsigned int frames; } ;
struct TYPE_2__ {float* buffer; int ptr; float feedback; int frames; } ;



__attribute__((used)) static void FUNC_0(void *VAR_0, struct dspfilter_output *VAR_1,
      const struct dspfilter_input *VAR_2)
{
   unsigned VAR_3, VAR_4;
   float *VAR_5 = ((void*)0);
   struct echo_data *VAR_6 = (struct echo_data*)VAR_0;

   VAR_1->samples = VAR_2->samples;
   VAR_1->frames = VAR_2->frames;

   VAR_5 = VAR_1->samples;

   for (VAR_3 = 0; VAR_3 < VAR_2->frames; VAR_3++, VAR_5 += 2)
   {
      float VAR_7, VAR_8;
      float VAR_9 = 0.0f;
      float VAR_10 = 0.0f;

      for (VAR_4 = 0; VAR_4 < VAR_6->num_channels; VAR_4++)
      {
         VAR_9 += VAR_6->channels[VAR_4].buffer[(VAR_6->channels[VAR_4].ptr << 1) + 0];
         VAR_10 += VAR_6->channels[VAR_4].buffer[(VAR_6->channels[VAR_4].ptr << 1) + 1];
      }

      VAR_9 *= VAR_6->amp;
      VAR_10 *= VAR_6->amp;

      VAR_7 = VAR_5[0] + VAR_9;
      VAR_8 = VAR_5[1] + VAR_10;

      for (VAR_4 = 0; VAR_4 < VAR_6->num_channels; VAR_4++)
      {
         float VAR_11 = VAR_5[0] + VAR_6->channels[VAR_4].feedback * VAR_9;
         float VAR_12 = VAR_5[1] + VAR_6->channels[VAR_4].feedback * VAR_10;

         VAR_6->channels[VAR_4].buffer[(VAR_6->channels[VAR_4].ptr << 1) + 0] = VAR_11;
         VAR_6->channels[VAR_4].buffer[(VAR_6->channels[VAR_4].ptr << 1) + 1] = VAR_12;

         VAR_6->channels[VAR_4].ptr = (VAR_6->channels[VAR_4].ptr + 1) % VAR_6->channels[VAR_4].frames;
      }

      VAR_5[0] = VAR_7;
      VAR_5[1] = VAR_8;
   }
}
