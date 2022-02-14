
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ FLASH_Status ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_2 ;

FLASH_Status FUNC_1(uint32_t VAR_3)
{
  FLASH_Status VAR_4 = VAR_1;


  VAR_4 = FUNC_0();


  while((VAR_4 == VAR_0) && (VAR_3 != 0x00))
  {
    VAR_4 = FUNC_0();
    VAR_3--;
  }

  if(VAR_3 == 0x00 )
  {
    VAR_4 = VAR_2;
  }

  return VAR_4;
}
