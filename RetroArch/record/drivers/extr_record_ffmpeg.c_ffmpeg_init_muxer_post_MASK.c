
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {TYPE_9__* ctx; TYPE_7__* astream; TYPE_7__* vstream; } ;
struct TYPE_14__ {TYPE_4__* codec; int encoder; } ;
struct TYPE_13__ {scalar_t__ audio_enable; } ;
struct TYPE_12__ {TYPE_4__* codec; int encoder; } ;
struct TYPE_17__ {TYPE_5__ muxer; TYPE_3__ audio; TYPE_2__ config; TYPE_1__ video; } ;
typedef TYPE_6__ ffmpeg_t ;
struct TYPE_19__ {int metadata; } ;
struct TYPE_18__ {TYPE_4__* codec; int time_base; int sample_aspect_ratio; } ;
struct TYPE_15__ {int time_base; int sample_aspect_ratio; } ;
typedef TYPE_7__ AVStream ;


 int FUNC_0 (int *,char*,char*,int ) ;
 TYPE_7__* FUNC_1 (TYPE_9__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_9__*,int *) ;

__attribute__((used)) static bool FUNC_3(ffmpeg_t *VAR_0)
{
   AVStream *VAR_1 = FUNC_1(VAR_0->muxer.ctx,
         VAR_0->video.encoder);

   VAR_1->codec = VAR_0->video.codec;
   VAR_1->time_base = VAR_1->codec->time_base;
   VAR_0->muxer.vstream = VAR_1;
   VAR_0->muxer.vstream->sample_aspect_ratio =
      VAR_0->video.codec->sample_aspect_ratio;

   if (VAR_0->config.audio_enable)
   {
      VAR_1 = FUNC_1(VAR_0->muxer.ctx,
            VAR_0->audio.encoder);
      VAR_1->codec = VAR_0->audio.codec;
      VAR_1->time_base = VAR_1->codec->time_base;
      VAR_0->muxer.astream = VAR_1;
   }

   FUNC_0(&VAR_0->muxer.ctx->metadata, "title",
         "RetroArch Video Dump", 0);

   return FUNC_2(VAR_0->muxer.ctx, ((void*)0)) >= 0;
}
