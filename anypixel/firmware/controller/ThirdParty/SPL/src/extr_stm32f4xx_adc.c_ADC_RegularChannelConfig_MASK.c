
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int SMPR1; int SMPR2; int SQR3; int SQR2; int SQR1; } ;
typedef TYPE_1__ ADC_TypeDef ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ) ;

void FUNC_5(ADC_TypeDef* VAR_6, uint8_t VAR_7, uint8_t VAR_8, uint8_t VAR_9)
{
  uint32_t VAR_10 = 0, VAR_11 = 0;

  FUNC_4(FUNC_0(VAR_6));
  FUNC_4(FUNC_1(VAR_7));
  FUNC_4(FUNC_2(VAR_8));
  FUNC_4(FUNC_3(VAR_9));


  if (VAR_7 > VAR_0)
  {

    VAR_10 = VAR_6->SMPR1;


    VAR_11 = VAR_1 << (3 * (VAR_7 - 10));


    VAR_10 &= ~VAR_11;


    VAR_11 = (uint32_t)VAR_9 << (3 * (VAR_7 - 10));


    VAR_10 |= VAR_11;


    VAR_6->SMPR1 = VAR_10;
  }
  else
  {

    VAR_10 = VAR_6->SMPR2;


    VAR_11 = VAR_2 << (3 * VAR_7);


    VAR_10 &= ~VAR_11;


    VAR_11 = (uint32_t)VAR_9 << (3 * VAR_7);


    VAR_10 |= VAR_11;


    VAR_6->SMPR2 = VAR_10;
  }

  if (VAR_8 < 7)
  {

    VAR_10 = VAR_6->SQR3;


    VAR_11 = VAR_5 << (5 * (VAR_8 - 1));


    VAR_10 &= ~VAR_11;


    VAR_11 = (uint32_t)VAR_7 << (5 * (VAR_8 - 1));


    VAR_10 |= VAR_11;


    VAR_6->SQR3 = VAR_10;
  }

  else if (VAR_8 < 13)
  {

    VAR_10 = VAR_6->SQR2;


    VAR_11 = VAR_4 << (5 * (VAR_8 - 7));


    VAR_10 &= ~VAR_11;


    VAR_11 = (uint32_t)VAR_7 << (5 * (VAR_8 - 7));


    VAR_10 |= VAR_11;


    VAR_6->SQR2 = VAR_10;
  }

  else
  {

    VAR_10 = VAR_6->SQR1;


    VAR_11 = VAR_3 << (5 * (VAR_8 - 13));


    VAR_10 &= ~VAR_11;


    VAR_11 = (uint32_t)VAR_7 << (5 * (VAR_8 - 13));


    VAR_10 |= VAR_11;


    VAR_6->SQR1 = VAR_10;
  }
}
