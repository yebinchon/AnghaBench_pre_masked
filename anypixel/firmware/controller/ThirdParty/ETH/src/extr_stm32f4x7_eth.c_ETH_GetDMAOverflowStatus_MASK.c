
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int DMAMFBOCR; } ;
typedef scalar_t__ FlagStatus ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;

FlagStatus FUNC_2(uint32_t VAR_3)
{
  FlagStatus VAR_4 = VAR_1;

  FUNC_1(FUNC_0(VAR_3));

  if ((VAR_0->DMAMFBOCR & VAR_3) != (uint32_t)VAR_1)
  {
    VAR_4 = VAR_2;
  }
  else
  {
    VAR_4 = VAR_1;
  }
  return VAR_4;
}
