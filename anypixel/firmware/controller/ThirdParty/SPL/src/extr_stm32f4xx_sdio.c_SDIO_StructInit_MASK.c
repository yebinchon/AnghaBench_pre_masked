
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int SDIO_ClockDiv; int SDIO_HardwareFlowControl; int SDIO_BusWide; int SDIO_ClockPowerSave; int SDIO_ClockBypass; int SDIO_ClockEdge; } ;
typedef TYPE_1__ SDIO_InitTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_0(SDIO_InitTypeDef* VAR_5)
{

  VAR_5->SDIO_ClockDiv = 0x00;
  VAR_5->SDIO_ClockEdge = VAR_2;
  VAR_5->SDIO_ClockBypass = VAR_1;
  VAR_5->SDIO_ClockPowerSave = VAR_3;
  VAR_5->SDIO_BusWide = VAR_0;
  VAR_5->SDIO_HardwareFlowControl = VAR_4;
}
