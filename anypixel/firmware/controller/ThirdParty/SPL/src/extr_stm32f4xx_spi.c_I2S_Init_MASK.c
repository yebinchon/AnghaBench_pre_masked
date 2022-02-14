
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_9__ {int CFGR; int PLLI2SCFGR; int PLLCFGR; } ;
struct TYPE_8__ {int I2S_Mode; int I2S_Standard; int I2S_DataFormat; scalar_t__ I2S_MCLKOutput; int I2S_AudioFreq; scalar_t__ I2S_CPOL; } ;
struct TYPE_7__ {int I2SCFGR; int I2SPR; } ;
typedef TYPE_1__ SPI_TypeDef ;
typedef TYPE_2__ I2S_InitTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_3__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_7 (int ) ;

void FUNC_8(SPI_TypeDef* VAR_12, I2S_InitTypeDef* VAR_13)
{
  uint16_t VAR_14 = 0, VAR_15 = 2, VAR_16 = 0, VAR_17 = 1;
  uint32_t VAR_18 = 0, VAR_19 = 0;

  uint32_t VAR_20 = 0, VAR_21 = 0, VAR_22 = 0;



  FUNC_7(FUNC_6(VAR_12));
  FUNC_7(FUNC_4(VAR_13->I2S_Mode));
  FUNC_7(FUNC_5(VAR_13->I2S_Standard));
  FUNC_7(FUNC_2(VAR_13->I2S_DataFormat));
  FUNC_7(FUNC_3(VAR_13->I2S_MCLKOutput));
  FUNC_7(FUNC_0(VAR_13->I2S_AudioFreq));
  FUNC_7(FUNC_1(VAR_13->I2S_CPOL));



  VAR_12->I2SCFGR &= VAR_1;
  VAR_12->I2SPR = 0x0002;


  VAR_14 = VAR_12->I2SCFGR;


  if(VAR_13->I2S_AudioFreq == VAR_2)
  {
    VAR_16 = (uint16_t)0;
    VAR_15 = (uint16_t)2;
  }

  else
  {

    if(VAR_13->I2S_DataFormat == VAR_3)
    {

      VAR_17 = 1;
    }
    else
    {

      VAR_17 = 2;
    }
    if ((VAR_6->CFGR & VAR_7) != 0)
    {
      VAR_6->CFGR &= ~(uint32_t)VAR_7;
    }


    VAR_21 = (uint32_t)(((VAR_6->PLLI2SCFGR & VAR_9) >> 6) & (VAR_9 >> 6));



    VAR_22 = (uint32_t)(((VAR_6->PLLI2SCFGR & VAR_10) >> 28) & (VAR_10 >> 28));



    VAR_20 = (uint32_t)(VAR_6->PLLCFGR & VAR_8);


    VAR_19 = (uint32_t)(((VAR_0 / VAR_20) * VAR_21) / VAR_22);



    if(VAR_13->I2S_MCLKOutput == VAR_5)
    {

      VAR_18 = (uint16_t)(((((VAR_19 / 256) * 10) / VAR_13->I2S_AudioFreq)) + 5);
    }
    else
    {

      VAR_18 = (uint16_t)(((((VAR_19 / (32 * VAR_17)) *10 ) / VAR_13->I2S_AudioFreq)) + 5);
    }


    VAR_18 = VAR_18 / 10;


    VAR_16 = (uint16_t)(VAR_18 & (uint16_t)0x0001);


    VAR_15 = (uint16_t)((VAR_18 - VAR_16) / 2);


    VAR_16 = (uint16_t) (VAR_16 << 8);
  }


  if ((VAR_15 < 2) || (VAR_15 > 0xFF))
  {

    VAR_15 = 2;
    VAR_16 = 0;
  }


  VAR_12->I2SPR = (uint16_t)((uint16_t)VAR_15 | (uint16_t)(VAR_16 | (uint16_t)VAR_13->I2S_MCLKOutput));


  VAR_14 |= (uint16_t)((uint16_t)VAR_11 | (uint16_t)(VAR_13->I2S_Mode | (uint16_t)(VAR_13->I2S_Standard | (uint16_t)(VAR_13->I2S_DataFormat | (uint16_t)VAR_13->I2S_CPOL))));




  VAR_12->I2SCFGR = VAR_14;
}
