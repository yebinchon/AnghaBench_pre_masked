
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int CCR; } ;
struct TYPE_4__ {int ADC_Mode; int ADC_Prescaler; int ADC_DMAAccessMode; int ADC_TwoSamplingDelay; } ;
typedef TYPE_1__ ADC_CommonInitTypeDef ;


 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;

void FUNC_5(ADC_CommonInitTypeDef* VAR_2)
{
  uint32_t VAR_3 = 0;

  FUNC_4(FUNC_1(VAR_2->ADC_Mode));
  FUNC_4(FUNC_2(VAR_2->ADC_Prescaler));
  FUNC_4(FUNC_0(VAR_2->ADC_DMAAccessMode));
  FUNC_4(FUNC_3(VAR_2->ADC_TwoSamplingDelay));


  VAR_3 = VAR_0->CCR;


  VAR_3 &= VAR_1;







  VAR_3 |= (uint32_t)(VAR_2->ADC_Mode |
                        VAR_2->ADC_Prescaler |
                        VAR_2->ADC_DMAAccessMode |
                        VAR_2->ADC_TwoSamplingDelay);


  VAR_0->CCR = VAR_3;
}
