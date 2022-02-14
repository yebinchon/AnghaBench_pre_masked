
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int GPIO_PuPd; int GPIO_OType; int GPIO_Speed; int GPIO_Mode; int GPIO_Pin; } ;
typedef TYPE_1__ GPIO_InitTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_0(GPIO_InitTypeDef* VAR_5)
{

  VAR_5->GPIO_Pin = VAR_2;
  VAR_5->GPIO_Mode = VAR_0;
  VAR_5->GPIO_Speed = VAR_4;
  VAR_5->GPIO_OType = VAR_1;
  VAR_5->GPIO_PuPd = VAR_3;
}
