
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t playpos; size_t pos; } ;
typedef TYPE_1__ ctr_csnd_audio_t ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static size_t FUNC_1(void *VAR_1)
{
   ctr_csnd_audio_t* VAR_2 = (ctr_csnd_audio_t*)VAR_1;

   FUNC_0(VAR_2);
   return (VAR_2->playpos - VAR_2->pos) & VAR_0;
}
