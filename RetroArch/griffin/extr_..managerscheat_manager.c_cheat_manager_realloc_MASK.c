
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct item_cheat {int state; unsigned int handler; int memory_search_size; unsigned int idx; int repeat_count; int repeat_add_to_address; scalar_t__ repeat_add_to_value; int cheat_type; scalar_t__ desc; scalar_t__ code; } ;
struct TYPE_2__ {unsigned int size; unsigned int buf_size; struct item_cheat* cheats; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int,int) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct item_cheat*,int ,int) ;
 scalar_t__ FUNC_3 (struct item_cheat*,unsigned int) ;

bool FUNC_4(unsigned VAR_2, unsigned VAR_3)
{
   unsigned VAR_4;
   unsigned VAR_5 = 0;

   if (!VAR_1.cheats)
   {
      VAR_1.cheats = (struct item_cheat*)
            FUNC_0(VAR_2, sizeof(struct item_cheat));
      VAR_5 = 0;
   }
   else
   {
      struct item_cheat *VAR_6 = ((void*)0);
      VAR_5 = VAR_1.size;


      for (VAR_4 = VAR_2; VAR_4 < VAR_5; VAR_4++)
      {
         if (VAR_1.cheats[VAR_4].code)
            FUNC_1(VAR_1.cheats[VAR_4].code);
         if (VAR_1.cheats[VAR_4].desc)
            FUNC_1(VAR_1.cheats[VAR_4].desc);
      }

      VAR_6 = (struct item_cheat*)
            FUNC_3(VAR_1.cheats,
            VAR_2 * sizeof(struct item_cheat));

      VAR_1.cheats = VAR_6 ? VAR_6 : ((void*)0);
   }

   if (!VAR_1.cheats)
   {
      VAR_1.buf_size = VAR_1.size = 0;
      VAR_1.cheats = ((void*)0);
      return 0;
   }

   VAR_1.buf_size = VAR_2;
   VAR_1.size = VAR_2;

   for (VAR_4 = VAR_5; VAR_4 < VAR_1.size; VAR_4++)
   {
      FUNC_2(&(VAR_1.cheats[VAR_4]), 0, sizeof(VAR_1.cheats[VAR_4]));
      VAR_1.cheats[VAR_4].state = 0;
      VAR_1.cheats[VAR_4].handler = VAR_3;
      VAR_1.cheats[VAR_4].cheat_type = VAR_0;
      VAR_1.cheats[VAR_4].memory_search_size = 3;
      VAR_1.cheats[VAR_4].idx = VAR_4;
      VAR_1.cheats[VAR_4].repeat_count = 1;
      VAR_1.cheats[VAR_4].repeat_add_to_value = 0;
      VAR_1.cheats[VAR_4].repeat_add_to_address = 1;
   }

   return 1;
}
