
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int loading_cheat_offset; unsigned int size; TYPE_1__* cheats; } ;
struct TYPE_3__ {unsigned int address; unsigned int address_mask; int big_endian; unsigned int cheat_type; int state; unsigned int handler; unsigned int memory_search_size; unsigned int repeat_add_to_address; unsigned int repeat_add_to_value; unsigned int repeat_count; unsigned int rumble_port; unsigned int rumble_primary_duration; unsigned int rumble_primary_strength; unsigned int rumble_secondary_duration; unsigned int rumble_secondary_strength; unsigned int rumble_type; unsigned int rumble_value; unsigned int value; void* desc; void* code; } ;


 TYPE_2__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 size_t FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 scalar_t__ FUNC_4 (char*,int *,int ) ;

__attribute__((used)) static void FUNC_5(char *VAR_2, char *VAR_3)
{
   char VAR_4[20];
   unsigned VAR_5;
   unsigned VAR_6;
   unsigned VAR_7 = 5;
   size_t VAR_8 = 0;
   VAR_1 = 0;

   if (FUNC_3(VAR_2, "cheat", 5) != 0)
      return;

   VAR_8 = FUNC_2((const char*)VAR_2);

   while (VAR_7 < VAR_8 && VAR_2[VAR_7] >= '0' && VAR_2[VAR_7] <= '9' && VAR_7 < 24)
   {
      VAR_4[VAR_7 - 5] = VAR_2[VAR_7];
      VAR_7++;
   }

   VAR_4[VAR_7 - 5] = '\0';

   VAR_5 = (unsigned)FUNC_4(VAR_4, ((void*)0), 0);

   if (VAR_5 + VAR_0.loading_cheat_offset >= VAR_0.size)
      return;

   VAR_2 = VAR_2 + VAR_7 + 1;

   VAR_6 = VAR_5 + VAR_0.loading_cheat_offset;

   if (FUNC_1(VAR_2, "address"))
      VAR_0.cheats[VAR_6].address = (unsigned)FUNC_4(VAR_3, ((void*)0), 0);
   else if (FUNC_1(VAR_2, "address_bit_position"))
      VAR_0.cheats[VAR_6].address_mask = (unsigned)FUNC_4(VAR_3, ((void*)0), 0);
   else if (FUNC_1(VAR_2, "big_endian"))
      VAR_0.cheats[VAR_6].big_endian = (FUNC_1(VAR_3, "true") || FUNC_1(VAR_3, "1"));
   else if (FUNC_1(VAR_2, "cheat_type"))
      VAR_0.cheats[VAR_6].cheat_type = (unsigned)FUNC_4(VAR_3, ((void*)0), 0);
   else if (FUNC_1(VAR_2, "code"))
      VAR_0.cheats[VAR_6].code = FUNC_0(VAR_3);
   else if (FUNC_1(VAR_2, "desc"))
      VAR_0.cheats[VAR_6].desc = FUNC_0(VAR_3);
   else if (FUNC_1(VAR_2, "enable"))
      VAR_0.cheats[VAR_6].state = (FUNC_1(VAR_3, "true") || FUNC_1(VAR_3, "1"));
   else if (FUNC_1(VAR_2, "handler"))
      VAR_0.cheats[VAR_6].handler = (unsigned)FUNC_4(VAR_3, ((void*)0), 0);
   else if (FUNC_1(VAR_2, "memory_search_size"))
      VAR_0.cheats[VAR_6].memory_search_size = (unsigned)FUNC_4(VAR_3, ((void*)0), 0);
   else if (FUNC_1(VAR_2, "repeat_add_to_address"))
      VAR_0.cheats[VAR_6].repeat_add_to_address = (unsigned)FUNC_4(VAR_3, ((void*)0), 0);
   else if (FUNC_1(VAR_2, "repeat_add_to_value"))
      VAR_0.cheats[VAR_6].repeat_add_to_value = (unsigned)FUNC_4(VAR_3, ((void*)0), 0);
   else if (FUNC_1(VAR_2, "repeat_count"))
      VAR_0.cheats[VAR_6].repeat_count = (unsigned)FUNC_4(VAR_3, ((void*)0), 0);
   else if (FUNC_1(VAR_2, "rumble_port"))
      VAR_0.cheats[VAR_6].rumble_port = (unsigned)FUNC_4(VAR_3, ((void*)0), 0);
   else if (FUNC_1(VAR_2, "rumble_primary_duration"))
      VAR_0.cheats[VAR_6].rumble_primary_duration = (unsigned)FUNC_4(VAR_3, ((void*)0), 0);
   else if (FUNC_1(VAR_2, "rumble_primary_strength"))
      VAR_0.cheats[VAR_6].rumble_primary_strength = (unsigned)FUNC_4(VAR_3, ((void*)0), 0);
   else if (FUNC_1(VAR_2, "rumble_secondary_duration"))
      VAR_0.cheats[VAR_6].rumble_secondary_duration = (unsigned)FUNC_4(VAR_3, ((void*)0), 0);
   else if (FUNC_1(VAR_2, "rumble_secondary_strength"))
      VAR_0.cheats[VAR_6].rumble_secondary_strength = (unsigned)FUNC_4(VAR_3, ((void*)0), 0);
   else if (FUNC_1(VAR_2, "rumble_type"))
      VAR_0.cheats[VAR_6].rumble_type = (unsigned)FUNC_4(VAR_3, ((void*)0), 0);
   else if (FUNC_1(VAR_2, "rumble_value"))
      VAR_0.cheats[VAR_6].rumble_value = (unsigned)FUNC_4(VAR_3, ((void*)0), 0);
   else if (FUNC_1(VAR_2, "value"))
      VAR_0.cheats[VAR_6].value = (unsigned)FUNC_4(VAR_3, ((void*)0), 0);
}
