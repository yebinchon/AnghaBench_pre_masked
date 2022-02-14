
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
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static unsigned long FUNC_2(void)
{
 unsigned long VAR_3 = 0;

 if (VAR_2->flags & VAR_1) {

  if (FUNC_1())
   VAR_3 = (long)(FUNC_0() % (1<<(22-VAR_0)));
  else
   VAR_3 = (long)(FUNC_0() % (1<<(29-VAR_0)));
 }
 return (VAR_3 << VAR_0) * 2;
}
