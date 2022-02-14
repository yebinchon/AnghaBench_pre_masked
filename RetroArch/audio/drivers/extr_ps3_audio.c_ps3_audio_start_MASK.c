
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int started; int audio_port; } ;
typedef TYPE_1__ ps3_audio_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(void *VAR_0, bool VAR_1)
{
   ps3_audio_t *VAR_2 = VAR_0;
   if (!VAR_2->started)
   {
      FUNC_0(VAR_2->audio_port);
      VAR_2->started = 1;
   }
   return 1;
}
