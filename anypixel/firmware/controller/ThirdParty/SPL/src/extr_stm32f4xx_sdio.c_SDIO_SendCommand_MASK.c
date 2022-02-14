
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int CMD; int ARG; } ;
struct TYPE_4__ {int SDIO_Response; int SDIO_Wait; int SDIO_CPSM; scalar_t__ SDIO_CmdIndex; int SDIO_Argument; } ;
typedef TYPE_1__ SDIO_CmdInitTypeDef ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 TYPE_3__* VAR_1 ;
 int FUNC_4 (int ) ;

void FUNC_5(SDIO_CmdInitTypeDef *VAR_2)
{
  uint32_t VAR_3 = 0;


  FUNC_4(FUNC_0(VAR_2->SDIO_CmdIndex));
  FUNC_4(FUNC_2(VAR_2->SDIO_Response));
  FUNC_4(FUNC_3(VAR_2->SDIO_Wait));
  FUNC_4(FUNC_1(VAR_2->SDIO_CPSM));



  VAR_1->ARG = VAR_2->SDIO_Argument;



  VAR_3 = VAR_1->CMD;

  VAR_3 &= VAR_0;




  VAR_3 |= (uint32_t)VAR_2->SDIO_CmdIndex | VAR_2->SDIO_Response
           | VAR_2->SDIO_Wait | VAR_2->SDIO_CPSM;


  VAR_1->CMD = VAR_3;
}
