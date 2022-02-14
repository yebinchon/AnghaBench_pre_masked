
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct resampler_data {unsigned int ratio; float* data_in; float* data_out; size_t input_frames; size_t output_frames; } ;
struct TYPE_2__ {int phase_bits; int subphase_bits; unsigned int time; size_t ptr; size_t taps; float* buffer_l; float* buffer_r; scalar_t__ window_type; float* phase_table; int subphase_mask; float subphase_mod; } ;
typedef TYPE_1__ rarch_sinc_resampler_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(void *VAR_1, struct resampler_data *VAR_2)
{
   rarch_sinc_resampler_t *VAR_3 = (rarch_sinc_resampler_t*)VAR_1;
   unsigned VAR_4 = 1 << (VAR_3->phase_bits + VAR_3->subphase_bits);

   uint32_t VAR_5 = VAR_4 / VAR_2->ratio;
   const float *VAR_6 = VAR_2->data_in;
   float *VAR_7 = VAR_2->data_out;
   size_t VAR_8 = VAR_2->input_frames;
   size_t VAR_9 = 0;

   while (VAR_8)
   {
      while (VAR_8 && VAR_3->time >= VAR_4)
      {

         if (!VAR_3->ptr)
            VAR_3->ptr = VAR_3->taps;
         VAR_3->ptr--;

         VAR_3->buffer_l[VAR_3->ptr + VAR_3->taps] =
            VAR_3->buffer_l[VAR_3->ptr] = *VAR_6++;

         VAR_3->buffer_r[VAR_3->ptr + VAR_3->taps] =
            VAR_3->buffer_r[VAR_3->ptr] = *VAR_6++;

         VAR_3->time -= VAR_4;
         VAR_8--;
      }

      while (VAR_3->time < VAR_4)
      {
         unsigned VAR_10;
         float VAR_11 = 0.0f;
         float VAR_12 = 0.0f;
         float VAR_13 = 0.0f;
         float *VAR_14 = ((void*)0);
         float *VAR_15 = ((void*)0);
         const float *VAR_16 = VAR_3->buffer_l + VAR_3->ptr;
         const float *VAR_17 = VAR_3->buffer_r + VAR_3->ptr;
         unsigned VAR_18 = VAR_3->taps;
         unsigned VAR_19 = VAR_3->time >> VAR_3->subphase_bits;

         if (VAR_3->window_type == VAR_0)
         {
            VAR_14 = VAR_3->phase_table + VAR_19 * VAR_18 * 2;
            VAR_15 = VAR_14 + VAR_18;
            VAR_11 = (float)
               (VAR_3->time & VAR_3->subphase_mask) * VAR_3->subphase_mod;
         }
         else
         {
            VAR_14 = VAR_3->phase_table + VAR_19 * VAR_18;
         }

         for (VAR_10 = 0; VAR_10 < VAR_18; VAR_10++)
         {
            float VAR_20 = VAR_14[VAR_10];

            if (VAR_3->window_type == VAR_0)
               VAR_20 = VAR_20 + VAR_15[VAR_10] * VAR_11;

            VAR_12 += VAR_16[VAR_10] * VAR_20;
            VAR_13 += VAR_17[VAR_10] * VAR_20;
         }

         VAR_7[0] = VAR_12;
         VAR_7[1] = VAR_13;

         VAR_7 += 2;
         VAR_9++;
         VAR_3->time += VAR_5;
      }

   }

   VAR_2->output_frames = VAR_9;
}
