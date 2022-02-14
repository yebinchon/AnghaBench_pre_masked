
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct playlist_entry {char* path; char* label; char* core_path; char* core_name; char* db_name; char* crc32; scalar_t__ last_played_second; scalar_t__ last_played_minute; scalar_t__ last_played_hour; scalar_t__ last_played_day; scalar_t__ last_played_month; scalar_t__ last_played_year; scalar_t__ runtime_seconds; scalar_t__ runtime_minutes; scalar_t__ runtime_hours; int * subsystem_roms; int * subsystem_name; int * subsystem_ident; } ;
typedef int playlist_t ;
struct TYPE_3__ {int playlist_directory; } ;
typedef TYPE_1__ db_handle_t ;
typedef int database_state_handle_t ;
typedef int database_info_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,char*,int) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *,char const*,char*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char*,int ) ;
 int FUNC_7 (int *,struct playlist_entry*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(
      db_handle_t *VAR_2,
      database_state_handle_t *VAR_3,
      database_info_handle_t *VAR_4,
      const char *VAR_5)
{
   char *VAR_6 = (char*)FUNC_3(VAR_1 * sizeof(char));
   playlist_t *VAR_7 = ((void*)0);

   VAR_6[0] = '\0';

   if (!FUNC_9(VAR_2->playlist_directory))
      FUNC_0(VAR_6,
            VAR_2->playlist_directory,
            "Lutro.lpl",
            VAR_1 * sizeof(char));

   VAR_7 = FUNC_6(VAR_6, VAR_0);

   FUNC_2(VAR_6);

   if (!FUNC_4(VAR_7,
            VAR_5, "DETECT"))
   {
      struct playlist_entry VAR_8;
      char *VAR_9 = (char*)FUNC_3(VAR_1 * sizeof(char));

      VAR_9[0] = '\0';

      FUNC_1(VAR_9,
            VAR_5, VAR_1 * sizeof(char));


      VAR_8.path = (char*)VAR_5;
      VAR_8.label = VAR_9;
      VAR_8.core_path = (char*)"DETECT";
      VAR_8.core_name = (char*)"DETECT";
      VAR_8.db_name = (char*)"Lutro.lpl";
      VAR_8.crc32 = (char*)"DETECT";
      VAR_8.subsystem_ident = ((void*)0);
      VAR_8.subsystem_name = ((void*)0);
      VAR_8.subsystem_roms = ((void*)0);
      VAR_8.runtime_hours = 0;
      VAR_8.runtime_minutes = 0;
      VAR_8.runtime_seconds = 0;
      VAR_8.last_played_year = 0;
      VAR_8.last_played_month = 0;
      VAR_8.last_played_day = 0;
      VAR_8.last_played_hour = 0;
      VAR_8.last_played_minute= 0;
      VAR_8.last_played_second= 0;

      FUNC_7(VAR_7, &VAR_8);

      FUNC_2(VAR_9);
   }

   FUNC_8(VAR_7);
   FUNC_5(VAR_7);

   return 0;
}
