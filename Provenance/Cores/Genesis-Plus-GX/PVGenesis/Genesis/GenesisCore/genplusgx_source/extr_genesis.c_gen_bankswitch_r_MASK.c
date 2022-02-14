
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ base; } ;
struct TYPE_5__ {TYPE_1__* memory_map; } ;
struct TYPE_4__ {scalar_t__ base; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;

unsigned int FUNC_0(void)
{

  if (VAR_3 & VAR_0)
  {
    return (VAR_2.memory_map[0].base == VAR_1.base);
  }

  return 0xff;
}
