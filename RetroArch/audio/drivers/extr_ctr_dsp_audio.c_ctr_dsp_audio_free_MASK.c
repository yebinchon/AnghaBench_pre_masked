
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data_pcm16; } ;
struct TYPE_5__ {TYPE_1__ dsp_buf; int channel; } ;
typedef TYPE_2__ ctr_dsp_audio_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
   ctr_dsp_audio_t* VAR_1 = (ctr_dsp_audio_t*)VAR_0;
   FUNC_2(VAR_1->channel);
   FUNC_1(VAR_1->dsp_buf.data_pcm16);
   FUNC_0(VAR_1);
   FUNC_3();
}
