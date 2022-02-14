
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {float volume; int type; } ;
typedef TYPE_1__ audio_mixer_voice_t ;


 unsigned int VAR_0 ;






 int FUNC_0 (float*,size_t,TYPE_1__*,float) ;
 int FUNC_1 (float*,size_t,TYPE_1__*,float) ;
 int FUNC_2 (float*,size_t,TYPE_1__*,float) ;
 int FUNC_3 (float*,size_t,TYPE_1__*,float) ;
 int FUNC_4 (float*,size_t,TYPE_1__*,float) ;
 TYPE_1__* VAR_1 ;

void FUNC_5(float* VAR_2, size_t VAR_3, float VAR_4, bool VAR_5)
{
   unsigned VAR_6;
   size_t VAR_7 = 0;
   float* VAR_8 = ((void*)0);
   audio_mixer_voice_t* VAR_9 = VAR_1;

   for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++, VAR_9++)
   {
      float VAR_10 = (VAR_5) ? VAR_4 : VAR_9->volume;

      switch (VAR_9->type)
      {
         case 128:
            FUNC_4(VAR_2, VAR_3, VAR_9, VAR_10);
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
   }

   for (VAR_7 = 0, VAR_8 = VAR_2; VAR_7 < VAR_3; VAR_7++, VAR_8++)
   {
      if (*VAR_8 < -1.0f)
         *VAR_8 = -1.0f;
      else if (*VAR_8 > 1.0f)
         *VAR_8 = 1.0f;
   }
}
