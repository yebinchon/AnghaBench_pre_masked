
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; int * sound; int (* stop_cb ) (int *,int ) ;} ;
typedef TYPE_1__ audio_mixer_voice_t ;
typedef int (* audio_mixer_stop_cb_t ) (int *,int ) ;
typedef int audio_mixer_sound_t ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(audio_mixer_voice_t* VAR_2)
{
   audio_mixer_stop_cb_t VAR_3 = ((void*)0);
   audio_mixer_sound_t* VAR_4 = ((void*)0);

   if (VAR_2)
   {
      VAR_3 = VAR_2->stop_cb;
      VAR_4 = VAR_2->sound;

      VAR_2->type = VAR_1;

      if (VAR_3)
         VAR_3(VAR_4, VAR_0);
   }
}
