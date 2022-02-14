
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;


 unsigned long FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 () ;
 TYPE_1__* VAR_1 ;

unsigned long FUNC_2(unsigned long VAR_2)
{
 unsigned long VAR_3 = FUNC_0(VAR_2 + FUNC_1());

 if (!(VAR_1->flags & VAR_0))
  return VAR_2;
 if (VAR_3 < VAR_2)
  return VAR_2;
 return VAR_3;
}
