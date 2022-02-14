
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct record_audio_data {size_t frames; void* data; int member_0; } ;
typedef int int16_t ;
struct TYPE_11__ {int ctx; } ;
struct TYPE_10__ {int channels; } ;
struct TYPE_12__ {TYPE_2__ muxer; TYPE_1__ params; int audio_fifo; } ;
typedef TYPE_3__ ffmpeg_t ;
struct TYPE_13__ {int size; } ;
typedef TYPE_4__ AVPacket ;


 scalar_t__ FUNC_0 (int ,TYPE_4__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_4__*,int) ;
 int FUNC_2 (TYPE_3__*,struct record_audio_data*,int) ;
 int FUNC_3 (int ,void*,size_t) ;
 size_t FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(ffmpeg_t *VAR_0, void *VAR_1,
      size_t VAR_2)
{
   size_t VAR_3 = FUNC_4(VAR_0->audio_fifo);

   if (VAR_3)
   {
      struct record_audio_data VAR_4 = {0};

      FUNC_3(VAR_0->audio_fifo, VAR_1, VAR_3);

      VAR_4.frames = VAR_3 / (sizeof(int16_t) * VAR_0->params.channels);
      VAR_4.data = VAR_1;

      FUNC_2(VAR_0, &VAR_4, 0);
   }

   for (;;)
   {
      AVPacket VAR_5;
      if (!FUNC_1(VAR_0, &VAR_5, 1) || !VAR_5.size ||
            FUNC_0(VAR_0->muxer.ctx, &VAR_5) < 0)
         break;
   }
}
