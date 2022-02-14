
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ff_audio_info {int use_float; int is_planar; int sample_size; TYPE_1__* codec; } ;
typedef int int16_t ;
struct TYPE_5__ {int sample_fmts; } ;
struct TYPE_4__ {void* sample_fmt; } ;
typedef TYPE_2__ AVCodec ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (void*,int ) ;

__attribute__((used)) static void FUNC_2(struct ff_audio_info *VAR_5,
      const AVCodec *VAR_6)
{
   VAR_5->codec->sample_fmt = VAR_2;

   if (FUNC_1(VAR_1, VAR_6->sample_fmts))
   {
      VAR_5->codec->sample_fmt = VAR_1;
      VAR_5->use_float = 1;
      VAR_5->is_planar = 1;
      FUNC_0("[FFmpeg]: Using sample format FLTP.\n");
   }
   else if (FUNC_1(VAR_0, VAR_6->sample_fmts))
   {
      VAR_5->codec->sample_fmt = VAR_0;
      VAR_5->use_float = 1;
      VAR_5->is_planar = 0;
      FUNC_0("[FFmpeg]: Using sample format FLT.\n");
   }
   else if (FUNC_1(VAR_4, VAR_6->sample_fmts))
   {
      VAR_5->codec->sample_fmt = VAR_4;
      VAR_5->use_float = 0;
      VAR_5->is_planar = 1;
      FUNC_0("[FFmpeg]: Using sample format S16P.\n");
   }
   else if (FUNC_1(VAR_3, VAR_6->sample_fmts))
   {
      VAR_5->codec->sample_fmt = VAR_3;
      VAR_5->use_float = 0;
      VAR_5->is_planar = 0;
      FUNC_0("[FFmpeg]: Using sample format S16.\n");
   }
   VAR_5->sample_size = VAR_5->use_float ? sizeof(float) : sizeof(int16_t);
}
