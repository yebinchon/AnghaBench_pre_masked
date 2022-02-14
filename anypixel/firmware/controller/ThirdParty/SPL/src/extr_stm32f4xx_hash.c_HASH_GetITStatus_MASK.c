
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {int SR; int IMR; } ;
typedef int ITStatus ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;

ITStatus FUNC_2(uint8_t VAR_3)
{
  ITStatus VAR_4 = VAR_1;
  uint32_t VAR_5 = 0;


  FUNC_1(FUNC_0(VAR_3));



  VAR_5 = VAR_0->SR;

  if (((VAR_0->IMR & VAR_5) & VAR_3) != VAR_1)
  {

    VAR_4 = VAR_2;
  }
  else
  {

    VAR_4 = VAR_1;
  }

  return VAR_4;
}
