
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int started; int audio_port; } ;
typedef TYPE_1__ ps3_audio_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(void *VAR_0)
{
   ps3_audio_t *VAR_1 = VAR_0;
   if (VAR_1->started)
   {
      FUNC_0(VAR_1->audio_port);
      VAR_1->started = 0;
   }
   return 1;
}
