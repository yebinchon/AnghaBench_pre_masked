
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct TYPE_7__ {int ADC_Resolution; int ADC_ExternalTrigConvEdge; int ADC_ExternalTrigConv; int ADC_DataAlign; scalar_t__ ADC_NbrOfConversion; scalar_t__ ADC_ContinuousConvMode; scalar_t__ ADC_ScanConvMode; } ;
struct TYPE_6__ {int CR1; int CR2; int SQR1; } ;
typedef TYPE_1__ ADC_TypeDef ;
typedef TYPE_2__ ADC_InitTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int) ;
 int FUNC_6 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_7 (int ) ;

void FUNC_8(ADC_TypeDef* VAR_3, ADC_InitTypeDef* VAR_4)
{
  uint32_t VAR_5 = 0;
  uint8_t VAR_6 = 0;

  FUNC_7(FUNC_0(VAR_3));
  FUNC_7(FUNC_5(VAR_4->ADC_Resolution));
  FUNC_7(FUNC_6(VAR_4->ADC_ScanConvMode));
  FUNC_7(FUNC_6(VAR_4->ADC_ContinuousConvMode));
  FUNC_7(FUNC_3(VAR_4->ADC_ExternalTrigConvEdge));
  FUNC_7(FUNC_2(VAR_4->ADC_ExternalTrigConv));
  FUNC_7(FUNC_1(VAR_4->ADC_DataAlign));
  FUNC_7(FUNC_4(VAR_4->ADC_NbrOfConversion));



  VAR_5 = VAR_3->CR1;


  VAR_5 &= VAR_0;




  VAR_5 |= (uint32_t)(((uint32_t)VAR_4->ADC_ScanConvMode << 8) | VAR_4->ADC_Resolution);


  VAR_3->CR1 = VAR_5;


  VAR_5 = VAR_3->CR2;


  VAR_5 &= VAR_1;







  VAR_5 |= (uint32_t)(VAR_4->ADC_DataAlign | VAR_4->ADC_ExternalTrigConv |

                        VAR_4->ADC_ExternalTrigConvEdge | ((uint32_t)VAR_4->ADC_ContinuousConvMode << 1));



  VAR_3->CR2 = VAR_5;


  VAR_5 = VAR_3->SQR1;


  VAR_5 &= VAR_2;



  VAR_6 |= (uint8_t)(VAR_4->ADC_NbrOfConversion - (uint8_t)1);
  VAR_5 |= ((uint32_t)VAR_6 << 20);


  VAR_3->SQR1 = VAR_5;
}
