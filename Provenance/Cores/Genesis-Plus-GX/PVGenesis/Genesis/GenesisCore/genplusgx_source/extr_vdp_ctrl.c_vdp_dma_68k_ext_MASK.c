
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
typedef int uint16 ;
struct TYPE_4__ {TYPE_1__* memory_map; } ;
struct TYPE_3__ {scalar_t__ base; int (* read16 ) (int) ;} ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_3)
{
  uint16 VAR_4;


  uint32 VAR_5 = (VAR_2[23] << 17) | (VAR_0 << 1);

  do
  {

    if (VAR_1.memory_map[VAR_5>>16].read16)
    {
      VAR_4 = VAR_1.memory_map[VAR_5>>16].read16(VAR_5);
    }
    else
    {
      VAR_4 = *(uint16 *)(VAR_1.memory_map[VAR_5>>16].base + (VAR_5 & 0xFFFF));
    }


    VAR_5 += 2;


    VAR_5 = (VAR_2[23] << 17) | (VAR_5 & 0x1FFFF);


    FUNC_1(VAR_4);
  }
  while (--VAR_3);


  VAR_0 = (VAR_5 >> 1) & 0xffff;
}
