
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_6__ {scalar_t__ rom; } ;
struct TYPE_5__ {TYPE_1__* memory_map; } ;
struct TYPE_4__ {scalar_t__ base; } ;


 TYPE_3__ VAR_0 ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void FUNC_0(uint32 VAR_2, uint32 VAR_3)
{
  int VAR_4;
  if (VAR_3 & 0x80)
  {

    for (VAR_4=0x20; VAR_4<0x3C; VAR_4++)
    {
      VAR_1.memory_map[VAR_4].base = VAR_0.rom + ((VAR_4 & 0x1F) << 16);
    }
  }
  else
  {

    for (VAR_4=0x20; VAR_4<0x3C; VAR_4++)
    {
      VAR_1.memory_map[VAR_4].base = VAR_0.rom + (VAR_4 << 16);
    }
  }
}
