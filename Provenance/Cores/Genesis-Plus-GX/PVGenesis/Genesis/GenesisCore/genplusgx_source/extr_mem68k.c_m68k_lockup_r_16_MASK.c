
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int uint16 ;
typedef scalar_t__ address ;
struct TYPE_6__ {int force_dtack; } ;
struct TYPE_5__ {unsigned int pc; TYPE_1__* memory_map; int cycle_end; int cycles; } ;
struct TYPE_4__ {scalar_t__ base; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (char*,unsigned int,char*) ;
 TYPE_2__ VAR_2 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 () ;

unsigned int FUNC_3 (unsigned int VAR_3)
{



  if (!VAR_1.force_dtack)
  {
    FUNC_2();
    VAR_2.cycles = VAR_2.cycle_end;
  }
  VAR_3 = VAR_2.pc;
  return *(uint16 *)(VAR_2.memory_map[((VAR_3)>>16)&0xff].base + ((VAR_3) & 0xffff));
}
