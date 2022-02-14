
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ADC_TwoSamplingDelay; int ADC_DMAAccessMode; int ADC_Prescaler; int ADC_Mode; } ;
typedef TYPE_1__ ADC_CommonInitTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_0(ADC_CommonInitTypeDef* VAR_4)
{

  VAR_4->ADC_Mode = VAR_1;


  VAR_4->ADC_Prescaler = VAR_2;


  VAR_4->ADC_DMAAccessMode = VAR_0;


  VAR_4->ADC_TwoSamplingDelay = VAR_3;
}
