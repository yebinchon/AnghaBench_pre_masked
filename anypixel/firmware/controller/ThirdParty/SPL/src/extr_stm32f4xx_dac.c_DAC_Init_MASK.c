
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int CR; } ;
struct TYPE_4__ {int DAC_Trigger; int DAC_WaveGeneration; int DAC_LFSRUnmask_TriangleAmplitude; int DAC_OutputBuffer; } ;
typedef TYPE_1__ DAC_InitTypeDef ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;

void FUNC_5(uint32_t VAR_2, DAC_InitTypeDef* VAR_3)
{
  uint32_t VAR_4 = 0, VAR_5 = 0;


  FUNC_4(FUNC_3(VAR_3->DAC_Trigger));
  FUNC_4(FUNC_0(VAR_3->DAC_WaveGeneration));
  FUNC_4(FUNC_1(VAR_3->DAC_LFSRUnmask_TriangleAmplitude));
  FUNC_4(FUNC_2(VAR_3->DAC_OutputBuffer));



  VAR_4 = VAR_1->CR;

  VAR_4 &= ~(VAR_0 << VAR_2);






  VAR_5 = (VAR_3->DAC_Trigger | VAR_3->DAC_WaveGeneration |
             VAR_3->DAC_LFSRUnmask_TriangleAmplitude | VAR_3->DAC_OutputBuffer);


  VAR_4 |= VAR_5 << VAR_2;

  VAR_1->CR = VAR_4;
}
