
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int ESCR; } ;
struct TYPE_4__ {int DCMI_FrameStartCode; scalar_t__ DCMI_FrameEndCode; scalar_t__ DCMI_LineEndCode; scalar_t__ DCMI_LineStartCode; } ;
typedef TYPE_1__ DCMI_CodesInitTypeDef ;


 TYPE_3__* VAR_0 ;

void FUNC_0(DCMI_CodesInitTypeDef* VAR_1)
{
  VAR_0->ESCR = (uint32_t)(VAR_1->DCMI_FrameStartCode |
                          ((uint32_t)VAR_1->DCMI_LineStartCode << 8)|
                          ((uint32_t)VAR_1->DCMI_LineEndCode << 16)|
                          ((uint32_t)VAR_1->DCMI_FrameEndCode << 24));
}
