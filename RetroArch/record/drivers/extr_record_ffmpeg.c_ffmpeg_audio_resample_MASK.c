
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct resampler_data {float const* data_in; float* data_out; int input_frames; int ratio; int output_frames; int member_0; } ;
struct record_audio_data {int frames; float* data; } ;
typedef float int16_t ;
struct TYPE_8__ {int float_conv_frames; float* float_conv; int resample_out_frames; int ratio; float* resample_out; int fixed_conv_frames; float* fixed_conv; scalar_t__ use_float; int resampler_data; TYPE_1__* resampler; } ;
struct TYPE_7__ {int channels; } ;
struct TYPE_9__ {TYPE_3__ audio; TYPE_2__ params; } ;
typedef TYPE_4__ ffmpeg_t ;
struct TYPE_6__ {int (* process ) (int ,struct resampler_data*) ;} ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (float*,int) ;
 int FUNC_2 (float*,float*,int) ;
 int FUNC_3 (float*,float const*,int,double) ;
 int FUNC_4 (int ,struct resampler_data*) ;

__attribute__((used)) static void FUNC_5(ffmpeg_t *VAR_0,
      struct record_audio_data *VAR_1)
{
   if (!VAR_0->audio.use_float && !VAR_0->audio.resampler)
      return;

   if (VAR_1->frames > VAR_0->audio.float_conv_frames)
   {
      VAR_0->audio.float_conv = (float*)FUNC_1(VAR_0->audio.float_conv,
            VAR_1->frames * VAR_0->params.channels * sizeof(float));
      if (!VAR_0->audio.float_conv)
         return;

      VAR_0->audio.float_conv_frames = VAR_1->frames;


      VAR_0->audio.resample_out_frames = VAR_1->frames * VAR_0->audio.ratio + 16;

      VAR_0->audio.resample_out = (float*)FUNC_1(VAR_0->audio.resample_out,
            VAR_0->audio.resample_out_frames *
            VAR_0->params.channels * sizeof(float));
      if (!VAR_0->audio.resample_out)
         return;

      VAR_0->audio.fixed_conv_frames = FUNC_0(VAR_0->audio.resample_out_frames,
            VAR_0->audio.float_conv_frames);
      VAR_0->audio.fixed_conv = (int16_t*)FUNC_1(VAR_0->audio.fixed_conv,
            VAR_0->audio.fixed_conv_frames * VAR_0->params.channels * sizeof(int16_t));
      if (!VAR_0->audio.fixed_conv)
         return;
   }

   if (VAR_0->audio.use_float || VAR_0->audio.resampler)
   {
      FUNC_3(VAR_0->audio.float_conv,
            (const int16_t*)VAR_1->data, VAR_1->frames * VAR_0->params.channels, 1.0);
      VAR_1->data = VAR_0->audio.float_conv;
   }

   if (VAR_0->audio.resampler)
   {

      struct resampler_data VAR_2 = {0};

      VAR_2.data_in = (const float*)VAR_1->data;
      VAR_2.data_out = VAR_0->audio.resample_out;
      VAR_2.input_frames = VAR_1->frames;
      VAR_2.ratio = VAR_0->audio.ratio;

      VAR_0->audio.resampler->process(VAR_0->audio.resampler_data, &VAR_2);

      VAR_1->data = VAR_0->audio.resample_out;
      VAR_1->frames = VAR_2.output_frames;

      if (!VAR_0->audio.use_float)
      {
         FUNC_2(VAR_0->audio.fixed_conv,
               VAR_0->audio.resample_out,
               VAR_1->frames * VAR_0->params.channels);
         VAR_1->data = VAR_0->audio.fixed_conv;
      }
   }
}
