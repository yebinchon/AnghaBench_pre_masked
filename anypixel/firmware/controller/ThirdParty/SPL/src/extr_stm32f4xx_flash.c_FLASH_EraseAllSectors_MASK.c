
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {int CR; } ;
typedef scalar_t__ FLASH_Status ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (int ) ;

FLASH_Status FUNC_3(uint8_t VAR_12)
{
  uint32_t VAR_13 = 0x0;
  FLASH_Status VAR_14 = VAR_2;


  VAR_14 = FUNC_0();
  FUNC_2(FUNC_1(VAR_12));

  if(VAR_12 == VAR_9)
  {
     VAR_13 = VAR_5;
  }
  else if(VAR_12 == VAR_10)
  {
    VAR_13 = VAR_7;
  }
  else if(VAR_12 == VAR_11)
  {
    VAR_13 = VAR_8;
  }
  else
  {
    VAR_13 = VAR_6;
  }
  if(VAR_14 == VAR_2)
  {

     VAR_1->CR &= VAR_0;
     VAR_1->CR |= VAR_13;
     VAR_1->CR |= VAR_3;
     VAR_1->CR |= VAR_4;


    VAR_14 = FUNC_0();


    VAR_1->CR &= (~VAR_3);

  }

  return VAR_14;
}
