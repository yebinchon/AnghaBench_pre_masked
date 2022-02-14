
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int numsamples; scalar_t__ samplerate; } ;
typedef TYPE_3__ rwav_t ;
typedef int int32_t ;
typedef enum rwav_state { ____Placeholder_rwav_state } rwav_state ;
struct TYPE_9__ {unsigned int frames; float* pcm; } ;
struct TYPE_10__ {TYPE_1__ wav; } ;
struct TYPE_12__ {TYPE_2__ types; int type; } ;
typedef TYPE_4__ audio_mixer_sound_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (float*,size_t,scalar_t__,float**,size_t*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,void*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (TYPE_3__*,float**,size_t) ;

audio_mixer_sound_t* FUNC_6(void *VAR_3, int32_t VAR_4)
{

   rwav_t VAR_5;

   float* VAR_6 = ((void*)0);
   size_t VAR_7 = 0;

   audio_mixer_sound_t* VAR_8 = ((void*)0);
   enum rwav_state VAR_9 = FUNC_4(&VAR_5, VAR_3, VAR_4);

   if (VAR_9 != VAR_1)
      return ((void*)0);

   VAR_7 = VAR_5.numsamples * 2;

   if (!FUNC_5(&VAR_5, &VAR_6, VAR_7))
      return ((void*)0);

   if (VAR_5.samplerate != VAR_2)
   {
      float* VAR_10 = ((void*)0);

      if (!FUNC_2(VAR_6, VAR_7,
               VAR_5.samplerate, &VAR_10, &VAR_7))
         return ((void*)0);

      FUNC_1((void*)VAR_6);
      VAR_6 = VAR_10;
   }

   VAR_8 = (audio_mixer_sound_t*)FUNC_0(1, sizeof(*VAR_8));

   if (!VAR_8)
   {
      FUNC_1((void*)VAR_6);
      return ((void*)0);
   }

   VAR_8->type = VAR_0;
   VAR_8->types.wav.frames = (unsigned)(VAR_7 / 2);
   VAR_8->types.wav.pcm = VAR_6;

   FUNC_3(&VAR_5);

   return VAR_8;
}
