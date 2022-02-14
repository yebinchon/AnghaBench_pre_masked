
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint32 ;
struct TYPE_6__ {int * rom; } ;
struct TYPE_5__ {TYPE_1__* memory_map; } ;
struct TYPE_4__ {int * base; } ;


 TYPE_3__ VAR_0 ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void FUNC_0(uint32 VAR_2, uint32 VAR_3)
{

  VAR_2 = (VAR_2 << 2) & 0x38;


  if (VAR_2)
  {
    uint32 VAR_4;
    uint8 *VAR_5 = VAR_0.rom + (VAR_3 << 19);

    for (VAR_4=0; VAR_4<8; VAR_4++)
    {
      VAR_1.memory_map[VAR_2++].base = VAR_5 + (VAR_4<<16);
    }
  }
}
