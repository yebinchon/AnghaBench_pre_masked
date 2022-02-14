
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_6__ {int * rom; } ;
struct TYPE_5__ {TYPE_1__* memory_map; } ;
struct TYPE_4__ {int * base; } ;


 TYPE_3__ VAR_0 ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void FUNC_0(uint32 VAR_2)
{
  int VAR_3;


  if (VAR_2)
  {

    for (VAR_3=0; VAR_3<16; VAR_3++)
    {
      VAR_1.memory_map[VAR_3].base = &VAR_0.rom[(VAR_2 & 0xf) << 16];
    }
  }
  else
  {

    for (VAR_3=0; VAR_3<16; VAR_3++)
    {
      VAR_1.memory_map[VAR_3].base = &VAR_0.rom[(VAR_3 & 0xf) << 16];
    }
  }
}
