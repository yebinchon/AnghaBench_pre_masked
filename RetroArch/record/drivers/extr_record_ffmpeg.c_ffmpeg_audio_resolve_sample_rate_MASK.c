
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct record_params {scalar_t__ samplerate; } ;
struct ff_config_param {int sample_rate; } ;
struct TYPE_5__ {struct record_params params; struct ff_config_param config; } ;
typedef TYPE_1__ ffmpeg_t ;
struct TYPE_6__ {int* supported_samplerates; } ;
typedef TYPE_2__ AVCodec ;


 int FUNC_0 (char*,int) ;

__attribute__((used)) static void FUNC_1(ffmpeg_t *VAR_0,
      const AVCodec *VAR_1)
{
   struct ff_config_param *VAR_2 = &VAR_0->config;
   struct record_params *VAR_3 = &VAR_0->params;


   if (VAR_1->supported_samplerates && !VAR_2->sample_rate)
   {
      unsigned VAR_4;
      int VAR_5 = (int)VAR_3->samplerate;


      int VAR_6 = VAR_1->supported_samplerates[0];
      int VAR_7 = VAR_6 - VAR_5;

      for (VAR_4 = 1; VAR_1->supported_samplerates[VAR_4]; VAR_4++)
      {
         bool VAR_8;
         int VAR_9 = VAR_1->supported_samplerates[VAR_4] - VAR_5;

         if (VAR_7 < 0)
            VAR_8 = (VAR_9 > VAR_7);
         else
            VAR_8 = ((VAR_9 >= 0) && (VAR_9 < VAR_7));

         if (VAR_8)
         {
            VAR_6 = VAR_1->supported_samplerates[VAR_4];
            VAR_7 = VAR_9;
         }
      }

      VAR_2->sample_rate = VAR_6;
      FUNC_0("[FFmpeg]: Using output sampling rate: %d.\n", VAR_6);
   }
}
