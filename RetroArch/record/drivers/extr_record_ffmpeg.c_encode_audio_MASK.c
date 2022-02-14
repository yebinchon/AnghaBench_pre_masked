
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_11__ ;


typedef int uint8_t ;
typedef scalar_t__ int64_t ;
struct TYPE_20__ {TYPE_2__* astream; } ;
struct TYPE_18__ {TYPE_11__* codec; int * buffer; scalar_t__ planar_buf; scalar_t__ is_planar; int frames_in_buffer; int frame_cnt; scalar_t__ outbuf_size; int outbuf; } ;
struct TYPE_21__ {TYPE_3__ muxer; TYPE_1__ audio; } ;
typedef TYPE_4__ ffmpeg_t ;
struct TYPE_23__ {int pts; int channel_layout; int format; int nb_samples; } ;
struct TYPE_22__ {scalar_t__ pts; scalar_t__ dts; int stream_index; scalar_t__ size; int data; } ;
struct TYPE_19__ {int index; int time_base; } ;
struct TYPE_17__ {int time_base; int sample_fmt; int channels; int channel_layout; } ;
typedef TYPE_5__ AVPacket ;
typedef TYPE_6__ AVFrame ;


 void* VAR_0 ;
 TYPE_6__* FUNC_0 () ;
 int FUNC_1 (TYPE_6__**) ;
 int FUNC_2 (TYPE_5__*) ;
 void* FUNC_3 (scalar_t__,int ,int ) ;
 int FUNC_4 (int *,int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (TYPE_11__*,TYPE_5__*,TYPE_6__*,int*) ;
 int FUNC_6 (TYPE_6__*,int ,int ,int *,int,int ) ;
 int FUNC_7 (TYPE_4__*) ;

__attribute__((used)) static bool FUNC_8(ffmpeg_t *VAR_1, AVPacket *VAR_2, bool VAR_3)
{
   AVFrame *VAR_4;
   int VAR_5;
   int VAR_6 = 0;

   FUNC_2(VAR_2);
   VAR_2->data = VAR_1->audio.outbuf;
   VAR_2->size = VAR_1->audio.outbuf_size;

   VAR_4 = FUNC_0();
   if (!VAR_4)
      return 0;

   VAR_4->nb_samples = VAR_1->audio.frames_in_buffer;
   VAR_4->format = VAR_1->audio.codec->sample_fmt;
   VAR_4->channel_layout = VAR_1->audio.codec->channel_layout;
   VAR_4->pts = VAR_1->audio.frame_cnt;

   FUNC_7(VAR_1);

   VAR_5 = FUNC_4(((void*)0),
         VAR_1->audio.codec->channels,
         VAR_1->audio.frames_in_buffer,
         VAR_1->audio.codec->sample_fmt, 0);

   FUNC_6(VAR_4, VAR_1->audio.codec->channels,
         VAR_1->audio.codec->sample_fmt,
         VAR_1->audio.is_planar ? (uint8_t*)VAR_1->audio.planar_buf :
         VAR_1->audio.buffer,
         VAR_5, 0);

   if (FUNC_5(VAR_1->audio.codec,
            VAR_2, VAR_3 ? ((void*)0) : VAR_4, &VAR_6) < 0)
   {
      FUNC_1(&VAR_4);
      return 0;
   }

   if (!VAR_6)
   {
      VAR_2->size = 0;
      VAR_2->pts = VAR_0;
      VAR_2->dts = VAR_0;
      FUNC_1(&VAR_4);
      return 1;
   }

   if (VAR_2->pts != (int64_t)VAR_0)
   {
      VAR_2->pts = FUNC_3(VAR_2->pts,
            VAR_1->audio.codec->time_base,
            VAR_1->muxer.astream->time_base);
   }

   if (VAR_2->dts != (int64_t)VAR_0)
   {
      VAR_2->dts = FUNC_3(VAR_2->dts,
            VAR_1->audio.codec->time_base,
            VAR_1->muxer.astream->time_base);
   }

   FUNC_1(&VAR_4);

   VAR_2->stream_index = VAR_1->muxer.astream->index;
   return 1;
}
