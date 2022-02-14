
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int ADC_Resolution; int ADC_ExternalTrigConvEdge; int ADC_ExternalTrigConv; int ADC_DataAlign; int ADC_ScanDirection; scalar_t__ ADC_ContinuousConvMode; } ;
struct TYPE_6__ {int CFGR1; } ;
typedef TYPE_1__ ADC_TypeDef ;
typedef TYPE_2__ ADC_InitTypeDef ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ) ;

void FUNC_8(ADC_TypeDef* VAR_1, ADC_InitTypeDef* VAR_2)
{
  uint32_t VAR_3 = 0;


  FUNC_7(FUNC_0(VAR_1));
  FUNC_7(FUNC_4(VAR_2->ADC_Resolution));
  FUNC_7(FUNC_6(VAR_2->ADC_ContinuousConvMode));
  FUNC_7(FUNC_3(VAR_2->ADC_ExternalTrigConvEdge));
  FUNC_7(FUNC_2(VAR_2->ADC_ExternalTrigConv));
  FUNC_7(FUNC_1(VAR_2->ADC_DataAlign));
  FUNC_7(FUNC_5(VAR_2->ADC_ScanDirection));


  VAR_3 = VAR_1->CFGR1;


  VAR_3 &= VAR_0;
  VAR_3 |= (uint32_t)(VAR_2->ADC_Resolution | ((uint32_t)(VAR_2->ADC_ContinuousConvMode) << 13) |
             VAR_2->ADC_ExternalTrigConvEdge | VAR_2->ADC_ExternalTrigConv |
             VAR_2->ADC_DataAlign | VAR_2->ADC_ScanDirection);


  VAR_1->CFGR1 = VAR_3;
}
