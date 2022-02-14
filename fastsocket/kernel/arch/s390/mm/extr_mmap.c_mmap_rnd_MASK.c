
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 () ;

__attribute__((used)) static unsigned long FUNC_1(void)
{
 if (!(VAR_2->flags & VAR_1))
  return 0;

 return (FUNC_0() & 0x7ffUL) << VAR_0;
}
