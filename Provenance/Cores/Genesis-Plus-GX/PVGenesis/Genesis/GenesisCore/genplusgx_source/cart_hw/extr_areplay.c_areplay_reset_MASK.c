
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ status; int ram; int rom; int addr; int data; int old; int regs; scalar_t__ enabled; } ;
struct TYPE_5__ {TYPE_1__* memory_map; } ;
struct TYPE_4__ {int base; } ;


 scalar_t__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (int ,int,int) ;

void FUNC_1(int VAR_3)
{
  if (VAR_1.enabled)
  {
    if (VAR_3 || (VAR_1.status == VAR_0))
    {

      FUNC_0(VAR_1.regs, 0, sizeof(VAR_1.regs));
      FUNC_0(VAR_1.old, 0, sizeof(VAR_1.old));
      FUNC_0(VAR_1.data, 0, sizeof(VAR_1.data));
      FUNC_0(VAR_1.addr, 0, sizeof(VAR_1.addr));


      VAR_2.memory_map[0].base = VAR_1.rom;


      if (VAR_3)
      {
        FUNC_0(VAR_1.ram,0xff,0x10000);
      }
    }
  }
}
