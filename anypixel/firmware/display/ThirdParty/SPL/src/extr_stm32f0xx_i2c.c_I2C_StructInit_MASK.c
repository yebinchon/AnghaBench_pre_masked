
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int I2C_AcknowledgedAddress; int I2C_Ack; scalar_t__ I2C_OwnAddress1; int I2C_Mode; scalar_t__ I2C_DigitalFilter; int I2C_AnalogFilter; scalar_t__ I2C_Timing; } ;
typedef TYPE_1__ I2C_InitTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_0(I2C_InitTypeDef* VAR_4)
{


  VAR_4->I2C_Timing = 0;

  VAR_4->I2C_AnalogFilter = VAR_2;

  VAR_4->I2C_DigitalFilter = 0;

  VAR_4->I2C_Mode = VAR_3;

  VAR_4->I2C_OwnAddress1 = 0;

  VAR_4->I2C_Ack = VAR_0;

  VAR_4->I2C_AcknowledgedAddress = VAR_1;
}
