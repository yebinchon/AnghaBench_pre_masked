
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ CR; } ;
struct TYPE_3__ {scalar_t__ SCR; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_2__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;

void FUNC_5(uint32_t VAR_7, uint8_t VAR_8)
{
  uint32_t VAR_9 = 0;


  FUNC_4(FUNC_0(VAR_7));
  FUNC_4(FUNC_1(VAR_8));


  VAR_9 = VAR_1->CR;

  VAR_9 &= VAR_0;


  VAR_9 |= VAR_7;


  VAR_1->CR = VAR_9;


  VAR_4->SCR |= VAR_5;


  if(VAR_8 == VAR_3)
  {

    FUNC_3();

    VAR_4->SCR &= (uint32_t)~((uint32_t)VAR_5);
  }
  else if (VAR_8 == VAR_2)
  {

    FUNC_2();

    VAR_4->SCR &= (uint32_t)~((uint32_t)VAR_5);
  }
  else
  {

    VAR_4->SCR |= VAR_6;
  }
}
