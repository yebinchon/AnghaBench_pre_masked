
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int tmp_buf ;
struct TYPE_13__ {char* directory_runtime_log; char* directory_playlist; } ;
struct TYPE_16__ {TYPE_2__ paths; } ;
typedef TYPE_5__ settings_t ;
struct TYPE_15__ {scalar_t__ second; scalar_t__ minute; scalar_t__ hour; scalar_t__ day; scalar_t__ month; scalar_t__ year; } ;
struct TYPE_14__ {scalar_t__ seconds; scalar_t__ minutes; scalar_t__ hours; } ;
struct TYPE_17__ {char* path; TYPE_4__ last_played; TYPE_3__ runtime; } ;
typedef TYPE_6__ runtime_log_t ;
typedef int log_file_path ;
typedef int log_file_dir ;
typedef int core_name ;
struct TYPE_18__ {unsigned int count; TYPE_1__* list; } ;
typedef TYPE_7__ core_info_list_t ;
typedef int content_name ;
struct TYPE_12__ {char* core_name; char const* path; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int,int) ;
 TYPE_5__* FUNC_2 () ;
 int FUNC_3 (TYPE_7__**) ;
 int FUNC_4 (char*,char*,char*,int) ;
 char* FUNC_5 (char const*) ;
 int FUNC_6 (char*,int ,int) ;
 char* FUNC_7 (char const*) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (char*) ;
 int FUNC_12 (TYPE_6__*) ;
 scalar_t__ FUNC_13 (char const*) ;
 scalar_t__ FUNC_14 (char const*,char const*) ;
 int FUNC_15 (char*,char*,int) ;
 int FUNC_16 (char*,char const*,int) ;

runtime_log_t *FUNC_17(const char *VAR_1,
      const char *VAR_2, bool VAR_3)
{
   unsigned VAR_4;
   char VAR_5[VAR_0];
   char VAR_6[VAR_0];
   char VAR_7[VAR_0];
   char VAR_8[VAR_0];
   char VAR_9[VAR_0];
   settings_t *VAR_10 = FUNC_2();
   core_info_list_t *VAR_11 = ((void*)0);
   runtime_log_t *VAR_12 = ((void*)0);
   const char *VAR_13 = ((void*)0);

   VAR_5[0] = '\0';
   VAR_6[0] = '\0';
   VAR_7[0] = '\0';
   VAR_8[0] = '\0';
   VAR_9[0] = '\0';


   if (!VAR_10)
      return ((void*)0);

   if ( FUNC_13(VAR_10->paths.directory_runtime_log) &&
         FUNC_13(VAR_10->paths.directory_playlist))
   {
      FUNC_0("Runtime log directory is undefined - cannot save"
            " runtime log files.\n");
      return ((void*)0);
   }

   VAR_13 = FUNC_7(VAR_2);

   if ( FUNC_13(VAR_1) ||
         FUNC_13(VAR_13))
      return ((void*)0);

   if ( FUNC_14(VAR_2, "builtin") ||
         FUNC_14(VAR_2, "DETECT"))
      return ((void*)0);






   FUNC_3(&VAR_11);

   if (!VAR_11)
      return ((void*)0);

   for (VAR_4 = 0; VAR_4 < VAR_11->count; VAR_4++)
   {
      const char *VAR_14 = VAR_11->list[VAR_4].core_name;
      if (!FUNC_14(
               FUNC_7(VAR_11->list[VAR_4].path), VAR_13))
         continue;

      if (FUNC_13(VAR_14))
         return ((void*)0);

      FUNC_16(VAR_6, VAR_14, sizeof(VAR_6));
      break;
   }

   if (FUNC_13(VAR_6))
      return ((void*)0);


   if (FUNC_13(VAR_10->paths.directory_runtime_log))
   {


      FUNC_4(
            VAR_9,
            VAR_10->paths.directory_playlist,
            "logs",
            sizeof(VAR_9));
   }
   else
      FUNC_16(VAR_9,
            VAR_10->paths.directory_runtime_log, sizeof(VAR_9));

   if (FUNC_13(VAR_9))
      return ((void*)0);

   if (VAR_3)
      FUNC_4(
            VAR_7,
            VAR_9,
            VAR_6,
            sizeof(VAR_7));
   else
      FUNC_16(VAR_7, VAR_9, sizeof(VAR_7));

   if (FUNC_13(VAR_7))
      return ((void*)0);


   if (!FUNC_8(VAR_7))
   {
      if (!FUNC_10(VAR_7))
      {
         FUNC_0("[runtime] failed to create directory for"
               " runtime log: %s.\n", VAR_7);
         return ((void*)0);
      }
   }




   if (FUNC_14(VAR_6, "TyrQuake"))
   {
      const char *VAR_15 = FUNC_5(VAR_1);
      if (VAR_15)
      {
         size_t VAR_16 = VAR_15 + 1 - VAR_1;
         if (VAR_16 < VAR_0)
         {
            FUNC_6(VAR_9, 0, sizeof(VAR_9));
            FUNC_16(VAR_9, VAR_1, VAR_16 * sizeof(char));
            FUNC_16(VAR_5, FUNC_7(VAR_9), sizeof(VAR_5));
         }
      }
   }
   else
   {


      char *VAR_17 = ((void*)0);
      VAR_9[0] = '\0';
      FUNC_16(VAR_9, FUNC_7(VAR_1), sizeof(VAR_9));
      VAR_17 = FUNC_11(VAR_9);

      if (FUNC_13(VAR_17))
         return ((void*)0);

      FUNC_16(VAR_5, VAR_17, sizeof(VAR_5));
   }

   if (FUNC_13(VAR_5))
      return ((void*)0);


   FUNC_4(VAR_8, VAR_7, VAR_5, sizeof(VAR_8));
   FUNC_15(VAR_8, ".lrtl", sizeof(VAR_8));

   if (FUNC_13(VAR_8))
      return ((void*)0);



   VAR_12 = (runtime_log_t*)FUNC_1(1, sizeof(*VAR_12));
   if (!VAR_12)
      return ((void*)0);


   VAR_12->runtime.hours = 0;
   VAR_12->runtime.minutes = 0;
   VAR_12->runtime.seconds = 0;

   VAR_12->last_played.year = 0;
   VAR_12->last_played.month = 0;
   VAR_12->last_played.day = 0;
   VAR_12->last_played.hour = 0;
   VAR_12->last_played.minute = 0;
   VAR_12->last_played.second = 0;

   FUNC_16(VAR_12->path, VAR_8, sizeof(VAR_12->path));


   if (FUNC_9(VAR_12->path))
      FUNC_12(VAR_12);

   return VAR_12;
}
