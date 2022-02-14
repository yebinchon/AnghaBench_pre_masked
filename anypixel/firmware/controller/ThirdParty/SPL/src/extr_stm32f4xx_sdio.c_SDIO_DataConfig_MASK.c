
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int DCTRL; int DLEN; int DTIMER; } ;
struct TYPE_4__ {int SDIO_TransferDir; int SDIO_TransferMode; int SDIO_DPSM; scalar_t__ SDIO_DataBlockSize; int SDIO_DataLength; int SDIO_DataTimeOut; } ;
typedef TYPE_1__ SDIO_DataInitTypeDef ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 TYPE_3__* VAR_1 ;
 int FUNC_5 (int ) ;

void FUNC_6(SDIO_DataInitTypeDef* VAR_2)
{
  uint32_t VAR_3 = 0;


  FUNC_5(FUNC_1(VAR_2->SDIO_DataLength));
  FUNC_5(FUNC_0(VAR_2->SDIO_DataBlockSize));
  FUNC_5(FUNC_3(VAR_2->SDIO_TransferDir));
  FUNC_5(FUNC_4(VAR_2->SDIO_TransferMode));
  FUNC_5(FUNC_2(VAR_2->SDIO_DPSM));



  VAR_1->DTIMER = VAR_2->SDIO_DataTimeOut;



  VAR_1->DLEN = VAR_2->SDIO_DataLength;



  VAR_3 = VAR_1->DCTRL;

  VAR_3 &= VAR_0;




  VAR_3 |= (uint32_t)VAR_2->SDIO_DataBlockSize | VAR_2->SDIO_TransferDir
           | VAR_2->SDIO_TransferMode | VAR_2->SDIO_DPSM;


  VAR_1->DCTRL = VAR_3;
}
