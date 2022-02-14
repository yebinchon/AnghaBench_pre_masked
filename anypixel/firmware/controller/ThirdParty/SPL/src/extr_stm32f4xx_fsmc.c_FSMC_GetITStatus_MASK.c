
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_6__ {scalar_t__ SR2; } ;
struct TYPE_5__ {scalar_t__ SR3; } ;
struct TYPE_4__ {scalar_t__ SR4; } ;
typedef scalar_t__ ITStatus ;


 TYPE_3__* VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ) ;

ITStatus FUNC_3(uint32_t VAR_7, uint32_t VAR_8)
{
  ITStatus VAR_9 = VAR_5;
  uint32_t VAR_10 = 0x0, VAR_11 = 0x0, VAR_12 = 0x0;


  FUNC_2(FUNC_1(VAR_7));
  FUNC_2(FUNC_0(VAR_8));

  if(VAR_7 == VAR_1)
  {
    VAR_10 = VAR_0->SR2;
  }
  else if(VAR_7 == VAR_3)
  {
    VAR_10 = VAR_2->SR3;
  }

  else
  {
    VAR_10 = VAR_4->SR4;
  }

  VAR_11 = VAR_10 & VAR_8;

  VAR_12 = VAR_10 & (VAR_8 >> 3);
  if ((VAR_11 != (uint32_t)VAR_5) && (VAR_12 != (uint32_t)VAR_5))
  {
    VAR_9 = VAR_6;
  }
  else
  {
    VAR_9 = VAR_5;
  }
  return VAR_9;
}
