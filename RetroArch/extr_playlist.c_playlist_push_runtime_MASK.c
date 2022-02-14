
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct playlist_entry {char* core_path; char* path; char* runtime_str; char* last_played_str; int last_played_second; int last_played_minute; int last_played_hour; int last_played_day; int last_played_month; int last_played_year; int runtime_seconds; int runtime_minutes; int runtime_hours; int runtime_status; } ;
typedef int real_path ;
typedef int real_core_path ;
struct TYPE_3__ {size_t size; int cap; int modified; struct playlist_entry* entries; } ;
typedef TYPE_1__ playlist_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct playlist_entry*,struct playlist_entry*,int) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (struct playlist_entry*) ;
 scalar_t__ FUNC_5 (char*,char const*) ;
 void* FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char const*) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,char*,int) ;

bool FUNC_10(playlist_t *VAR_1,
      const struct playlist_entry *VAR_2)
{
   size_t VAR_3;
   char VAR_4[VAR_0];
   char VAR_5[VAR_0];

   VAR_4[0] = '\0';
   VAR_5[0] = '\0';

   if (!VAR_1 || !VAR_2)
      return 0;

   if (FUNC_7(VAR_2->core_path))
   {
      FUNC_0("cannot push NULL or empty core path into the playlist.\n");
      return 0;
   }


   if (!FUNC_7(VAR_2->path))
   {
      FUNC_9(VAR_4, VAR_2->path, sizeof(VAR_4));
      FUNC_2(VAR_4, sizeof(VAR_4), 1);
   }


   FUNC_9(VAR_5, VAR_2->core_path, sizeof(VAR_5));
   if (!FUNC_8(VAR_5, "DETECT"))
      FUNC_2(VAR_5, sizeof(VAR_5), 1);

   if (FUNC_7(VAR_5))
   {
      FUNC_0("cannot push NULL or empty core path into the playlist.\n");
      return 0;
   }

   for (VAR_3 = 0; VAR_3 < VAR_1->size; VAR_3++)
   {
      struct playlist_entry VAR_6;
      const char *VAR_7 = VAR_1->entries[VAR_3].path;
      bool VAR_8 =
         (FUNC_7(VAR_4) && FUNC_7(VAR_7)) ||
         FUNC_5(VAR_4, VAR_7);



      if (!VAR_8)
         continue;

      if (!FUNC_3(VAR_5, VAR_1->entries[VAR_3].core_path))
         continue;



      if (VAR_3 == 0)
         return 0;


      VAR_6 = VAR_1->entries[VAR_3];
      FUNC_1(VAR_1->entries + 1, VAR_1->entries,
            VAR_3 * sizeof(struct playlist_entry));
      VAR_1->entries[0] = VAR_6;

      goto success;
   }

   if (VAR_1->size == VAR_1->cap)
   {
      struct playlist_entry *VAR_9 = &VAR_1->entries[VAR_1->cap - 1];

      if (VAR_9)
         FUNC_4(VAR_9);
      VAR_1->size--;
   }

   if (VAR_1->entries)
   {
      FUNC_1(VAR_1->entries + 1, VAR_1->entries,
            (VAR_1->cap - 1) * sizeof(struct playlist_entry));

      VAR_1->entries[0].path = ((void*)0);
      VAR_1->entries[0].core_path = ((void*)0);

      if (!FUNC_7(VAR_4))
         VAR_1->entries[0].path = FUNC_6(VAR_4);
      if (!FUNC_7(VAR_5))
         VAR_1->entries[0].core_path = FUNC_6(VAR_5);

      VAR_1->entries[0].runtime_status = VAR_2->runtime_status;
      VAR_1->entries[0].runtime_hours = VAR_2->runtime_hours;
      VAR_1->entries[0].runtime_minutes = VAR_2->runtime_minutes;
      VAR_1->entries[0].runtime_seconds = VAR_2->runtime_seconds;
      VAR_1->entries[0].last_played_year = VAR_2->last_played_year;
      VAR_1->entries[0].last_played_month = VAR_2->last_played_month;
      VAR_1->entries[0].last_played_day = VAR_2->last_played_day;
      VAR_1->entries[0].last_played_hour = VAR_2->last_played_hour;
      VAR_1->entries[0].last_played_minute = VAR_2->last_played_minute;
      VAR_1->entries[0].last_played_second = VAR_2->last_played_second;

      VAR_1->entries[0].runtime_str = ((void*)0);
      VAR_1->entries[0].last_played_str = ((void*)0);

      if (!FUNC_7(VAR_2->runtime_str))
         VAR_1->entries[0].runtime_str = FUNC_6(VAR_2->runtime_str);
      if (!FUNC_7(VAR_2->last_played_str))
         VAR_1->entries[0].last_played_str = FUNC_6(VAR_2->last_played_str);
   }

   VAR_1->size++;

success:
   VAR_1->modified = 1;

   return 1;
}
