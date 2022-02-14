
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int address ;
struct TYPE_4__ {unsigned int pc; TYPE_1__* memory_map; } ;
struct TYPE_3__ {int base; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,unsigned int,char*) ;
 TYPE_2__ VAR_1 ;
 char* FUNC_2 (int ) ;

unsigned int FUNC_3(unsigned int VAR_2)
{



  VAR_2 = VAR_1.pc | (VAR_2 & 1);
  return FUNC_0(VAR_1.memory_map[((VAR_2)>>16)&0xff].base, (VAR_2) & 0xffff);
}
