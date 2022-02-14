
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int type; int repeat; float volume; int stop_cb; TYPE_2__* sound; } ;
typedef TYPE_1__ audio_mixer_voice_t ;
typedef int audio_mixer_stop_cb_t ;
struct TYPE_17__ {int type; } ;
typedef TYPE_2__ audio_mixer_sound_t ;


 unsigned int VAR_0 ;






 int FUNC_0 (TYPE_2__*,TYPE_1__*,int,float,int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int,float,int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,int,float,int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,int,float,int ) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*,int,float,int ) ;
 TYPE_1__* VAR_1 ;

audio_mixer_voice_t* FUNC_5(audio_mixer_sound_t* VAR_2, bool VAR_3,
      float VAR_4, audio_mixer_stop_cb_t VAR_5)
{
   unsigned VAR_6;
   bool VAR_7 = 0;
   audio_mixer_voice_t* VAR_8 = VAR_1;

   if (!VAR_2)
      return ((void*)0);

   for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++, VAR_8++)
   {
      if (VAR_8->type != 130)
         continue;

      switch (VAR_2->type)
      {
         case 128:
            VAR_7 = FUNC_4(VAR_2, VAR_8, VAR_3, VAR_4, VAR_5);
            break;
         case 129:



            break;
         case 132:



            break;
         case 133:



            break;
         case 131:



            break;
         case 130:
            break;
      }

      break;
   }

   if (VAR_7)
   {
      VAR_8->type = VAR_2->type;
      VAR_8->repeat = VAR_3;
      VAR_8->volume = VAR_4;
      VAR_8->sound = VAR_2;
      VAR_8->stop_cb = VAR_5;
   }
   else
      VAR_8 = ((void*)0);

   return VAR_8;
}
