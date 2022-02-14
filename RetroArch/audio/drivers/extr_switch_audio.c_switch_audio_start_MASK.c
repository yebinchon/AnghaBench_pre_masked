
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int is_paused; } ;
typedef TYPE_1__ switch_audio_t ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static bool FUNC_1(void *VAR_0, bool VAR_1)
{
   switch_audio_t *VAR_2 = (switch_audio_t*) VAR_0;
   if (!VAR_2)
      return 0;



   if (VAR_2->is_paused)
    if (FUNC_0(VAR_2) != 0)
     return 0;

   VAR_2->is_paused = 0;

   return 1;
}
