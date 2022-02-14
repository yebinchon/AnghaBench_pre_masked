
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int config_file_t ;
struct TYPE_6__ {int config_file_new_entry_cb; } ;
typedef TYPE_2__ config_file_cb_t ;
struct TYPE_7__ {unsigned int loading_cheat_size; unsigned int loading_cheat_offset; TYPE_1__* cheats; } ;
struct TYPE_5__ {unsigned int idx; int state; int big_endian; int memory_search_size; int cheat_type; int * code; int * desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 unsigned int FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (unsigned int,int ) ;
 TYPE_4__ VAR_4 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char const*,TYPE_2__*) ;

bool FUNC_6(const char *VAR_5, bool VAR_6)
{
   config_file_cb_t VAR_7;
   unsigned VAR_8 = 0;
   unsigned VAR_9 = 0;
   unsigned VAR_10 = 0;
   config_file_t *VAR_11 = ((void*)0);

   VAR_7.config_file_new_entry_cb = VAR_2;

   VAR_4.loading_cheat_size = 0;

   VAR_11 = FUNC_5(VAR_5, &VAR_7);

   if (!VAR_11)
      return 0;

   VAR_9 = VAR_4.loading_cheat_size;

   if (VAR_9 == 0)
      goto error;

   FUNC_4(VAR_11);
   VAR_11 = ((void*)0);

   FUNC_0();

   if (VAR_6)
   {
      VAR_8 = FUNC_1();
      if (VAR_8 == 0)
         FUNC_2(VAR_9);
      else
      {
         VAR_9 = VAR_9 + VAR_8;
         if (FUNC_3(VAR_9, VAR_0))
         {
         }
      }
   }
   else
   {
      VAR_8 = 0;
      FUNC_2(VAR_9);
   }

   for (VAR_10 = VAR_8; VAR_4.cheats && VAR_10 < VAR_9; VAR_10++)
   {
      VAR_4.cheats[VAR_10].idx = VAR_10;
      VAR_4.cheats[VAR_10].desc = ((void*)0);
      VAR_4.cheats[VAR_10].code = ((void*)0);
      VAR_4.cheats[VAR_10].state = 0;
      VAR_4.cheats[VAR_10].big_endian = 0;
      VAR_4.cheats[VAR_10].cheat_type = VAR_1;
      VAR_4.cheats[VAR_10].memory_search_size = 3;
   }

   VAR_4.loading_cheat_offset = VAR_8;
   VAR_7.config_file_new_entry_cb = VAR_3;
   VAR_11 = FUNC_5(VAR_5, &VAR_7);

   if (!VAR_11)
      return 0;

   FUNC_4(VAR_11);

   return 1;

error:
   FUNC_4(VAR_11);
   return 0;
}
