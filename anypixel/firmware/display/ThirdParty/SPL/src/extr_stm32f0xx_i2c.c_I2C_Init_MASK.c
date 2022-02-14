
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int I2C_DigitalFilter; int I2C_Mode; int I2C_Ack; int I2C_Timing; scalar_t__ I2C_OwnAddress1; scalar_t__ I2C_AcknowledgedAddress; scalar_t__ I2C_AnalogFilter; } ;
struct TYPE_6__ {int CR1; int TIMINGR; int OAR1; int OAR2; int CR2; } ;
typedef TYPE_1__ I2C_TypeDef ;
typedef TYPE_2__ I2C_InitTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_7 (int ) ;

void FUNC_8(I2C_TypeDef* VAR_5, I2C_InitTypeDef* VAR_6)
{
  uint32_t VAR_7 = 0;


  FUNC_7(FUNC_2(VAR_5));
  FUNC_7(FUNC_3(VAR_6->I2C_AnalogFilter));
  FUNC_7(FUNC_4(VAR_6->I2C_DigitalFilter));
  FUNC_7(FUNC_5(VAR_6->I2C_Mode));
  FUNC_7(FUNC_6(VAR_6->I2C_OwnAddress1));
  FUNC_7(FUNC_0(VAR_6->I2C_Ack));
  FUNC_7(FUNC_1(VAR_6->I2C_AcknowledgedAddress));


  VAR_5->CR1 &= (uint32_t)~((uint32_t)VAR_2);



  VAR_7 = VAR_5->CR1;

  VAR_7 &= VAR_0;



  VAR_7 |= (uint32_t)VAR_6->I2C_AnalogFilter |(VAR_6->I2C_DigitalFilter << 8);


  VAR_5->CR1 = VAR_7;





  VAR_5->TIMINGR = VAR_6->I2C_Timing & VAR_4;


  VAR_5->CR1 |= VAR_2;



  VAR_7 = 0;

  VAR_5->OAR1 = (uint32_t)VAR_7;

  VAR_5->OAR2 = (uint32_t)VAR_7;



  VAR_7 = (uint32_t)((uint32_t)VAR_6->I2C_AcknowledgedAddress | (uint32_t)VAR_6->I2C_OwnAddress1);


  VAR_5->OAR1 = VAR_7;

  VAR_5->OAR1 |= VAR_3;




  VAR_7 = VAR_6->I2C_Mode;

  VAR_5->CR1 |= VAR_7;



  VAR_7 = VAR_5->CR2;

  VAR_7 &= VAR_1;


  VAR_7 |= VAR_6->I2C_Ack;

  VAR_5->CR2 = VAR_7;
}
