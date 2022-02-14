
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int position; } ;
struct TYPE_13__ {TYPE_3__ wav; } ;
struct TYPE_14__ {TYPE_4__ types; int type; TYPE_6__* sound; int (* stop_cb ) (TYPE_6__*,int ) ;scalar_t__ repeat; } ;
typedef TYPE_5__ audio_mixer_voice_t ;
struct TYPE_10__ {int frames; float* pcm; } ;
struct TYPE_11__ {TYPE_1__ wav; } ;
struct TYPE_15__ {TYPE_2__ types; } ;
typedef TYPE_6__ audio_mixer_sound_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_6__*,int ) ;
 int FUNC_1 (TYPE_6__*,int ) ;

__attribute__((used)) static void FUNC_2(float* VAR_3, size_t VAR_4,
      audio_mixer_voice_t* VAR_5,
      float VAR_6)
{
   int VAR_7;
   unsigned VAR_8 = (unsigned)(VAR_4 * 2);
   const audio_mixer_sound_t* VAR_9 = VAR_5->sound;
   unsigned VAR_10 = VAR_9->types.wav.frames
      * 2 - VAR_5->types.wav.position;
   const float* VAR_11 = VAR_9->types.wav.pcm +
      VAR_5->types.wav.position;

again:
   if (VAR_10 < VAR_8)
   {
      for (VAR_7 = VAR_10; VAR_7 != 0; VAR_7--)
         *VAR_3++ += *VAR_11++ * VAR_6;

      if (VAR_5->repeat)
      {
         if (VAR_5->stop_cb)
            VAR_5->stop_cb(VAR_5->sound, VAR_1);

         VAR_8 -= VAR_10;
         VAR_10 = VAR_9->types.wav.frames * 2;
         VAR_11 = VAR_9->types.wav.pcm;
         VAR_5->types.wav.position = 0;
         goto again;
      }

      if (VAR_5->stop_cb)
         VAR_5->stop_cb(VAR_5->sound, VAR_0);

      VAR_5->type = VAR_2;
   }
   else
   {
      for (VAR_7 = VAR_8; VAR_7 != 0; VAR_7--)
         *VAR_3++ += *VAR_11++ * VAR_6;

      VAR_5->types.wav.position += VAR_8;
   }
}
