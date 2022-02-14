
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
struct record_audio_data {size_t frames; scalar_t__ data; } ;
struct TYPE_15__ {int ctx; } ;
struct TYPE_14__ {size_t frames_in_buffer; size_t sample_size; size_t frame_cnt; TYPE_2__* codec; scalar_t__ buffer; } ;
struct TYPE_12__ {size_t channels; } ;
struct TYPE_16__ {TYPE_4__ muxer; TYPE_3__ audio; TYPE_1__ params; } ;
typedef TYPE_5__ ffmpeg_t ;
struct TYPE_17__ {scalar_t__ size; } ;
struct TYPE_13__ {size_t frame_size; } ;
typedef TYPE_6__ AVPacket ;


 scalar_t__ FUNC_0 (int ,TYPE_6__*) ;
 int FUNC_1 (TYPE_5__*,TYPE_6__*,int) ;
 int FUNC_2 (TYPE_5__*,struct record_audio_data*) ;
 int FUNC_3 (scalar_t__,int const*,size_t) ;

__attribute__((used)) static bool FUNC_4(ffmpeg_t *VAR_0,
      struct record_audio_data *VAR_1, bool VAR_2)
{
   size_t VAR_3 = 0;

   FUNC_2(VAR_0, VAR_1);

   while (VAR_3 < VAR_1->frames)
   {
      AVPacket VAR_4;
      size_t VAR_5 = VAR_0->audio.codec->frame_size -
         VAR_0->audio.frames_in_buffer;
      size_t VAR_6 = VAR_1->frames - VAR_3;
      size_t VAR_7 = VAR_6 > VAR_5 ? VAR_5 : VAR_6;
      size_t VAR_8 = VAR_7 *
         VAR_0->params.channels * VAR_0->audio.sample_size;

      size_t VAR_9 = VAR_0->audio.frames_in_buffer *
         VAR_0->params.channels * VAR_0->audio.sample_size;
      size_t VAR_10 = VAR_3 *
         VAR_0->params.channels * VAR_0->audio.sample_size;

      FUNC_3(VAR_0->audio.buffer + VAR_9,
            (const uint8_t*)VAR_1->data + VAR_10,
            VAR_8);

      VAR_3 += VAR_7;
      VAR_0->audio.frames_in_buffer += VAR_7;

      if ((VAR_0->audio.frames_in_buffer
               < (size_t)VAR_0->audio.codec->frame_size) && VAR_2)
         break;

      if (!FUNC_1(VAR_0, &VAR_4, 0))
         return 0;

      VAR_0->audio.frame_cnt += VAR_0->audio.frames_in_buffer;
      VAR_0->audio.frames_in_buffer = 0;

      if (VAR_4.size)
      {
         if (FUNC_0(VAR_0->muxer.ctx, &VAR_4) < 0)
            return 0;
      }
   }

   return 1;
}
