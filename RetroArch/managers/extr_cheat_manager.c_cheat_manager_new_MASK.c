
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct item_cheat {int state; int repeat_count; int repeat_add_to_address; scalar_t__ repeat_add_to_value; int * code; int * desc; } ;
struct TYPE_2__ {unsigned int buf_size; unsigned int size; int search_bit_size; struct item_cheat* cheats; } ;


 scalar_t__ FUNC_0 (unsigned int,int) ;
 int FUNC_1 () ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_2(unsigned VAR_1)
{
   unsigned VAR_2;

   FUNC_1();

   VAR_0.buf_size = VAR_1;
   VAR_0.size = VAR_1;
   VAR_0.search_bit_size = 3;
   VAR_0.cheats = (struct item_cheat*)
         FUNC_0(VAR_0.buf_size, sizeof(struct item_cheat));

   if (!VAR_0.cheats)
   {
      VAR_0.buf_size = 0;
      VAR_0.size = 0;
      VAR_0.cheats = ((void*)0);
      return;
   }

   for (VAR_2 = 0; VAR_2 < VAR_0.size; VAR_2++)
   {
      VAR_0.cheats[VAR_2].desc = ((void*)0);
      VAR_0.cheats[VAR_2].code = ((void*)0);
      VAR_0.cheats[VAR_2].state = 0;
      VAR_0.cheats[VAR_2].repeat_count = 1;
      VAR_0.cheats[VAR_2].repeat_add_to_value = 0;
      VAR_0.cheats[VAR_2].repeat_add_to_address = 1;
   }
}
