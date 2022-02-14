
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int SMPR1; int SMPR2; int JSQR; } ;
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
 int FUNC_4 (int ) ;

void FUNC_5(ADC_TypeDef* VAR_5, uint8_t VAR_6, uint8_t VAR_7, uint8_t VAR_8)
{
  uint32_t VAR_9 = 0, VAR_10 = 0, VAR_11 = 0;

  FUNC_4(FUNC_0(VAR_5));
  FUNC_4(FUNC_1(VAR_6));
  FUNC_4(FUNC_2(VAR_7));
  FUNC_4(FUNC_3(VAR_8));

  if (VAR_6 > VAR_0)
  {

    VAR_9 = VAR_5->SMPR1;

    VAR_10 = VAR_3 << (3*(VAR_6 - 10));

    VAR_9 &= ~VAR_10;

    VAR_10 = (uint32_t)VAR_8 << (3*(VAR_6 - 10));

    VAR_9 |= VAR_10;

    VAR_5->SMPR1 = VAR_9;
  }
  else
  {

    VAR_9 = VAR_5->SMPR2;

    VAR_10 = VAR_4 << (3 * VAR_6);

    VAR_9 &= ~VAR_10;

    VAR_10 = (uint32_t)VAR_8 << (3 * VAR_6);

    VAR_9 |= VAR_10;

    VAR_5->SMPR2 = VAR_9;
  }


  VAR_9 = VAR_5->JSQR;

  VAR_11 = (VAR_9 & VAR_1)>> 20;

  VAR_10 = VAR_2 << (5 * (uint8_t)((VAR_7 + 3) - (VAR_11 + 1)));

  VAR_9 &= ~VAR_10;

  VAR_10 = (uint32_t)VAR_6 << (5 * (uint8_t)((VAR_7 + 3) - (VAR_11 + 1)));

  VAR_9 |= VAR_10;

  VAR_5->JSQR = VAR_9;
}
