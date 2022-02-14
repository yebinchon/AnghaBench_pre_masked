
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_10__ {int I2C_ClockSpeed; scalar_t__ I2C_DutyCycle; int I2C_OwnAddress1; int I2C_Ack; int I2C_AcknowledgedAddress; scalar_t__ I2C_Mode; } ;
struct TYPE_9__ {int CR2; int CR1; int TRISE; int CCR; int OAR1; } ;
struct TYPE_8__ {int PCLK1_Frequency; } ;
typedef TYPE_1__ RCC_ClocksTypeDef ;
typedef TYPE_2__ I2C_TypeDef ;
typedef TYPE_3__ I2C_InitTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ) ;

void FUNC_9(I2C_TypeDef* VAR_7, I2C_InitTypeDef* VAR_8)
{
  uint16_t VAR_9 = 0, VAR_10 = 0;
  uint16_t VAR_11 = 0x04;
  uint32_t VAR_12 = 8000000;
  RCC_ClocksTypeDef VAR_13;

  FUNC_8(FUNC_2(VAR_7));
  FUNC_8(FUNC_3(VAR_8->I2C_ClockSpeed));
  FUNC_8(FUNC_5(VAR_8->I2C_Mode));
  FUNC_8(FUNC_4(VAR_8->I2C_DutyCycle));
  FUNC_8(FUNC_6(VAR_8->I2C_OwnAddress1));
  FUNC_8(FUNC_1(VAR_8->I2C_Ack));
  FUNC_8(FUNC_0(VAR_8->I2C_AcknowledgedAddress));



  VAR_9 = VAR_7->CR2;

  VAR_9 &= (uint16_t)~((uint16_t)VAR_4);

  FUNC_7(&VAR_13);
  VAR_12 = VAR_13.PCLK1_Frequency;

  VAR_10 = (uint16_t)(VAR_12 / 1000000);
  VAR_9 |= VAR_10;

  VAR_7->CR2 = VAR_9;



  VAR_7->CR1 &= (uint16_t)~((uint16_t)VAR_3);


  VAR_9 = 0;


  if (VAR_8->I2C_ClockSpeed <= 100000)
  {

    VAR_11 = (uint16_t)(VAR_12 / (VAR_8->I2C_ClockSpeed << 1));

    if (VAR_11 < 0x04)
    {

      VAR_11 = 0x04;
    }

    VAR_9 |= VAR_11;

    VAR_7->TRISE = VAR_10 + 1;
  }



  else
  {
    if (VAR_8->I2C_DutyCycle == VAR_6)
    {

      VAR_11 = (uint16_t)(VAR_12 / (VAR_8->I2C_ClockSpeed * 3));
    }
    else
    {

      VAR_11 = (uint16_t)(VAR_12 / (VAR_8->I2C_ClockSpeed * 25));

      VAR_11 |= VAR_5;
    }


    if ((VAR_11 & VAR_1) == 0)
    {

      VAR_11 |= (uint16_t)0x0001;
    }

    VAR_9 |= (uint16_t)(VAR_11 | VAR_2);

    VAR_7->TRISE = (uint16_t)(((VAR_10 * (uint16_t)300) / (uint16_t)1000) + (uint16_t)1);
  }


  VAR_7->CCR = VAR_9;

  VAR_7->CR1 |= VAR_3;



  VAR_9 = VAR_7->CR1;

  VAR_9 &= VAR_0;



  VAR_9 |= (uint16_t)((uint32_t)VAR_8->I2C_Mode | VAR_8->I2C_Ack);

  VAR_7->CR1 = VAR_9;



  VAR_7->OAR1 = (VAR_8->I2C_AcknowledgedAddress | VAR_8->I2C_OwnAddress1);
}
