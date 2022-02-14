
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ position; } ;
struct TYPE_6__ {TYPE_1__ wav; } ;
struct TYPE_7__ {TYPE_2__ types; } ;
typedef TYPE_3__ audio_mixer_voice_t ;
typedef int audio_mixer_stop_cb_t ;
typedef int audio_mixer_sound_t ;



__attribute__((used)) static bool FUNC_0(audio_mixer_sound_t* VAR_0,
      audio_mixer_voice_t* VAR_1, bool VAR_2, float VAR_3,
      audio_mixer_stop_cb_t VAR_4)
{
   VAR_1->types.wav.position = 0;
   return 1;
}
