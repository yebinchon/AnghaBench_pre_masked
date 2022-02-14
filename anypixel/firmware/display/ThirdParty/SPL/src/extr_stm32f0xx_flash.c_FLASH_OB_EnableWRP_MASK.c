
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_4__ {int CR; } ;
struct TYPE_3__ {int WRP0; int WRP1; int WRP2; int WRP3; } ;
typedef scalar_t__ FLASH_Status ;


 TYPE_2__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;

FLASH_Status FUNC_3(uint32_t VAR_7)
{
 uint16_t VAR_8 = 0xFFFF, VAR_9 = 0xFFFF, VAR_10 = 0xFFFF, VAR_11 = 0xFFFF;

  FLASH_Status VAR_12 = VAR_1;


  FUNC_2(FUNC_1(VAR_7));

  VAR_7 = (uint32_t)(~VAR_7);
  VAR_8 = (uint16_t)(VAR_7 & VAR_6);
  VAR_9 = (uint16_t)((VAR_7 >> 8) & VAR_6);
  VAR_10 = (uint16_t)((VAR_7 >> 16) & VAR_6) ;
  VAR_11 = (uint16_t)((VAR_7 >> 24) & VAR_6) ;


  VAR_12 = FUNC_0(VAR_3);

  if(VAR_12 == VAR_1)
  {
    VAR_0->CR |= VAR_2;

    if(VAR_8 != 0xFF)
    {
      VAR_5->WRP0 = VAR_8;


      VAR_12 = FUNC_0(VAR_3);
    }
    if((VAR_12 == VAR_1) && (VAR_9 != 0xFF))
    {
      VAR_5->WRP1 = VAR_9;


      VAR_12 = FUNC_0(VAR_3);
    }
    if((VAR_12 == VAR_1) && (VAR_10 != 0xFF))
    {
      VAR_5->WRP2 = VAR_10;


      VAR_12 = FUNC_0(VAR_3);
    }
    if((VAR_12 == VAR_1) && (VAR_11 != 0xFF))
    {
      VAR_5->WRP3 = VAR_11;


      VAR_12 = FUNC_0(VAR_3);
    }
    if(VAR_12 != VAR_4)
    {

      VAR_0->CR &= ~VAR_2;
    }
  }

  return VAR_12;
}
