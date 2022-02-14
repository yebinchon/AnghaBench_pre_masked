
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_8__ {int* regs; scalar_t__ status; } ;
struct TYPE_7__ {int rom; } ;
struct TYPE_6__ {TYPE_1__* memory_map; } ;
struct TYPE_5__ {int base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_4__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_3__ VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(uint32 VAR_5, uint32 VAR_6)
{

  int VAR_7 = (VAR_5 & 0xffff) >> 1;
  if (VAR_7 > 12)
  {
    FUNC_1(VAR_5,VAR_6);
    return;
  }


  VAR_2.regs[VAR_7] = VAR_6;


  if (VAR_2.regs[3] == 0xffff)
  {

    if (VAR_2.status == VAR_1)
    {

      FUNC_0(VAR_0);
      FUNC_0(VAR_1);
    }


    VAR_4.memory_map[0].base = VAR_3.rom;
  }
}
