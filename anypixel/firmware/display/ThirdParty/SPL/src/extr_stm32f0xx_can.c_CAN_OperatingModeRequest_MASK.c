
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ MCR; int MSR; } ;
typedef TYPE_1__ CAN_TypeDef ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;

uint8_t FUNC_3(CAN_TypeDef* VAR_11, uint8_t VAR_12)
{
  uint8_t VAR_13 = VAR_5;


  uint32_t VAR_14 = VAR_10;


  FUNC_2(FUNC_0(VAR_11));
  FUNC_2(FUNC_1(VAR_12));

  if (VAR_12 == VAR_7)
  {

    VAR_11->MCR = (uint32_t)((VAR_11->MCR & (uint32_t)(~(uint32_t)VAR_1)) | VAR_0);


    while (((VAR_11->MSR & VAR_2) != VAR_3) && (VAR_14 != 0))
    {
      VAR_14--;
    }
    if ((VAR_11->MSR & VAR_2) != VAR_3)
    {
      VAR_13 = VAR_5;
    }
    else
    {
      VAR_13 = VAR_6;
    }
  }
  else if (VAR_12 == VAR_8)
  {

    VAR_11->MCR &= (uint32_t)(~(VAR_1|VAR_0));


    while (((VAR_11->MSR & VAR_2) != 0) && (VAR_14!=0))
    {
      VAR_14--;
    }
    if ((VAR_11->MSR & VAR_2) != 0)
    {
      VAR_13 = VAR_5;
    }
    else
    {
      VAR_13 = VAR_6;
    }
  }
  else if (VAR_12 == VAR_9)
  {

    VAR_11->MCR = (uint32_t)((VAR_11->MCR & (uint32_t)(~(uint32_t)VAR_0)) | VAR_1);


    while (((VAR_11->MSR & VAR_2) != VAR_4) && (VAR_14!=0))
    {
      VAR_14--;
    }
    if ((VAR_11->MSR & VAR_2) != VAR_4)
    {
      VAR_13 = VAR_5;
    }
    else
    {
      VAR_13 = VAR_6;
    }
  }
  else
  {
    VAR_13 = VAR_5;
  }

  return (uint8_t) VAR_13;
}
