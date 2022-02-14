
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_6__ {TYPE_1__* memory_map; } ;
struct TYPE_5__ {int * write; } ;
struct TYPE_4__ {int * write16; int * write8; } ;


 TYPE_3__ VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 TYPE_2__* VAR_3 ;
 int * VAR_4 ;

__attribute__((used)) static void FUNC_0(uint32 VAR_5, uint32 VAR_6)
{
  if ((VAR_5 & 0xff) == 0xf1)
  {
    int VAR_7;
    if (VAR_6 & 1)
    {

      for (VAR_7=0; VAR_7<0x40; VAR_7++)
      {
        VAR_0.memory_map[VAR_7].write8 = VAR_2;
        VAR_0.memory_map[VAR_7].write16 = VAR_1;
        VAR_3[VAR_7].write = VAR_4;
      }
    }
    else
    {

      for (VAR_7=0; VAR_7<0x40; VAR_7++)
      {
        VAR_0.memory_map[VAR_7].write8 = ((void*)0);
        VAR_0.memory_map[VAR_7].write16 = ((void*)0);
        VAR_3[VAR_7].write = ((void*)0);
      }
    }
  }
}
