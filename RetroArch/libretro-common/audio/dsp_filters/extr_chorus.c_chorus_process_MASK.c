
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dspfilter_output {float* samples; unsigned int frames; } ;
struct dspfilter_input {float* samples; unsigned int frames; } ;
struct chorus_data {float delay; float depth; double lfo_ptr; double lfo_period; float input_rate; float** old; size_t old_ptr; float mix_dry; float mix_wet; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 double VAR_2 ;
 float FUNC_0 (double) ;

__attribute__((used)) static void FUNC_1(void *VAR_3, struct dspfilter_output *VAR_4,
      const struct dspfilter_input *VAR_5)
{
   unsigned VAR_6;
   float *VAR_7 = ((void*)0);
   struct chorus_data *VAR_8 = (struct chorus_data*)VAR_3;

   VAR_4->samples = VAR_5->samples;
   VAR_4->frames = VAR_5->frames;
   VAR_7 = VAR_4->samples;

   for (VAR_6 = 0; VAR_6 < VAR_5->frames; VAR_6++, VAR_7 += 2)
   {
      unsigned VAR_9;
      float VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
      float VAR_15, VAR_16;
      float VAR_17[2] = { VAR_7[0], VAR_7[1] };
      float VAR_18 = VAR_8->delay + VAR_8->depth * FUNC_0((2.0 * VAR_2 * VAR_8->lfo_ptr++) / VAR_8->lfo_period);

      VAR_18 *= VAR_8->input_rate;
      if (VAR_8->lfo_ptr >= VAR_8->lfo_period)
         VAR_8->lfo_ptr = 0;

      VAR_9 = (unsigned)VAR_18;

      if (VAR_9 >= VAR_1 - 1)
         VAR_9 = VAR_1 - 2;

      VAR_10 = VAR_18 - VAR_9;

      VAR_8->old[0][VAR_8->old_ptr] = VAR_17[0];
      VAR_8->old[1][VAR_8->old_ptr] = VAR_17[1];

      VAR_11 = VAR_8->old[0][(VAR_8->old_ptr - VAR_9 - 0) & VAR_0];
      VAR_12 = VAR_8->old[0][(VAR_8->old_ptr - VAR_9 - 1) & VAR_0];
      VAR_13 = VAR_8->old[1][(VAR_8->old_ptr - VAR_9 - 0) & VAR_0];
      VAR_14 = VAR_8->old[1][(VAR_8->old_ptr - VAR_9 - 1) & VAR_0];



      VAR_15 = VAR_11 * (1.0f - VAR_10) + VAR_12 * VAR_10;
      VAR_16 = VAR_13 * (1.0f - VAR_10) + VAR_14 * VAR_10;

      VAR_7[0] = VAR_8->mix_dry * VAR_17[0] + VAR_8->mix_wet * VAR_15;
      VAR_7[1] = VAR_8->mix_dry * VAR_17[1] + VAR_8->mix_wet * VAR_16;

      VAR_8->old_ptr = (VAR_8->old_ptr + 1) & VAR_0;
   }
}
