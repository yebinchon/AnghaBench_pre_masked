
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_7__ {int SPI_Mode; int SPI_DataSize; int SPI_CPOL; int SPI_CPHA; int SPI_NSS; int SPI_BaudRatePrescaler; int SPI_FirstBit; int SPI_CRCPolynomial; scalar_t__ SPI_Direction; } ;
struct TYPE_6__ {int CRCPR; scalar_t__ I2SCFGR; scalar_t__ CR1; } ;
typedef TYPE_1__ SPI_TypeDef ;
typedef TYPE_2__ SPI_InitTypeDef ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_10 (int ) ;

void FUNC_11(SPI_TypeDef* VAR_2, SPI_InitTypeDef* VAR_3)
{
  uint16_t VAR_4 = 0;


  FUNC_10(FUNC_0(VAR_2));


  FUNC_10(FUNC_6(VAR_3->SPI_Direction));
  FUNC_10(FUNC_8(VAR_3->SPI_Mode));
  FUNC_10(FUNC_5(VAR_3->SPI_DataSize));
  FUNC_10(FUNC_3(VAR_3->SPI_CPOL));
  FUNC_10(FUNC_2(VAR_3->SPI_CPHA));
  FUNC_10(FUNC_9(VAR_3->SPI_NSS));
  FUNC_10(FUNC_1(VAR_3->SPI_BaudRatePrescaler));
  FUNC_10(FUNC_7(VAR_3->SPI_FirstBit));
  FUNC_10(FUNC_4(VAR_3->SPI_CRCPolynomial));



  VAR_4 = VAR_2->CR1;

  VAR_4 &= VAR_0;
  VAR_4 |= (uint16_t)((uint32_t)VAR_3->SPI_Direction | VAR_3->SPI_Mode |
                  VAR_3->SPI_DataSize | VAR_3->SPI_CPOL |
                  VAR_3->SPI_CPHA | VAR_3->SPI_NSS |
                  VAR_3->SPI_BaudRatePrescaler | VAR_3->SPI_FirstBit);

  VAR_2->CR1 = VAR_4;


  VAR_2->I2SCFGR &= (uint16_t)~((uint16_t)VAR_1);


  VAR_2->CRCPR = VAR_3->SPI_CRCPolynomial;
}
