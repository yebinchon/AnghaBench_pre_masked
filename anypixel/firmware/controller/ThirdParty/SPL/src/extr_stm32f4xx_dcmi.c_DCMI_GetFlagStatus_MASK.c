
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_2__ {int RISR; int SR; int MISR; } ;
typedef scalar_t__ FlagStatus ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;

FlagStatus FUNC_2(uint16_t VAR_3)
{
  FlagStatus VAR_4 = VAR_1;
  uint32_t VAR_5, VAR_6 = 0;


  FUNC_1(FUNC_0(VAR_3));


  VAR_5 = (((uint16_t)VAR_3) >> 12);

  if (VAR_5 == 0x01)
  {
    VAR_6= VAR_0->RISR;
  }
  else if (VAR_5 == 0x02)
  {
    VAR_6 = VAR_0->SR;
  }
  else
  {
    VAR_6 = VAR_0->MISR;
  }

  if ((VAR_6 & VAR_3) != (uint16_t)VAR_1 )
  {
    VAR_4 = VAR_2;
  }
  else
  {
    VAR_4 = VAR_1;
  }

  return VAR_4;
}
