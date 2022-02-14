
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_6__ {int frames_in_buffer; int planar_buf_frames; int sample_size; scalar_t__ buffer; scalar_t__ planar_buf; scalar_t__ use_float; int is_planar; } ;
struct TYPE_5__ {int channels; } ;
struct TYPE_7__ {TYPE_2__ audio; TYPE_1__ params; } ;
typedef TYPE_3__ ffmpeg_t ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (float*,float const*,int) ;
 int FUNC_2 (int *,int const*,int) ;

__attribute__((used)) static void FUNC_3(ffmpeg_t *VAR_0)
{
   if (!VAR_0->audio.is_planar)
      return;

   if (VAR_0->audio.frames_in_buffer > VAR_0->audio.planar_buf_frames)
   {
      VAR_0->audio.planar_buf = FUNC_0(VAR_0->audio.planar_buf,
            VAR_0->audio.frames_in_buffer * VAR_0->params.channels *
            VAR_0->audio.sample_size);
      if (!VAR_0->audio.planar_buf)
         return;

      VAR_0->audio.planar_buf_frames = VAR_0->audio.frames_in_buffer;
   }

   if (VAR_0->audio.use_float)
      FUNC_1((float*)VAR_0->audio.planar_buf,
            (const float*)VAR_0->audio.buffer,
            VAR_0->audio.frames_in_buffer);
   else
      FUNC_2((int16_t*)VAR_0->audio.planar_buf,
            (const int16_t*)VAR_0->audio.buffer,
            VAR_0->audio.frames_in_buffer);
}
