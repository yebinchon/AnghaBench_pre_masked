
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct resampler_data {float const* data_in; float* data_out; int input_frames; int output_frames; int ratio; } ;
struct TYPE_7__ {int numsamples; int bitspersample; unsigned int numchannels; double samplerate; int subchunk2size; scalar_t__ samples; } ;
typedef TYPE_1__ rwav_t ;
typedef int int64_t ;
typedef void* int16_t ;
struct TYPE_8__ {int sample_rate; void** upsample_buf; int resample; double ratio; float* float_buf; float* float_resample_buf; void** resample_buf; int resample_len; scalar_t__ resampler_data; TYPE_4__* resampler; TYPE_1__* rwav; int len; void* buf; } ;
typedef TYPE_2__ audio_chunk_t ;
struct TYPE_9__ {int (* process ) (scalar_t__,struct resampler_data*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (void**,float*,int) ;
 int FUNC_3 (float*,void**,int,double) ;
 int FUNC_4 (char const*,void**,int *) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int,int) ;
 int FUNC_7 (void**,scalar_t__,int ) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (scalar_t__*,TYPE_4__**,int *,int ,double) ;
 scalar_t__ FUNC_10 (TYPE_1__*,void*,int ) ;
 int FUNC_11 (scalar_t__,struct resampler_data*) ;

audio_chunk_t* FUNC_12(const char *VAR_2, int VAR_3)
{
   int VAR_4;
   int64_t VAR_5 = 0;
   void *VAR_6 = ((void*)0);
   audio_chunk_t *VAR_7 = (audio_chunk_t*)FUNC_1(1, sizeof(*VAR_7));

   if (!VAR_7)
      return ((void*)0);

   if (!FUNC_4(VAR_2, &VAR_6, &VAR_5))
   {
      FUNC_8("Could not open WAV file for reading.\n");
      goto error;
   }

   VAR_7->sample_rate = VAR_3;
   VAR_7->buf = VAR_6;
   VAR_7->len = VAR_5;
   VAR_7->rwav = (rwav_t*)FUNC_5(sizeof(rwav_t));

   if (FUNC_10(VAR_7->rwav, VAR_7->buf, VAR_7->len) == VAR_1)
   {
      FUNC_8("error: could not load WAV file\n");
      goto error;
   }



   VAR_7->upsample_buf = (int16_t*)FUNC_6(128,
         VAR_7->rwav->numsamples * 2 * sizeof(int16_t));

   VAR_4 = VAR_7->rwav->bitspersample / 8;

   if (VAR_4 == 1)
   {
      unsigned VAR_8;

     for (VAR_8 = 0; VAR_8 < VAR_7->rwav->numsamples; VAR_8++)
     {
        uint8_t *VAR_9 = (
              (uint8_t*)VAR_7->rwav->samples) +
           (VAR_8 * VAR_7->rwav->numchannels);

        VAR_7->upsample_buf[VAR_8 * 2] = (int16_t)((VAR_9[0] - 128) << 8);

        if (VAR_7->rwav->numchannels == 1)
           VAR_7->upsample_buf[(VAR_8 * 2) + 1] = (int16_t)((VAR_9[0] - 128) << 8);
        else if (VAR_7->rwav->numchannels == 2)
           VAR_7->upsample_buf[(VAR_8 * 2) + 1] = (int16_t)((VAR_9[1] - 128) << 8);
     }
   }
   else if (VAR_4 == 2)
   {
      if (VAR_7->rwav->numchannels == 1)
      {
         unsigned VAR_10;

         for (VAR_10 = 0; VAR_10 < VAR_7->rwav->numsamples; VAR_10++)
         {
            int16_t VAR_11 = ((int16_t*)VAR_7->rwav->samples)[VAR_10];

            VAR_7->upsample_buf[VAR_10 * 2] = VAR_11;
            VAR_7->upsample_buf[(VAR_10 * 2) + 1] = VAR_11;
         }
      }
      else if (VAR_7->rwav->numchannels == 2)
         FUNC_7(VAR_7->upsample_buf, VAR_7->rwav->samples, VAR_7->rwav->subchunk2size);
   }
   else if (VAR_4 != 2)
   {

      FUNC_8("error: we don't support a sample size of %d\n", VAR_4);
      goto error;
   }

   if (VAR_3 != (int)VAR_7->rwav->samplerate)
   {
      VAR_7->resample = 1;
      VAR_7->ratio = (double)VAR_3 / VAR_7->rwav->samplerate;

      FUNC_9(&VAR_7->resampler_data,
            &VAR_7->resampler,
            ((void*)0),
            VAR_0,
            VAR_7->ratio);

      if (VAR_7->resampler && VAR_7->resampler_data)
      {
         struct resampler_data VAR_12;

         VAR_7->float_buf = (float*)FUNC_6(128, VAR_7->rwav->numsamples * 2 * VAR_7->ratio * sizeof(float));


         VAR_7->float_resample_buf = (float*)FUNC_6(128, VAR_7->rwav->numsamples * 3 * VAR_7->ratio * sizeof(float));

         FUNC_3(VAR_7->float_buf, VAR_7->upsample_buf, VAR_7->rwav->numsamples * 2, 1.0);

         VAR_12.data_in = (const float*)VAR_7->float_buf;
         VAR_12.data_out = VAR_7->float_resample_buf;


         VAR_12.input_frames = VAR_7->rwav->numsamples;
         VAR_12.output_frames = 0;
         VAR_12.ratio = VAR_7->ratio;

         VAR_7->resampler->process(VAR_7->resampler_data, &VAR_12);


         VAR_7->resample_buf = (int16_t*)FUNC_6(128, VAR_12.output_frames * 2 * sizeof(int16_t));
         VAR_7->resample_len = VAR_12.output_frames;
         FUNC_2(VAR_7->resample_buf, VAR_7->float_resample_buf, VAR_12.output_frames * 2);
      }
   }

   return VAR_7;

error:
   FUNC_0(VAR_7);
   return ((void*)0);
}
