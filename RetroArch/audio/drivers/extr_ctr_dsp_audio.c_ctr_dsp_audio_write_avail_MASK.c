
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t pos; int channel; } ;
typedef TYPE_1__ ctr_dsp_audio_t ;


 size_t VAR_0 ;
 size_t FUNC_0 (int ) ;

__attribute__((used)) static size_t FUNC_1(void *VAR_1)
{
   ctr_dsp_audio_t* VAR_2 = (ctr_dsp_audio_t*)VAR_1;

   return (FUNC_0(VAR_2->channel) - VAR_2->pos) & VAR_0;
}
