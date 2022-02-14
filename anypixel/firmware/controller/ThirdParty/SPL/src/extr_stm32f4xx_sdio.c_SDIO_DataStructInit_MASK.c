
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int SDIO_DataTimeOut; int SDIO_DataLength; int SDIO_DPSM; int SDIO_TransferMode; int SDIO_TransferDir; int SDIO_DataBlockSize; } ;
typedef TYPE_1__ SDIO_DataInitTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_0(SDIO_DataInitTypeDef* VAR_4)
{

  VAR_4->SDIO_DataTimeOut = 0xFFFFFFFF;
  VAR_4->SDIO_DataLength = 0x00;
  VAR_4->SDIO_DataBlockSize = VAR_1;
  VAR_4->SDIO_TransferDir = VAR_2;
  VAR_4->SDIO_TransferMode = VAR_3;
  VAR_4->SDIO_DPSM = VAR_0;
}
