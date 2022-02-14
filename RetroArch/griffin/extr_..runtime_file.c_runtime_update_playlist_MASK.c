
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct playlist_entry {scalar_t__ runtime_status; char* runtime_str; char* last_played_str; int last_played_second; int last_played_minute; int last_played_hour; int last_played_day; int last_played_month; int last_played_year; int runtime_seconds; int runtime_minutes; int runtime_hours; int core_path; int path; int member_0; } ;
struct TYPE_6__ {int menu_driver; } ;
struct TYPE_5__ {scalar_t__ playlist_sublabel_runtime_type; scalar_t__ playlist_sublabel_last_played_style; } ;
struct TYPE_7__ {TYPE_2__ arrays; TYPE_1__ uints; } ;
typedef TYPE_3__ settings_t ;
typedef int runtime_str ;
typedef int runtime_log_t ;
typedef int playlist_t ;
typedef int last_played_str ;
typedef enum playlist_sublabel_last_played_style_type { ____Placeholder_playlist_sublabel_last_played_style_type } playlist_sublabel_last_played_style_type ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__* FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,size_t,struct playlist_entry const**) ;
 size_t FUNC_3 (int *) ;
 int FUNC_4 (int *,size_t,struct playlist_entry*,int) ;
 int FUNC_5 (int *,int *,int *,int *,int *,int *,int *) ;
 int FUNC_6 (int *,char*,int,int) ;
 int FUNC_7 (int *,int *,int *,int *) ;
 int FUNC_8 (int *,char*,int) ;
 scalar_t__ FUNC_9 (int *) ;
 int * FUNC_10 (int ,int ,int) ;
 scalar_t__ FUNC_11 (int ,char*) ;

void FUNC_12(playlist_t *VAR_4, size_t VAR_5)
{
   settings_t *VAR_6 = FUNC_0();
   runtime_log_t *VAR_7 = ((void*)0);
   const struct playlist_entry *VAR_8 = ((void*)0);
   struct playlist_entry VAR_9 = {0};
   enum playlist_sublabel_last_played_style_type VAR_10;
   char VAR_11[64];
   char VAR_12[64];


   if (!VAR_4 || !VAR_6)
      return;

   if (VAR_5 >= FUNC_3(VAR_4))
      return;



   VAR_9.runtime_status = VAR_1;






   VAR_10 = VAR_0;



   VAR_11[0] = '\0';
   VAR_12[0] = '\0';
   VAR_9.runtime_str = VAR_11;
   VAR_9.last_played_str = VAR_12;


   FUNC_2(VAR_4, VAR_5, &VAR_8);


   VAR_7 = FUNC_10(VAR_8->path, VAR_8->core_path,
         (VAR_6->uints.playlist_sublabel_runtime_type == VAR_2));

   if (VAR_7)
   {

      if (FUNC_9(VAR_7))
      {

         FUNC_7(VAR_7,
               &VAR_9.runtime_hours, &VAR_9.runtime_minutes, &VAR_9.runtime_seconds);

         FUNC_8(VAR_7, VAR_11, sizeof(VAR_11));


         FUNC_5(VAR_7,
               &VAR_9.last_played_year, &VAR_9.last_played_month, &VAR_9.last_played_day,
               &VAR_9.last_played_hour, &VAR_9.last_played_minute, &VAR_9.last_played_second);

         FUNC_6(VAR_7, VAR_12, sizeof(VAR_12), VAR_10);


         VAR_9.runtime_status = VAR_3;
      }


      FUNC_1(VAR_7);
   }



   if (FUNC_11(VAR_6->arrays.menu_driver, "ozone"))
   {
      if (VAR_9.runtime_status != VAR_3)
      {
         FUNC_8(((void*)0), VAR_11, sizeof(VAR_11));
         FUNC_6(((void*)0), VAR_12, sizeof(VAR_12), VAR_10);
      }
   }


   FUNC_4(VAR_4, VAR_5, &VAR_9, 0);
}
