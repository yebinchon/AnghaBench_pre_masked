
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int SDIO_Argument; int SDIO_CmdIndex; int SDIO_CPSM; int SDIO_Wait; int SDIO_Response; } ;
typedef TYPE_1__ SDIO_CmdInitTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0(SDIO_CmdInitTypeDef* VAR_3)
{

  VAR_3->SDIO_Argument = 0x00;
  VAR_3->SDIO_CmdIndex = 0x00;
  VAR_3->SDIO_Response = VAR_1;
  VAR_3->SDIO_Wait = VAR_2;
  VAR_3->SDIO_CPSM = VAR_0;
}
