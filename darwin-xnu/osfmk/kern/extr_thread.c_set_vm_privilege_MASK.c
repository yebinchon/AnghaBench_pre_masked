
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ boolean_t ;
struct TYPE_2__ {int options; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_0 () ;

boolean_t
FUNC_1(boolean_t VAR_3)
{
 boolean_t VAR_4;

 if (FUNC_0()->options & VAR_1)
  VAR_4 = VAR_2;
 else
  VAR_4 = VAR_0;

 if (VAR_3 != VAR_0)
  FUNC_0()->options |= VAR_1;
 else
  FUNC_0()->options &= ~VAR_1;

 return (VAR_4);
}
