
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int size; TYPE_1__* cheats; } ;
struct TYPE_3__ {unsigned int address; unsigned int address_mask; unsigned int memory_search_size; unsigned int value; int big_endian; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int ) ;
 TYPE_2__ VAR_1 ;

bool FUNC_2(unsigned int VAR_2, unsigned int VAR_3, unsigned int VAR_4,
      bool VAR_5, unsigned int VAR_6)
{
   int VAR_7 = FUNC_0() + 1;

   if (!FUNC_1(VAR_7, VAR_0))
      return 0;

   VAR_1.cheats[VAR_1.size - 1].address = VAR_3;
   VAR_1.cheats[VAR_1.size - 1].address_mask = VAR_4;
   VAR_1.cheats[VAR_1.size - 1].memory_search_size = VAR_2;
   VAR_1.cheats[VAR_1.size - 1].value = VAR_6;
   VAR_1.cheats[VAR_1.size - 1].big_endian = VAR_5;

   return 1;
}
