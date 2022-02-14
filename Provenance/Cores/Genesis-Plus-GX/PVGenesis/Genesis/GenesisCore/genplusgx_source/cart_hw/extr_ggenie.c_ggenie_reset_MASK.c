
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int rom; int addr; int data; int old; int regs; scalar_t__ enabled; } ;
struct TYPE_5__ {TYPE_1__* memory_map; } ;
struct TYPE_4__ {int * read16; int write16; int write8; int base; } ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_1 (int ,int ,int) ;

void FUNC_2(int VAR_4)
{
  if (VAR_0.enabled)
  {
    if (VAR_4)
    {

      FUNC_0(0);


      FUNC_1(VAR_0.regs,0,sizeof(VAR_0.regs));
      FUNC_1(VAR_0.old,0,sizeof(VAR_0.old));
      FUNC_1(VAR_0.data,0,sizeof(VAR_0.data));
      FUNC_1(VAR_0.addr,0,sizeof(VAR_0.addr));
    }


    VAR_3.memory_map[0].base = VAR_0.rom;


    VAR_3.memory_map[0].write8 = VAR_1;
    VAR_3.memory_map[0].write16 = VAR_2;


    VAR_3.memory_map[0].read16 = ((void*)0);
  }
}
