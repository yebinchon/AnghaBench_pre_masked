
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int DCMI_ExtendedDataMode; int DCMI_CaptureRate; int DCMI_HSPolarity; int DCMI_VSPolarity; int DCMI_PCKPolarity; int DCMI_SynchroMode; int DCMI_CaptureMode; } ;
typedef TYPE_1__ DCMI_InitTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_0(DCMI_InitTypeDef* VAR_7)
{

  VAR_7->DCMI_CaptureMode = VAR_0;
  VAR_7->DCMI_SynchroMode = VAR_5;
  VAR_7->DCMI_PCKPolarity = VAR_4;
  VAR_7->DCMI_VSPolarity = VAR_6;
  VAR_7->DCMI_HSPolarity = VAR_3;
  VAR_7->DCMI_CaptureRate = VAR_1;
  VAR_7->DCMI_ExtendedDataMode = VAR_2;
}
