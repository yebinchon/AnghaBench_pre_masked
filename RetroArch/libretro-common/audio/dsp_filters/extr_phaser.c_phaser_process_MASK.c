
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phaser_data {float* fbout; float fb; int skipcount; double gain; int lfoskip; double depth; int stages; float** old; float drywet; scalar_t__ phase; } ;
struct dspfilter_output {float* samples; unsigned int frames; } ;
struct dspfilter_input {float* samples; unsigned int frames; } ;


 double FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(void *VAR_2, struct dspfilter_output *VAR_3,
      const struct dspfilter_input *VAR_4)
{
   unsigned VAR_5, VAR_6;
   int VAR_7;
   float VAR_8[2], VAR_9[2];
   struct phaser_data *VAR_10 = (struct phaser_data*)VAR_2;
   float *VAR_11 = VAR_3->samples;

   VAR_3->samples = VAR_4->samples;
   VAR_3->frames = VAR_4->frames;

   for (VAR_5 = 0; VAR_5 < VAR_4->frames; VAR_5++, VAR_11 += 2)
   {
      float VAR_12[2] = { VAR_11[0], VAR_11[1] };

      for (VAR_6 = 0; VAR_6 < 2; VAR_6++)
         VAR_8[VAR_6] = VAR_12[VAR_6] + VAR_10->fbout[VAR_6] * VAR_10->fb * 0.01f;

      if ((VAR_10->skipcount++ % VAR_1) == 0)
      {
         VAR_10->gain = 0.5 * (1.0 + FUNC_0(VAR_10->skipcount * VAR_10->lfoskip + VAR_10->phase));
         VAR_10->gain = (FUNC_1(VAR_10->gain * VAR_0) - 1.0) / (FUNC_1(VAR_0) - 1);
         VAR_10->gain = 1.0 - VAR_10->gain * VAR_10->depth;
      }

      for (VAR_7 = 0; VAR_7 < VAR_10->stages; VAR_7++)
      {
         for (VAR_6 = 0; VAR_6 < 2; VAR_6++)
         {
            VAR_9[VAR_6] = VAR_10->old[VAR_6][VAR_7];
            VAR_10->old[VAR_6][VAR_7] = VAR_10->gain * VAR_9[VAR_6] + VAR_8[VAR_6];
            VAR_8[VAR_6] = VAR_9[VAR_6] - VAR_10->gain * VAR_10->old[VAR_6][VAR_7];
         }
      }

      for (VAR_6 = 0; VAR_6 < 2; VAR_6++)
      {
         VAR_10->fbout[VAR_6] = VAR_8[VAR_6];
         VAR_11[VAR_6] = VAR_8[VAR_6] * VAR_10->drywet + VAR_12[VAR_6] * (1.0f - VAR_10->drywet);
      }
   }
}
