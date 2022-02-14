
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int DAC_OutputBuffer; int DAC_LFSRUnmask_TriangleAmplitude; int DAC_WaveGeneration; int DAC_Trigger; } ;
typedef TYPE_1__ DAC_InitTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_0(DAC_InitTypeDef* VAR_4)
{


  VAR_4->DAC_Trigger = VAR_2;


  VAR_4->DAC_WaveGeneration = VAR_3;


  VAR_4->DAC_LFSRUnmask_TriangleAmplitude = VAR_0;


  VAR_4->DAC_OutputBuffer = VAR_1;
}
