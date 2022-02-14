
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int personality; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static unsigned long FUNC_0(void)
{
 if (!(VAR_4->flags & VAR_2))
  return 0;
 if (VAR_4->personality & VAR_0)
  return 0;
 return VAR_3 << VAR_1;
}
