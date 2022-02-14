
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ADC_ScanDirection; int ADC_DataAlign; int ADC_ExternalTrigConv; int ADC_ExternalTrigConvEdge; int ADC_ContinuousConvMode; int ADC_Resolution; } ;
typedef TYPE_1__ ADC_InitTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_0(ADC_InitTypeDef* VAR_6)
{


  VAR_6->ADC_Resolution = VAR_3;


  VAR_6->ADC_ContinuousConvMode = VAR_5;


  VAR_6->ADC_ExternalTrigConvEdge = VAR_1;


  VAR_6->ADC_ExternalTrigConv = VAR_2;


  VAR_6->ADC_DataAlign = VAR_0;


  VAR_6->ADC_ScanDirection = VAR_4;
}
