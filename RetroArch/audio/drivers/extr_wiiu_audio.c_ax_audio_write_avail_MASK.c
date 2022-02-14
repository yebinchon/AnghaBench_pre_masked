
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t written; } ;
typedef TYPE_1__ ax_audio_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static size_t FUNC_0(void* VAR_2)
{
   ax_audio_t* VAR_3 = (ax_audio_t*)VAR_2;

   size_t VAR_4 = VAR_0 - VAR_3->written;

   return (VAR_4 < VAR_1 ? 0 : VAR_4);
}
