
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resampler_data {int input_frames; double ratio; int output_frames; scalar_t__ data_out; scalar_t__ data_in; } ;
struct TYPE_2__ {int fraction; } ;
typedef TYPE_1__ rarch_nearest_resampler_t ;
typedef int audio_frame_float_t ;



__attribute__((used)) static void FUNC_0(
      void *VAR_0, struct resampler_data *VAR_1)
{
   rarch_nearest_resampler_t *VAR_2 = (rarch_nearest_resampler_t*)VAR_0;
   audio_frame_float_t *VAR_3 = (audio_frame_float_t*)VAR_1->data_in;
   audio_frame_float_t *VAR_4 = (audio_frame_float_t*)VAR_3 + VAR_1->input_frames;
   audio_frame_float_t *VAR_5 = (audio_frame_float_t*)VAR_1->data_out;
   float VAR_6 = 1.0 / VAR_1->ratio;

   while(VAR_3 != VAR_4)
   {
      while(VAR_2->fraction > 1)
      {
         *VAR_5++ = *VAR_3;
         VAR_2->fraction -= VAR_6;
      }
      VAR_2->fraction++;
      VAR_3++;
   }

   VAR_1->output_frames = (VAR_5 - (audio_frame_float_t*)VAR_1->data_out);
}
