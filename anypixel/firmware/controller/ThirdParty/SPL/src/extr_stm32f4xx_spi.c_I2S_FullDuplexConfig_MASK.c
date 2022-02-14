
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_7__ {scalar_t__ I2S_Mode; int I2S_Standard; int I2S_DataFormat; scalar_t__ I2S_CPOL; } ;
struct TYPE_6__ {int I2SCFGR; int I2SPR; } ;
typedef TYPE_1__ SPI_TypeDef ;
typedef TYPE_2__ I2S_InitTypeDef ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int ) ;

void FUNC_6(SPI_TypeDef* VAR_6, I2S_InitTypeDef* VAR_7)
{
  uint16_t VAR_8 = 0, VAR_9 = 0;


  FUNC_5(FUNC_2(VAR_6));
  FUNC_5(FUNC_3(VAR_7->I2S_Mode));
  FUNC_5(FUNC_4(VAR_7->I2S_Standard));
  FUNC_5(FUNC_1(VAR_7->I2S_DataFormat));
  FUNC_5(FUNC_0(VAR_7->I2S_CPOL));



  VAR_6->I2SCFGR &= VAR_0;
  VAR_6->I2SPR = 0x0002;


  VAR_8 = VAR_6->I2SCFGR;


  if ((VAR_7->I2S_Mode == VAR_2) || (VAR_7->I2S_Mode == VAR_4))
  {
    VAR_9 = VAR_3;
  }
  else
  {
    if ((VAR_7->I2S_Mode == VAR_1) || (VAR_7->I2S_Mode == VAR_3))
    {
      VAR_9 = VAR_4;
    }
  }



  VAR_8 |= (uint16_t)((uint16_t)VAR_5 | (uint16_t)(VAR_9 | (uint16_t)(VAR_7->I2S_Standard | (uint16_t)(VAR_7->I2S_DataFormat | (uint16_t)VAR_7->I2S_CPOL))));




  VAR_6->I2SCFGR = VAR_8;
}
