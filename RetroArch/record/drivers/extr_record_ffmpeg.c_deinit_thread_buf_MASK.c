
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * video_fifo; int * attr_fifo; int * audio_fifo; } ;
typedef TYPE_1__ ffmpeg_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(ffmpeg_t *VAR_0)
{
   if (VAR_0->audio_fifo)
   {
      FUNC_0(VAR_0->audio_fifo);
      VAR_0->audio_fifo = ((void*)0);
   }

   if (VAR_0->attr_fifo)
   {
      FUNC_0(VAR_0->attr_fifo);
      VAR_0->attr_fifo = ((void*)0);
   }

   if (VAR_0->video_fifo)
   {
      FUNC_0(VAR_0->video_fifo);
      VAR_0->video_fifo = ((void*)0);
   }
}
