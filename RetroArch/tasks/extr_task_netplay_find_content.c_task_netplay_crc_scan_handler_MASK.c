
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct string_list {size_t size; TYPE_1__* elems; } ;
struct playlist_entry {char* path; char* crc32; } ;
struct TYPE_13__ {scalar_t__ state; } ;
typedef TYPE_2__ retro_task_t ;
typedef int playlist_t ;
struct TYPE_14__ {int found; int contentless; char* content_crc; char* content_path; int current; char* subsystem_name; char const* core_extensions; int hostname; struct string_list* lpl_list; } ;
typedef TYPE_3__ netplay_crc_handle_t ;
typedef int entry ;
typedef int current ;
struct TYPE_12__ {char* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (char*,int,char const*) ;
 char* FUNC_8 (int ) ;
 char* FUNC_9 (char const*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,size_t,struct playlist_entry const**) ;
 unsigned int FUNC_12 (int *) ;
 int * FUNC_13 (char const*,int ) ;
 int FUNC_14 (char*,int,char*,int) ;
 scalar_t__ FUNC_15 (char*) ;
 scalar_t__ FUNC_16 (char const*,char*) ;
 int FUNC_17 (struct string_list*) ;
 struct string_list* FUNC_18 (char*,char*) ;
 int FUNC_19 (char*,char*,int) ;
 int FUNC_20 (char*,char const*,int) ;
 scalar_t__ FUNC_21 (char const*,char*) ;
 int FUNC_22 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_23 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_24(retro_task_t *VAR_4)
{
   size_t VAR_5, VAR_6, VAR_7;
   char VAR_8[VAR_3];
   bool VAR_9 = 0;
   netplay_crc_handle_t *VAR_10 = (netplay_crc_handle_t*)VAR_4->state;

   FUNC_1(VAR_4, "Looking for compatible content...");




   if (!FUNC_4(VAR_10))
   {
      VAR_10->found = 1;
      VAR_10->contentless = 1;
      FUNC_22(VAR_4, VAR_10);
      FUNC_5(VAR_4, FUNC_8(VAR_2));
      return;
   }


   if (!VAR_10->lpl_list)
   {
      FUNC_5(VAR_4, "Playlist directory not found");
      FUNC_6(VAR_10);
      return;
   }


   if (VAR_10->lpl_list->size == 0 && FUNC_4(VAR_10))
   {
      FUNC_17(VAR_10->lpl_list);
      FUNC_5(VAR_4, "There are no playlists available; cannot execute search");
      FUNC_2(VAR_0, VAR_10->hostname);
      FUNC_6(VAR_10);
      return;
   }

   VAR_9 = !FUNC_16(VAR_10->content_crc, "00000000|crc");


   if (VAR_9 && FUNC_3() > 0)
   {
      char VAR_11[VAR_3];

      FUNC_0("[Lobby] Testing CRC matching for: %s\n", VAR_10->content_crc);

      FUNC_14(VAR_11, sizeof(VAR_11), "%X|crc", FUNC_3());
      FUNC_0("[Lobby] Current content crc: %s\n", VAR_11);

      if (FUNC_16(VAR_11, VAR_10->content_crc))
      {
         FUNC_0("[Lobby] CRC match %s with currently loaded content\n", VAR_11);
         FUNC_20(VAR_10->content_path, "N/A", sizeof(VAR_10->content_path));
         VAR_10->found = 1;
         VAR_10->current = 1;
         FUNC_22(VAR_4, VAR_10);
         FUNC_5(VAR_4, FUNC_8(VAR_2));
         FUNC_17(VAR_10->lpl_list);
         return;
      }
   }


   if (FUNC_15(VAR_10->subsystem_name) || FUNC_16(VAR_10->subsystem_name, "N/A"))
   {
      for (VAR_5 = 0; VAR_5 < VAR_10->lpl_list->size; VAR_5++)
      {
         playlist_t *VAR_12 = ((void*)0);
         unsigned VAR_13 = 0;
         const char *VAR_14 = VAR_10->lpl_list->elems[VAR_5].data;


         if (!FUNC_21(VAR_14, ".lpl"))
            continue;

         FUNC_0("[Lobby] Searching playlist: %s\n", VAR_14);
         VAR_12 = FUNC_13(VAR_14, VAR_1);
         VAR_13 = FUNC_12(VAR_12);

         for (VAR_6 = 0; VAR_6 < VAR_13; VAR_6++)
         {
            const char *VAR_15 = ((void*)0);
            const char *VAR_16 = ((void*)0);
            const struct playlist_entry *VAR_17 = ((void*)0);

            FUNC_11(VAR_12, VAR_6, &VAR_17);

            VAR_15 = VAR_17->path;
            VAR_16 = VAR_17->crc32;

            if (VAR_9 && FUNC_16(VAR_16, VAR_10->content_crc))
            {
               FUNC_0("[Lobby] CRC match %s\n", VAR_16);
               FUNC_20(VAR_10->content_path, VAR_15, sizeof(VAR_10->content_path));
               VAR_10->found = 1;
               FUNC_22(VAR_4, VAR_10);
               FUNC_5(VAR_4, FUNC_8(VAR_2));
               FUNC_17(VAR_10->lpl_list);
               FUNC_10(VAR_12);
               return;
            }

            FUNC_7(VAR_8, sizeof(VAR_8), VAR_15);






            if (!FUNC_15(VAR_8) &&
               FUNC_16(VAR_8, VAR_10->content_path) &&
               FUNC_21(VAR_10->core_extensions, FUNC_9(VAR_15)))
            {
               FUNC_0("[Lobby] Filename match %s\n", VAR_15);

               FUNC_20(VAR_10->content_path, VAR_15, sizeof(VAR_10->content_path));
               VAR_10->found = 1;
               FUNC_22(VAR_4, VAR_10);
               FUNC_5(VAR_4, FUNC_8(VAR_2));
               FUNC_17(VAR_10->lpl_list);
               FUNC_10(VAR_12);
               return;
            }

            FUNC_23(VAR_4, (int)(VAR_6 / VAR_13 * 100.0));
         }

         FUNC_10(VAR_12);
      }
   }
   else
   {
      bool VAR_18[100];
      struct string_list *VAR_19 = FUNC_18(VAR_10->content_path, "|");

      for (VAR_5 = 0; VAR_5 < VAR_19->size; VAR_5++)
      {
         VAR_18[VAR_5] = 0;

         for (VAR_6 = 0; VAR_6 < VAR_10->lpl_list->size && !VAR_18[VAR_5]; VAR_6++)
         {
            playlist_t *VAR_20 = ((void*)0);
            unsigned VAR_21 = 0;
            const char *VAR_22 = VAR_10->lpl_list->elems[VAR_6].data;


            if (!FUNC_21(VAR_22, ".lpl"))
               continue;

            FUNC_0("[Lobby] Searching content %d/%d (%s) in playlist: %s\n", VAR_5 + 1, VAR_19->size, VAR_19->elems[VAR_5].data, VAR_22);
            VAR_20 = FUNC_13(VAR_22, VAR_1);
            VAR_21 = FUNC_12(VAR_20);

            for (VAR_7 = 0; VAR_7 < VAR_21 && !VAR_18[VAR_5]; VAR_7++)
            {
               const struct playlist_entry *VAR_23 = ((void*)0);

               FUNC_11(VAR_20, VAR_7, &VAR_23);

               FUNC_7(VAR_8, sizeof(VAR_8), VAR_23->path);

               if (!FUNC_15(VAR_8) &&
                  FUNC_21(VAR_19->elems[VAR_5].data, VAR_8) &&
                  FUNC_21(VAR_10->core_extensions, FUNC_9(VAR_23->path)))
               {
                  FUNC_0("[Lobby] filename match %s\n", VAR_23->path);

                  if (VAR_5 == 0)
                  {
                     VAR_10->content_path[0] = '\0';
                     FUNC_20(VAR_10->content_path, VAR_23->path, sizeof(VAR_10->content_path));
                  }
                  else
                  {
                     FUNC_19(VAR_10->content_path, "|", sizeof(VAR_10->content_path));
                     FUNC_19(VAR_10->content_path, VAR_23->path, sizeof(VAR_10->content_path));
                  }

                  VAR_18[VAR_5] = 1;
               }

               FUNC_23(VAR_4, (int)(VAR_6 / VAR_21 * 100.0));
            }

            FUNC_10(VAR_20);
         }
      }

      for (VAR_5 = 0; VAR_5 < VAR_19->size; VAR_5++)
      {
         VAR_10->found = 1;
         if (!VAR_18[VAR_5])
         {
            VAR_10->found = 0;
            break;
         }
      }

      if (VAR_10->found)
      {
         FUNC_0("[Lobby] Subsystem matching set found %s\n", VAR_10->content_path);
         FUNC_22(VAR_4, VAR_10);
         FUNC_5(VAR_4, FUNC_8(VAR_2));
      }

      FUNC_17(VAR_10->lpl_list);
      FUNC_17(VAR_19);
      return;
   }


   FUNC_17(VAR_10->lpl_list);
   FUNC_5(VAR_4, "Failed to locate matching content by either CRC or filename.");
   FUNC_2(VAR_0, VAR_10->hostname);
   FUNC_6(VAR_10);
}
