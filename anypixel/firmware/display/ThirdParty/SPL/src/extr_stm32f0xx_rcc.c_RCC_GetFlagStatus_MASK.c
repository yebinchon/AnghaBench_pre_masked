
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {int CR; int BDCR; int CSR; int CR2; } ;
typedef scalar_t__ FlagStatus ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;

FlagStatus FUNC_2(uint8_t VAR_4)
{
  uint32_t VAR_5 = 0;
  uint32_t VAR_6 = 0;
  FlagStatus VAR_7 = VAR_2;


  FUNC_1(FUNC_0(VAR_4));


  VAR_5 = VAR_4 >> 5;

  if (VAR_5 == 0)
  {
    VAR_6 = VAR_1->CR;
  }
  else if (VAR_5 == 1)
  {
    VAR_6 = VAR_1->BDCR;
  }
  else if (VAR_5 == 2)
  {
    VAR_6 = VAR_1->CSR;
  }
  else
  {
    VAR_6 = VAR_1->CR2;
  }


  VAR_5 = VAR_4 & VAR_0;

  if ((VAR_6 & ((uint32_t)1 << VAR_5)) != (uint32_t)VAR_2)
  {
    VAR_7 = VAR_3;
  }
  else
  {
    VAR_7 = VAR_2;
  }

  return VAR_7;
}
