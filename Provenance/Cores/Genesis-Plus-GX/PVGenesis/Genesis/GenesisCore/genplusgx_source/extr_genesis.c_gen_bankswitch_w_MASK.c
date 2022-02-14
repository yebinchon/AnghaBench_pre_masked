
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int base; } ;
struct TYPE_5__ {TYPE_1__* memory_map; } ;
struct TYPE_4__ {int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;

void FUNC_0(unsigned int VAR_5)
{

  if (VAR_4 & VAR_0)
  {
    if (VAR_5 & 1)
    {

      VAR_3.memory_map[0].base = VAR_2.base;
    }
    else
    {

      VAR_3.memory_map[0].base = VAR_1;
    }
  }
}
