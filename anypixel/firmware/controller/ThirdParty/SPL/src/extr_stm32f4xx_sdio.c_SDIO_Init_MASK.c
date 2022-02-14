
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int CLKCR; } ;
struct TYPE_4__ {int SDIO_ClockEdge; int SDIO_ClockBypass; int SDIO_ClockPowerSave; int SDIO_BusWide; int SDIO_HardwareFlowControl; int SDIO_ClockDiv; } ;
typedef TYPE_1__ SDIO_InitTypeDef ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 TYPE_3__* VAR_1 ;
 int FUNC_5 (int ) ;

void FUNC_6(SDIO_InitTypeDef* VAR_2)
{
  uint32_t VAR_3 = 0;


  FUNC_5(FUNC_2(VAR_2->SDIO_ClockEdge));
  FUNC_5(FUNC_1(VAR_2->SDIO_ClockBypass));
  FUNC_5(FUNC_3(VAR_2->SDIO_ClockPowerSave));
  FUNC_5(FUNC_0(VAR_2->SDIO_BusWide));
  FUNC_5(FUNC_4(VAR_2->SDIO_HardwareFlowControl));



  VAR_3 = VAR_1->CLKCR;


  VAR_3 &= VAR_0;







  VAR_3 |= (VAR_2->SDIO_ClockDiv | VAR_2->SDIO_ClockPowerSave |
             VAR_2->SDIO_ClockBypass | VAR_2->SDIO_BusWide |
             VAR_2->SDIO_ClockEdge | VAR_2->SDIO_HardwareFlowControl);


  VAR_1->CLKCR = VAR_3;
}
