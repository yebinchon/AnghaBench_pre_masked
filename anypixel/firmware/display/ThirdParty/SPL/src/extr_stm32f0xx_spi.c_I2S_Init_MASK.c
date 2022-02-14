
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_10__ {int I2S_Mode; int I2S_Standard; int I2S_DataFormat; scalar_t__ I2S_MCLKOutput; int I2S_AudioFreq; scalar_t__ I2S_CPOL; } ;
struct TYPE_9__ {int SYSCLK_Frequency; } ;
struct TYPE_8__ {int I2SCFGR; int I2SPR; } ;
typedef TYPE_1__ SPI_TypeDef ;
typedef TYPE_2__ RCC_ClocksTypeDef ;
typedef TYPE_3__ I2S_InitTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_8 (int ) ;

void FUNC_9(SPI_TypeDef* VAR_5, I2S_InitTypeDef* VAR_6)
{
  uint16_t VAR_7 = 0, VAR_8 = 2, VAR_9 = 0, VAR_10 = 1;
  uint32_t VAR_11 = 0;
  RCC_ClocksTypeDef VAR_12;
  uint32_t VAR_13 = 0;


  FUNC_8(FUNC_6(VAR_5));
  FUNC_8(FUNC_4(VAR_6->I2S_Mode));
  FUNC_8(FUNC_5(VAR_6->I2S_Standard));
  FUNC_8(FUNC_2(VAR_6->I2S_DataFormat));
  FUNC_8(FUNC_3(VAR_6->I2S_MCLKOutput));
  FUNC_8(FUNC_0(VAR_6->I2S_AudioFreq));
  FUNC_8(FUNC_1(VAR_6->I2S_CPOL));



  VAR_5->I2SCFGR &= VAR_0;
  VAR_5->I2SPR = 0x0002;


  VAR_7 = VAR_5->I2SCFGR;


  if(VAR_6->I2S_AudioFreq == VAR_1)
  {
    VAR_9 = (uint16_t)0;
    VAR_8 = (uint16_t)2;
  }

  else
  {

    if(VAR_6->I2S_DataFormat == VAR_2)
    {

      VAR_10 = 1;
    }
    else
    {

      VAR_10 = 2;
    }


    FUNC_7(&VAR_12);


    VAR_13 = VAR_12.SYSCLK_Frequency;


    if(VAR_6->I2S_MCLKOutput == VAR_3)
    {

      VAR_11 = (uint16_t)(((((VAR_13 / 256) * 10) / VAR_6->I2S_AudioFreq)) + 5);
    }
    else
    {

      VAR_11 = (uint16_t)(((((VAR_13 / (32 * VAR_10)) *10 ) / VAR_6->I2S_AudioFreq)) + 5);
    }


    VAR_11 = VAR_11 / 10;


    VAR_9 = (uint16_t)(VAR_11 & (uint16_t)0x0001);


    VAR_8 = (uint16_t)((VAR_11 - VAR_9) / 2);


    VAR_9 = (uint16_t) (VAR_9 << 8);
  }


  if ((VAR_8 < 2) || (VAR_8 > 0xFF))
  {

    VAR_8 = 2;
    VAR_9 = 0;
  }


  VAR_5->I2SPR = (uint16_t)(VAR_8 | (uint16_t)(VAR_9 | (uint16_t)VAR_6->I2S_MCLKOutput));


  VAR_7 |= (uint16_t)(VAR_4 | (uint16_t)(VAR_6->I2S_Mode | (uint16_t)(VAR_6->I2S_Standard | (uint16_t)(VAR_6->I2S_DataFormat | (uint16_t)VAR_6->I2S_CPOL))));




  VAR_5->I2SCFGR = VAR_7;
}
