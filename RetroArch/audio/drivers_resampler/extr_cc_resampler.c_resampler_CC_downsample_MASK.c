
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resampler_data {int input_frames; double ratio; int output_frames; scalar_t__ data_out; scalar_t__ data_in; } ;
struct TYPE_2__ {double distance; int * buffer; } ;
typedef TYPE_1__ rarch_CC_resampler_t ;
typedef int audio_frame_float_t ;
typedef int __m64 ;
typedef int __m128 ;


 int FUNC_0 (int,int,int,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (float*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (double,double,double,double) ;
 int FUNC_8 (double) ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (float*,int ) ;
 int FUNC_13 (int ,int ) ;

__attribute__((used)) static void FUNC_14(void *VAR_0, struct resampler_data *VAR_1)
{
   rarch_CC_resampler_t *VAR_2 = (rarch_CC_resampler_t*)VAR_0;

   audio_frame_float_t *VAR_3 = (audio_frame_float_t*)VAR_1->data_in;
   audio_frame_float_t *VAR_4 = (audio_frame_float_t*)(VAR_3 + VAR_1->input_frames);
   audio_frame_float_t *VAR_5 = (audio_frame_float_t*)VAR_1->data_out;
   float VAR_6 = 1.0 / VAR_1->ratio;
   float VAR_7 = VAR_1->ratio;

   __m128 VAR_8 = FUNC_3((float*)&VAR_2->buffer[0]);
   __m128 VAR_9 = FUNC_3((float*)&VAR_2->buffer[2]);

   while (VAR_3 != VAR_4)
   {
      __m128 VAR_10, VAR_11;
      __m128 VAR_12;
      __m128 VAR_13;
      __m128 VAR_14;
      __m128 VAR_15 =
         FUNC_6(FUNC_8(VAR_6), FUNC_7(3.0, 2.0, 1.0, 0.0));
      __m128 VAR_16 = FUNC_13(FUNC_8(VAR_2->distance), VAR_15);

      __m128 VAR_17 = FUNC_1(VAR_16 , FUNC_8(0.5));
      __m128 VAR_18 = FUNC_13(VAR_16 , FUNC_8(0.5));

      __m128 VAR_19 = FUNC_8(VAR_7);

      VAR_17 = FUNC_6(VAR_17, VAR_19);
      VAR_18 = FUNC_6(VAR_18, VAR_19);

      (void)VAR_10;
      (void)VAR_11;
      VAR_17 = FUNC_5(VAR_17, FUNC_8( 0.5));
      VAR_18 = FUNC_5(VAR_18, FUNC_8( 0.5));
      VAR_17 = FUNC_4(VAR_17, FUNC_8(-0.5));
      VAR_18 = FUNC_4(VAR_18, FUNC_8(-0.5));
      VAR_16 = FUNC_13(VAR_17, VAR_18);

      VAR_12 =
         FUNC_10(VAR_16,VAR_16,FUNC_0(1, 1, 0, 0));
      VAR_13 =
         FUNC_10(VAR_16,VAR_16,FUNC_0(3, 3, 2, 2));

      VAR_14 = FUNC_2(FUNC_9(),(__m64*)VAR_3);
      VAR_14 = FUNC_10(VAR_14,VAR_14,FUNC_0(1, 0, 1, 0));

      VAR_8 =
         FUNC_1(VAR_8, FUNC_6(VAR_14, VAR_12));
      VAR_9 =
         FUNC_1(VAR_9, FUNC_6(VAR_14, VAR_13));

      VAR_2->distance++;
      VAR_3++;

      if (VAR_2->distance > (VAR_6 + 0.5))
      {
         FUNC_11((__m64*)VAR_5, VAR_8);
         VAR_8 =
            FUNC_10(VAR_8,VAR_9,FUNC_0(1, 0, 3, 2));
         VAR_9 =
            FUNC_10(VAR_9,FUNC_9(),FUNC_0(1, 0, 3, 2));

         VAR_2->distance -= VAR_6;
         VAR_5++;
      }
   }

   FUNC_12((float*)&VAR_2->buffer[0], VAR_8);
   FUNC_12((float*)&VAR_2->buffer[2], VAR_9);

   VAR_1->output_frames = VAR_5 - (audio_frame_float_t*)VAR_1->data_out;
}
