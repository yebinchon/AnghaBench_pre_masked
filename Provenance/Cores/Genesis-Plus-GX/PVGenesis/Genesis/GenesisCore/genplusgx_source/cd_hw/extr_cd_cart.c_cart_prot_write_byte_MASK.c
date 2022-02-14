
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* memory_map; } ;
struct TYPE_7__ {unsigned int prot; } ;
struct TYPE_9__ {TYPE_2__ cartridge; } ;
struct TYPE_8__ {void* write; } ;
struct TYPE_6__ {int write16; void* write8; } ;


 void* VAR_0 ;
 int VAR_1 ;
 TYPE_5__ VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 TYPE_4__ VAR_5 ;
 TYPE_3__* VAR_6 ;
 void* VAR_7 ;

__attribute__((used)) static void FUNC_0(unsigned int VAR_8, unsigned int VAR_9)
{

  if (VAR_8 & 1)
  {
    int VAR_10;

    if (VAR_9 & 1)
    {

      for (VAR_10=0x60; VAR_10<0x70; VAR_10++)
      {
        VAR_2.memory_map[VAR_10].write8 = VAR_0;
        VAR_2.memory_map[VAR_10].write16 = VAR_1;
        VAR_6[VAR_10].write = VAR_0;
      }
    }
    else
    {

      for (VAR_10=0x60; VAR_10<0x70; VAR_10++)
      {
        VAR_2.memory_map[VAR_10].write8 = VAR_4;
        VAR_2.memory_map[VAR_10].write16 = VAR_3;
        VAR_6[VAR_10].write = VAR_7;
      }
    }

    VAR_5.cartridge.prot = VAR_9;
  }
}
