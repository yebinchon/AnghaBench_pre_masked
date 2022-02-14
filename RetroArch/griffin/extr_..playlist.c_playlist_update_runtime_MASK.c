
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct playlist_entry {scalar_t__ runtime_status; scalar_t__ runtime_hours; scalar_t__ runtime_minutes; scalar_t__ runtime_seconds; scalar_t__ last_played_year; scalar_t__ last_played_month; scalar_t__ last_played_day; scalar_t__ last_played_hour; scalar_t__ last_played_minute; scalar_t__ last_played_second; int * last_played_str; int * runtime_str; int * core_path; int * path; } ;
struct TYPE_3__ {size_t size; int modified; struct playlist_entry* entries; } ;
typedef TYPE_1__ playlist_t ;


 int FUNC_0 (int *) ;
 void* FUNC_1 (int *) ;

void FUNC_2(playlist_t *VAR_0, size_t VAR_1,
      const struct playlist_entry *VAR_2,
      bool VAR_3)
{
   struct playlist_entry *VAR_4 = ((void*)0);

   if (!VAR_0 || VAR_1 > VAR_0->size)
      return;

   VAR_4 = &VAR_0->entries[VAR_1];

   if (VAR_2->path && (VAR_2->path != VAR_4->path))
   {
      if (VAR_4->path != ((void*)0))
         FUNC_0(VAR_4->path);
      VAR_4->path = ((void*)0);
      VAR_4->path = FUNC_1(VAR_2->path);
      VAR_0->modified = VAR_0->modified || VAR_3;
   }

   if (VAR_2->core_path && (VAR_2->core_path != VAR_4->core_path))
   {
      if (VAR_4->core_path != ((void*)0))
         FUNC_0(VAR_4->core_path);
      VAR_4->core_path = ((void*)0);
      VAR_4->core_path = FUNC_1(VAR_2->core_path);
      VAR_0->modified = VAR_0->modified || VAR_3;
   }

   if (VAR_2->runtime_status != VAR_4->runtime_status)
   {
      VAR_4->runtime_status = VAR_2->runtime_status;
      VAR_0->modified = VAR_0->modified || VAR_3;
   }

   if (VAR_2->runtime_hours != VAR_4->runtime_hours)
   {
      VAR_4->runtime_hours = VAR_2->runtime_hours;
      VAR_0->modified = VAR_0->modified || VAR_3;
   }

   if (VAR_2->runtime_minutes != VAR_4->runtime_minutes)
   {
      VAR_4->runtime_minutes = VAR_2->runtime_minutes;
      VAR_0->modified = VAR_0->modified || VAR_3;
   }

   if (VAR_2->runtime_seconds != VAR_4->runtime_seconds)
   {
      VAR_4->runtime_seconds = VAR_2->runtime_seconds;
      VAR_0->modified = VAR_0->modified || VAR_3;
   }

   if (VAR_2->last_played_year != VAR_4->last_played_year)
   {
      VAR_4->last_played_year = VAR_2->last_played_year;
      VAR_0->modified = VAR_0->modified || VAR_3;
   }

   if (VAR_2->last_played_month != VAR_4->last_played_month)
   {
      VAR_4->last_played_month = VAR_2->last_played_month;
      VAR_0->modified = VAR_0->modified || VAR_3;
   }

   if (VAR_2->last_played_day != VAR_4->last_played_day)
   {
      VAR_4->last_played_day = VAR_2->last_played_day;
      VAR_0->modified = VAR_0->modified || VAR_3;
   }

   if (VAR_2->last_played_hour != VAR_4->last_played_hour)
   {
      VAR_4->last_played_hour = VAR_2->last_played_hour;
      VAR_0->modified = VAR_0->modified || VAR_3;
   }

   if (VAR_2->last_played_minute != VAR_4->last_played_minute)
   {
      VAR_4->last_played_minute = VAR_2->last_played_minute;
      VAR_0->modified = VAR_0->modified || VAR_3;
   }

   if (VAR_2->last_played_second != VAR_4->last_played_second)
   {
      VAR_4->last_played_second = VAR_2->last_played_second;
      VAR_0->modified = VAR_0->modified || VAR_3;
   }

   if (VAR_2->runtime_str && (VAR_2->runtime_str != VAR_4->runtime_str))
   {
      if (VAR_4->runtime_str != ((void*)0))
         FUNC_0(VAR_4->runtime_str);
      VAR_4->runtime_str = ((void*)0);
      VAR_4->runtime_str = FUNC_1(VAR_2->runtime_str);
      VAR_0->modified = VAR_0->modified || VAR_3;
   }

   if (VAR_2->last_played_str && (VAR_2->last_played_str != VAR_4->last_played_str))
   {
      if (VAR_4->last_played_str != ((void*)0))
         FUNC_0(VAR_4->last_played_str);
      VAR_4->last_played_str = ((void*)0);
      VAR_4->last_played_str = FUNC_1(VAR_2->last_played_str);
      VAR_0->modified = VAR_0->modified || VAR_3;
   }
}
