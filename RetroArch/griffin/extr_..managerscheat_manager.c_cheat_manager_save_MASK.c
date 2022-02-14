
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef int key ;
typedef int endian_key ;
typedef int enable_key ;
typedef int desc_key ;
struct TYPE_14__ {int guaranteed_no_duplicates; } ;
typedef TYPE_2__ config_file_t ;
typedef int code_key ;
typedef int cheats_file ;
typedef int buf ;
struct TYPE_13__ {unsigned int handler; unsigned int memory_search_size; unsigned int cheat_type; unsigned int value; unsigned int address; unsigned int address_mask; unsigned int rumble_type; unsigned int rumble_value; unsigned int rumble_port; unsigned int rumble_primary_strength; unsigned int rumble_primary_duration; unsigned int rumble_secondary_strength; unsigned int rumble_secondary_duration; unsigned int repeat_count; unsigned int repeat_add_to_value; unsigned int repeat_add_to_address; int big_endian; int state; int code; int desc; } ;
struct TYPE_12__ {unsigned int size; TYPE_1__* cheats; } ;


 int VAR_0 ;
 TYPE_11__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 () ;
 TYPE_2__* FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*,char*,int) ;
 int FUNC_4 (TYPE_2__*,char*,int ) ;
 int FUNC_5 (TYPE_2__*,char*,unsigned int) ;
 int FUNC_6 (TYPE_2__*,char*,int ) ;
 int FUNC_7 (TYPE_2__*,char*,unsigned int) ;
 int FUNC_8 (char*,char const*,char const*,int) ;
 int FUNC_9 (char*,char*,char*,int) ;
 int FUNC_10 (char*,int,char*,unsigned int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,char const*,int) ;

bool FUNC_13(const char *VAR_2, const char *VAR_3, bool VAR_4)
{
   bool VAR_5;
   unsigned VAR_6;
   char VAR_7[VAR_0];
   char VAR_8[VAR_0];
   config_file_t *VAR_9 = ((void*)0);
   unsigned int* VAR_10[16] = { ((void*)0)};
   char* VAR_11[16] = {
      (char*)"cheat%u_handler",
      (char*)"cheat%u_memory_search_size",
      (char*)"cheat%u_cheat_type",
      (char*)"cheat%u_value",
      (char*)"cheat%u_address",
      (char*)"cheat%u_address_bit_position",
      (char*)"cheat%u_rumble_type",
      (char*)"cheat%u_rumble_value",
      (char*)"cheat%u_rumble_port",
      (char*)"cheat%u_rumble_primary_strength",
      (char*)"cheat%u_rumble_primary_duration",
      (char*)"cheat%u_rumble_secondary_strength",
      (char*)"cheat%u_rumble_secondary_duration",
      (char*)"cheat%u_repeat_count",
      (char*)"cheat%u_repeat_add_to_value",
      (char*)"cheat%u_repeat_add_to_address"
   };

   VAR_7[0] = VAR_8[0] = '\0';

   if ((!VAR_1.cheats) || VAR_1.size == 0)
      return 0;

   if (!VAR_3)
      FUNC_12(VAR_8, VAR_2, sizeof(VAR_8));
   else
   {
      FUNC_8(VAR_7, VAR_3, VAR_2, sizeof(VAR_7));

      FUNC_9(VAR_8, VAR_7, ".cht", sizeof(VAR_8));
   }

   if (!VAR_4)
      VAR_9 = FUNC_2(VAR_8);

   if (!VAR_9)
      if (!(VAR_9 = FUNC_1()))
         return 0;

   VAR_9->guaranteed_no_duplicates = 1;

   FUNC_5(VAR_9, "cheats", VAR_1.size);

   for (VAR_6 = 0; VAR_6 < VAR_1.size; VAR_6++)
   {
      unsigned VAR_12;
      char VAR_13[100];
      char VAR_14[256];
      char VAR_15[256];
      char VAR_16[256];
      char VAR_17[256];

      VAR_14[0] = VAR_13[0] = VAR_15[0] = VAR_16[0] = VAR_17[0] = '\0';

      FUNC_10(VAR_13, sizeof(VAR_13), "cheat%u_big_endian", VAR_6);
      FUNC_10(VAR_15, sizeof(VAR_15), "cheat%u_desc", VAR_6);
      FUNC_10(VAR_16, sizeof(VAR_16), "cheat%u_code", VAR_6);
      FUNC_10(VAR_17, sizeof(VAR_17), "cheat%u_enable", VAR_6);

      if (!FUNC_11(VAR_1.cheats[VAR_6].desc))
         FUNC_6(VAR_9, VAR_15, VAR_1.cheats[VAR_6].desc);
      else
         FUNC_6(VAR_9, VAR_15, VAR_1.cheats[VAR_6].code);

      FUNC_6(VAR_9, VAR_16, VAR_1.cheats[VAR_6].code);
      FUNC_4(VAR_9, VAR_17, VAR_1.cheats[VAR_6].state);
      FUNC_4(VAR_9, VAR_13, VAR_1.cheats[VAR_6].big_endian);

      VAR_10[0] = &VAR_1.cheats[VAR_6].handler;
      VAR_10[1] = &VAR_1.cheats[VAR_6].memory_search_size;
      VAR_10[2] = &VAR_1.cheats[VAR_6].cheat_type;
      VAR_10[3] = &VAR_1.cheats[VAR_6].value;
      VAR_10[4] = &VAR_1.cheats[VAR_6].address;
      VAR_10[5] = &VAR_1.cheats[VAR_6].address_mask;
      VAR_10[6] = &VAR_1.cheats[VAR_6].rumble_type;
      VAR_10[7] = &VAR_1.cheats[VAR_6].rumble_value;
      VAR_10[8] = &VAR_1.cheats[VAR_6].rumble_port;
      VAR_10[9] = &VAR_1.cheats[VAR_6].rumble_primary_strength;
      VAR_10[10] = &VAR_1.cheats[VAR_6].rumble_primary_duration;
      VAR_10[11] = &VAR_1.cheats[VAR_6].rumble_secondary_strength;
      VAR_10[12] = &VAR_1.cheats[VAR_6].rumble_secondary_duration;
      VAR_10[13] = &VAR_1.cheats[VAR_6].repeat_count;
      VAR_10[14] = &VAR_1.cheats[VAR_6].repeat_add_to_value;
      VAR_10[15] = &VAR_1.cheats[VAR_6].repeat_add_to_address;

      for (VAR_12 = 0; VAR_12 < 16; VAR_12++)
      {
         VAR_14[0] = '\0';
         FUNC_10(VAR_14, sizeof(VAR_14), VAR_11[VAR_12], VAR_6);
         FUNC_7(VAR_9, VAR_14, *(VAR_10[VAR_12]));
      }

   }

   VAR_5 = FUNC_3(VAR_9, VAR_8, 1);
   FUNC_0(VAR_9);

   return VAR_5;
}
