
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct resampler_data {unsigned int ratio; float* data_in; float* data_out; size_t input_frames; size_t output_frames; } ;
struct TYPE_2__ {int phase_bits; int subphase_bits; unsigned int time; size_t ptr; size_t taps; float* buffer_l; float* buffer_r; scalar_t__ window_type; float* phase_table; int subphase_mask; float subphase_mod; } ;
typedef TYPE_1__ rarch_sinc_resampler_t ;
typedef int __m128 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int,int,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (float const*) ;
 int FUNC_3 (float const*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (float) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (float*,int ) ;

__attribute__((used)) static void FUNC_10(void *VAR_1, struct resampler_data *VAR_2)
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
         __m128 VAR_11, VAR_12, VAR_13, VAR_14;
         float *VAR_15 = ((void*)0);
         float *VAR_16 = ((void*)0);
         const float *VAR_17 = VAR_3->buffer_l + VAR_3->ptr;
         const float *VAR_18 = VAR_3->buffer_r + VAR_3->ptr;
         unsigned VAR_19 = VAR_3->taps;
         unsigned VAR_20 = VAR_3->time >> VAR_3->subphase_bits;

         if (VAR_3->window_type == VAR_0)
         {
            VAR_15 = VAR_3->phase_table + VAR_20 * VAR_19 * 2;
            VAR_16 = VAR_15 + VAR_19;
            VAR_14 = FUNC_6((float)
                  (VAR_3->time & VAR_3->subphase_mask) * VAR_3->subphase_mod);
         }
         else
         {
            VAR_15 = VAR_3->phase_table + VAR_20 * VAR_19;
         }

         VAR_12 = FUNC_7();
         VAR_13 = FUNC_7();

         for (VAR_10 = 0; VAR_10 < VAR_19; VAR_10 += 4)
         {
            __m128 VAR_21, VAR_22;
            __m128 VAR_23 = FUNC_3(VAR_17 + VAR_10);
            __m128 VAR_24 = FUNC_3(VAR_18 + VAR_10);

            if (VAR_3->window_type == VAR_0)
            {
               VAR_21 = FUNC_2(VAR_16 + VAR_10);
               VAR_22 = FUNC_1(FUNC_2((const float*)VAR_15 + VAR_10),
                     FUNC_5(VAR_21, VAR_14));
            }
            else
            {
               VAR_22 = FUNC_2((const float*)VAR_15 + VAR_10);
            }
            VAR_12 = FUNC_1(VAR_12, FUNC_5(VAR_23, VAR_22));
            VAR_13 = FUNC_1(VAR_13, FUNC_5(VAR_24, VAR_22));
         }






         VAR_11 = FUNC_1(FUNC_8(VAR_12, VAR_13,
                  FUNC_0(1, 0, 1, 0)),
               FUNC_8(VAR_12, VAR_13, FUNC_0(3, 2, 3, 2)));





         VAR_11 = FUNC_1(FUNC_8(VAR_11, VAR_11, FUNC_0(3, 3, 1, 1)), VAR_11);






         FUNC_9(VAR_7 + 0, VAR_11);


         FUNC_9(VAR_7 + 1, FUNC_4(VAR_11, VAR_11));

         VAR_7 += 2;
         VAR_9++;
         VAR_3->time += VAR_5;
      }
   }

   VAR_2->output_frames = VAR_9;
}
