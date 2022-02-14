
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int CWSTRTR; int CWSIZER; } ;
struct TYPE_4__ {int DCMI_CaptureCount; scalar_t__ DCMI_VerticalLineCount; scalar_t__ DCMI_VerticalStartLine; scalar_t__ DCMI_HorizontalOffsetCount; } ;
typedef TYPE_1__ DCMI_CROPInitTypeDef ;


 TYPE_3__* VAR_0 ;

void FUNC_0(DCMI_CROPInitTypeDef* VAR_1)
{

  VAR_0->CWSTRTR = (uint32_t)((uint32_t)VAR_1->DCMI_HorizontalOffsetCount |
                  ((uint32_t)VAR_1->DCMI_VerticalStartLine << 16));


  VAR_0->CWSIZER = (uint32_t)(VAR_1->DCMI_CaptureCount |
                  ((uint32_t)VAR_1->DCMI_VerticalLineCount << 16));
}
