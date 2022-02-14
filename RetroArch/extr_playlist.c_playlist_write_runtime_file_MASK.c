
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tmp ;
struct TYPE_7__ {int modified; size_t size; int conf_path; TYPE_1__* entries; } ;
typedef TYPE_2__ playlist_t ;
struct TYPE_8__ {int writer; int * file; int member_0; } ;
struct TYPE_6__ {char* path; char* core_path; int runtime_hours; int runtime_minutes; int runtime_seconds; int last_played_year; int last_played_month; int last_played_day; int last_played_hour; int last_played_minute; int last_played_second; } ;
typedef int RFILE ;
typedef TYPE_3__ JSONContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,TYPE_3__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,int ,int ) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,char*,int ,int ) ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_17 (char*) ;
 int FUNC_18 (int *) ;
 int * FUNC_19 (int ,int ,int ) ;
 int FUNC_20 (char*,int ,int) ;
 int FUNC_21 (char*,int,char*,int) ;
 int FUNC_22 (char*) ;

void FUNC_23(playlist_t *VAR_4)
{
   size_t VAR_5;
   RFILE *VAR_6 = ((void*)0);
   JSONContext VAR_7 = {0};

   if (!VAR_4 || !VAR_4->modified)
      return;

   VAR_6 = FUNC_19(VAR_4->conf_path,
         VAR_3, VAR_2);

   if (!VAR_6)
   {
      FUNC_15("Failed to write to playlist file: %s\n", VAR_4->conf_path);
      return;
   }

   VAR_7.writer = FUNC_0(((void*)0));
   VAR_7.file = VAR_6;

   if (!VAR_7.writer)
   {
      FUNC_15("Failed to create JSON writer\n");
      goto end;
   }

   FUNC_2(VAR_7.writer, VAR_1);
   FUNC_3(VAR_7.writer, &VAR_0);
   FUNC_4(VAR_7.writer, &VAR_7);

   FUNC_13(VAR_7.writer);
   FUNC_9(VAR_7.writer);
   FUNC_11(VAR_7.writer, 2);
   FUNC_14(VAR_7.writer, "version",
         FUNC_17("version"), VAR_1);
   FUNC_5(VAR_7.writer);
   FUNC_11(VAR_7.writer, 1);
   FUNC_14(VAR_7.writer, "1.0",
         FUNC_17("1.0"), VAR_1);
   FUNC_6(VAR_7.writer);
   FUNC_9(VAR_7.writer);
   FUNC_11(VAR_7.writer, 2);
   FUNC_14(VAR_7.writer, "items",
         FUNC_17("items"), VAR_1);
   FUNC_5(VAR_7.writer);
   FUNC_11(VAR_7.writer, 1);
   FUNC_12(VAR_7.writer);
   FUNC_9(VAR_7.writer);

   for (VAR_5 = 0; VAR_5 < VAR_4->size; VAR_5++)
   {
      FUNC_11(VAR_7.writer, 4);
      FUNC_13(VAR_7.writer);

      FUNC_9(VAR_7.writer);
      FUNC_11(VAR_7.writer, 6);
      FUNC_14(VAR_7.writer, "path",
            FUNC_17("path"), VAR_1);
      FUNC_5(VAR_7.writer);
      FUNC_11(VAR_7.writer, 1);
      FUNC_14(VAR_7.writer,
            VAR_4->entries[VAR_5].path
            ? VAR_4->entries[VAR_5].path
            : "",
            VAR_4->entries[VAR_5].path
            ? FUNC_22(VAR_4->entries[VAR_5].path)
            : 0,
            VAR_1);
      FUNC_6(VAR_7.writer);

      FUNC_9(VAR_7.writer);
      FUNC_11(VAR_7.writer, 6);
      FUNC_14(VAR_7.writer, "core_path",
            FUNC_17("core_path"), VAR_1);
      FUNC_5(VAR_7.writer);
      FUNC_11(VAR_7.writer, 1);
      FUNC_14(VAR_7.writer, VAR_4->entries[VAR_5].core_path,
            FUNC_22(VAR_4->entries[VAR_5].core_path), VAR_1);
      FUNC_6(VAR_7.writer);
      FUNC_9(VAR_7.writer);

      {
         char VAR_8[32] = {0};

         FUNC_21(VAR_8, sizeof(VAR_8), "%u", VAR_4->entries[VAR_5].runtime_hours);

         FUNC_11(VAR_7.writer, 6);
         FUNC_14(VAR_7.writer, "runtime_hours",
               FUNC_17("runtime_hours"), VAR_1);
         FUNC_5(VAR_7.writer);
         FUNC_11(VAR_7.writer, 1);
         FUNC_10(VAR_7.writer, VAR_8, FUNC_22(VAR_8), VAR_1);
         FUNC_6(VAR_7.writer);
         FUNC_9(VAR_7.writer);

         FUNC_20(VAR_8, 0, sizeof(VAR_8));

         FUNC_21(VAR_8, sizeof(VAR_8), "%u", VAR_4->entries[VAR_5].runtime_minutes);

         FUNC_11(VAR_7.writer, 6);
         FUNC_14(VAR_7.writer, "runtime_minutes",
               FUNC_17("runtime_minutes"), VAR_1);
         FUNC_5(VAR_7.writer);
         FUNC_11(VAR_7.writer, 1);
         FUNC_10(VAR_7.writer, VAR_8, FUNC_22(VAR_8), VAR_1);
         FUNC_6(VAR_7.writer);
         FUNC_9(VAR_7.writer);

         FUNC_20(VAR_8, 0, sizeof(VAR_8));

         FUNC_21(VAR_8, sizeof(VAR_8), "%u", VAR_4->entries[VAR_5].runtime_seconds);

         FUNC_11(VAR_7.writer, 6);
         FUNC_14(VAR_7.writer, "runtime_seconds",
               FUNC_17("runtime_seconds"), VAR_1);
         FUNC_5(VAR_7.writer);
         FUNC_11(VAR_7.writer, 1);
         FUNC_10(VAR_7.writer, VAR_8, FUNC_22(VAR_8), VAR_1);
         FUNC_6(VAR_7.writer);
         FUNC_9(VAR_7.writer);

         FUNC_20(VAR_8, 0, sizeof(VAR_8));

         FUNC_21(VAR_8, sizeof(VAR_8), "%u", VAR_4->entries[VAR_5].last_played_year);

         FUNC_11(VAR_7.writer, 6);
         FUNC_14(VAR_7.writer, "last_played_year",
               FUNC_17("last_played_year"), VAR_1);
         FUNC_5(VAR_7.writer);
         FUNC_11(VAR_7.writer, 1);
         FUNC_10(VAR_7.writer, VAR_8, FUNC_22(VAR_8), VAR_1);
         FUNC_6(VAR_7.writer);
         FUNC_9(VAR_7.writer);

         FUNC_20(VAR_8, 0, sizeof(VAR_8));

         FUNC_21(VAR_8, sizeof(VAR_8), "%u", VAR_4->entries[VAR_5].last_played_month);

         FUNC_11(VAR_7.writer, 6);
         FUNC_14(VAR_7.writer, "last_played_month",
               FUNC_17("last_played_month"), VAR_1);
         FUNC_5(VAR_7.writer);
         FUNC_11(VAR_7.writer, 1);
         FUNC_10(VAR_7.writer, VAR_8, FUNC_22(VAR_8), VAR_1);
         FUNC_6(VAR_7.writer);
         FUNC_9(VAR_7.writer);

         FUNC_20(VAR_8, 0, sizeof(VAR_8));

         FUNC_21(VAR_8, sizeof(VAR_8), "%u", VAR_4->entries[VAR_5].last_played_day);

         FUNC_11(VAR_7.writer, 6);
         FUNC_14(VAR_7.writer, "last_played_day",
               FUNC_17("last_played_day"), VAR_1);
         FUNC_5(VAR_7.writer);
         FUNC_11(VAR_7.writer, 1);
         FUNC_10(VAR_7.writer, VAR_8,
               FUNC_22(VAR_8), VAR_1);
         FUNC_6(VAR_7.writer);
         FUNC_9(VAR_7.writer);

         FUNC_20(VAR_8, 0, sizeof(VAR_8));

         FUNC_21(VAR_8, sizeof(VAR_8), "%u", VAR_4->entries[VAR_5].last_played_hour);

         FUNC_11(VAR_7.writer, 6);
         FUNC_14(VAR_7.writer, "last_played_hour",
               FUNC_17("last_played_hour"), VAR_1);
         FUNC_5(VAR_7.writer);
         FUNC_11(VAR_7.writer, 1);
         FUNC_10(VAR_7.writer, VAR_8, FUNC_22(VAR_8), VAR_1);
         FUNC_6(VAR_7.writer);
         FUNC_9(VAR_7.writer);

         FUNC_20(VAR_8, 0, sizeof(VAR_8));

         FUNC_21(VAR_8, sizeof(VAR_8), "%u", VAR_4->entries[VAR_5].last_played_minute);

         FUNC_11(VAR_7.writer, 6);
         FUNC_14(VAR_7.writer, "last_played_minute",
               FUNC_17("last_played_minute"), VAR_1);
         FUNC_5(VAR_7.writer);
         FUNC_11(VAR_7.writer, 1);
         FUNC_10(VAR_7.writer, VAR_8, FUNC_22(VAR_8), VAR_1);
         FUNC_6(VAR_7.writer);
         FUNC_9(VAR_7.writer);

         FUNC_20(VAR_8, 0, sizeof(VAR_8));

         FUNC_21(VAR_8, sizeof(VAR_8), "%u", VAR_4->entries[VAR_5].last_played_second);

         FUNC_11(VAR_7.writer, 6);
         FUNC_14(VAR_7.writer, "last_played_second",
               FUNC_17("last_played_second"), VAR_1);
         FUNC_5(VAR_7.writer);
         FUNC_11(VAR_7.writer, 1);
         FUNC_10(VAR_7.writer, VAR_8,
               FUNC_22(VAR_8), VAR_1);
         FUNC_9(VAR_7.writer);
      }

      FUNC_11(VAR_7.writer, 4);
      FUNC_8(VAR_7.writer);

      if (VAR_5 < VAR_4->size - 1)
         FUNC_6(VAR_7.writer);

      FUNC_9(VAR_7.writer);
   }

   FUNC_11(VAR_7.writer, 2);
   FUNC_7(VAR_7.writer);
   FUNC_9(VAR_7.writer);
   FUNC_8(VAR_7.writer);
   FUNC_9(VAR_7.writer);
   FUNC_1(VAR_7.writer);

   VAR_4->modified = 0;

   FUNC_16("Written to playlist file: %s\n", VAR_4->conf_path);
end:
   FUNC_18(VAR_6);
}
