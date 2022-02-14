
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ADC_NbrOfConversion; int ADC_DataAlign; int ADC_ExternalTrigConv; int ADC_ExternalTrigConvEdge; void* ADC_ContinuousConvMode; void* ADC_ScanConvMode; int ADC_Resolution; } ;
typedef TYPE_1__ ADC_InitTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;

void FUNC_0(ADC_InitTypeDef* VAR_5)
{

  VAR_5->ADC_Resolution = VAR_3;


  VAR_5->ADC_ScanConvMode = VAR_4;


  VAR_5->ADC_ContinuousConvMode = VAR_4;


  VAR_5->ADC_ExternalTrigConvEdge = VAR_1;


  VAR_5->ADC_ExternalTrigConv = VAR_2;


  VAR_5->ADC_DataAlign = VAR_0;


  VAR_5->ADC_NbrOfConversion = 1;
}
