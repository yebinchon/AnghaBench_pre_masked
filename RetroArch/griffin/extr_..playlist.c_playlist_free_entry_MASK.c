
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct playlist_entry {scalar_t__ last_played_second; scalar_t__ last_played_minute; scalar_t__ last_played_hour; scalar_t__ last_played_day; scalar_t__ last_played_month; scalar_t__ last_played_year; scalar_t__ runtime_seconds; scalar_t__ runtime_minutes; scalar_t__ runtime_hours; int runtime_status; int * subsystem_roms; int * last_played_str; int * runtime_str; int * subsystem_name; int * subsystem_ident; int * crc32; int * db_name; int * core_name; int * core_path; int * label; int * path; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct playlist_entry *VAR_1)
{
   if (!VAR_1)
      return;

   if (VAR_1->path != ((void*)0))
      FUNC_0(VAR_1->path);
   if (VAR_1->label != ((void*)0))
      FUNC_0(VAR_1->label);
   if (VAR_1->core_path != ((void*)0))
      FUNC_0(VAR_1->core_path);
   if (VAR_1->core_name != ((void*)0))
      FUNC_0(VAR_1->core_name);
   if (VAR_1->db_name != ((void*)0))
      FUNC_0(VAR_1->db_name);
   if (VAR_1->crc32 != ((void*)0))
      FUNC_0(VAR_1->crc32);
   if (VAR_1->subsystem_ident != ((void*)0))
      FUNC_0(VAR_1->subsystem_ident);
   if (VAR_1->subsystem_name != ((void*)0))
      FUNC_0(VAR_1->subsystem_name);
   if (VAR_1->runtime_str != ((void*)0))
      FUNC_0(VAR_1->runtime_str);
   if (VAR_1->last_played_str != ((void*)0))
      FUNC_0(VAR_1->last_played_str);
   if (VAR_1->subsystem_roms != ((void*)0))
      FUNC_1(VAR_1->subsystem_roms);

   VAR_1->path = ((void*)0);
   VAR_1->label = ((void*)0);
   VAR_1->core_path = ((void*)0);
   VAR_1->core_name = ((void*)0);
   VAR_1->db_name = ((void*)0);
   VAR_1->crc32 = ((void*)0);
   VAR_1->subsystem_ident = ((void*)0);
   VAR_1->subsystem_name = ((void*)0);
   VAR_1->runtime_str = ((void*)0);
   VAR_1->last_played_str = ((void*)0);
   VAR_1->subsystem_roms = ((void*)0);
   VAR_1->runtime_status = VAR_0;
   VAR_1->runtime_hours = 0;
   VAR_1->runtime_minutes = 0;
   VAR_1->runtime_seconds = 0;
   VAR_1->last_played_year = 0;
   VAR_1->last_played_month = 0;
   VAR_1->last_played_day = 0;
   VAR_1->last_played_hour = 0;
   VAR_1->last_played_minute = 0;
   VAR_1->last_played_second = 0;
}
