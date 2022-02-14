
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ running; } ;
typedef TYPE_1__ ps2_audio_t ;


 size_t VAR_0 ;

__attribute__((used)) static size_t FUNC_0(void *VAR_1)
{
   ps2_audio_t* VAR_2 = (ps2_audio_t*)VAR_1;

   if (VAR_2 && VAR_2->running)
      return VAR_0;

   return 0;
}
