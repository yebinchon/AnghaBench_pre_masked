
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_13__ {TYPE_2__* vstream; } ;
struct TYPE_11__ {TYPE_8__* codec; scalar_t__ outbuf_size; int outbuf; } ;
struct TYPE_14__ {TYPE_3__ muxer; TYPE_1__ video; } ;
typedef TYPE_4__ ffmpeg_t ;
struct TYPE_16__ {int time_base; } ;
struct TYPE_15__ {scalar_t__ pts; scalar_t__ dts; int stream_index; scalar_t__ size; int data; } ;
struct TYPE_12__ {int index; int time_base; } ;
typedef TYPE_5__ AVPacket ;
typedef int AVFrame ;


 void* VAR_0 ;
 int FUNC_0 (TYPE_5__*) ;
 void* FUNC_1 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_8__*,TYPE_5__*,int *,int*) ;

__attribute__((used)) static bool FUNC_3(ffmpeg_t *VAR_1, AVPacket *VAR_2, AVFrame *VAR_3)
{
   int VAR_4 = 0;

   FUNC_0(VAR_2);
   VAR_2->data = VAR_1->video.outbuf;
   VAR_2->size = VAR_1->video.outbuf_size;

   if (FUNC_2(VAR_1->video.codec, VAR_2, VAR_3, &VAR_4) < 0)
      return 0;

   if (!VAR_4)
   {
      VAR_2->size = 0;
      VAR_2->pts = VAR_0;
      VAR_2->dts = VAR_0;
      return 1;
   }

   if (VAR_2->pts != (int64_t)VAR_0)
   {
      VAR_2->pts = FUNC_1(VAR_2->pts, VAR_1->video.codec->time_base,
            VAR_1->muxer.vstream->time_base);
   }

   if (VAR_2->dts != (int64_t)VAR_0)
   {
      VAR_2->dts = FUNC_1(VAR_2->dts, VAR_1->video.codec->time_base,
            VAR_1->muxer.vstream->time_base);
   }

   VAR_2->stream_index = VAR_1->muxer.vstream->index;
   return 1;
}
