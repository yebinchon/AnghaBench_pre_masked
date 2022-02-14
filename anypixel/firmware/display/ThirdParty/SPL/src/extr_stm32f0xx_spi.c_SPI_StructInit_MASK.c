
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int SPI_CRCPolynomial; int SPI_FirstBit; int SPI_BaudRatePrescaler; int SPI_NSS; int SPI_CPHA; int SPI_CPOL; int SPI_DataSize; int SPI_Mode; int SPI_Direction; } ;
typedef TYPE_1__ SPI_InitTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_0(SPI_InitTypeDef* VAR_8)
{


  VAR_8->SPI_Direction = VAR_4;

  VAR_8->SPI_Mode = VAR_6;

  VAR_8->SPI_DataSize = VAR_3;

  VAR_8->SPI_CPOL = VAR_2;

  VAR_8->SPI_CPHA = VAR_1;

  VAR_8->SPI_NSS = VAR_7;

  VAR_8->SPI_BaudRatePrescaler = VAR_0;

  VAR_8->SPI_FirstBit = VAR_5;

  VAR_8->SPI_CRCPolynomial = 7;
}
