
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct item_file {int path; } ;
struct TYPE_8__ {int directory_playlist; } ;
struct TYPE_9__ {TYPE_1__ paths; } ;
typedef TYPE_2__ settings_t ;
typedef int playlist_t ;
typedef int path_playlist ;
typedef int menu_handle_t ;
typedef int menu_displaylist_info_t ;
struct TYPE_10__ {scalar_t__ entry; scalar_t__ size; scalar_t__ selection; scalar_t__ idx; int type; } ;
typedef TYPE_3__ menu_ctx_list_t ;
typedef int lpl_basename ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char*,int ,int ,int) ;
 int FUNC_3 (int *,int *,int ,int) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (int ) ;
 int * FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(
      menu_handle_t *VAR_4,
      menu_displaylist_info_t *VAR_5,
      bool VAR_6)
{
   menu_ctx_list_t VAR_7;
   menu_ctx_list_t VAR_8;
   playlist_t *VAR_9 = ((void*)0);
   struct item_file *VAR_10 = ((void*)0);

   FUNC_6(&VAR_7);

   VAR_7.type = VAR_2;

   FUNC_7(&VAR_7);

   VAR_8.type = VAR_1;
   VAR_8.idx = VAR_7.selection - (VAR_7.size +1);

   FUNC_5(&VAR_8);

   VAR_10 = (struct item_file*)VAR_8.entry;

   if (!VAR_10)
      return -1;

   if (!FUNC_12(VAR_10->path))
   {
      char VAR_11[VAR_3];
      char VAR_12[VAR_3];
      settings_t *VAR_13 = FUNC_0();

      VAR_12[0] = '\0';
      VAR_11[0] = '\0';

      FUNC_2(
            VAR_11,
            VAR_13->paths.directory_playlist,
            VAR_10->path,
            sizeof(VAR_11));
      FUNC_4(VAR_4, VAR_11);



      FUNC_1(VAR_12, VAR_10->path, sizeof(VAR_12));
      FUNC_8(VAR_12, sizeof(VAR_12));
   }

   VAR_9 = FUNC_10();

   if (VAR_9)
   {
      if (VAR_6)
         FUNC_11(VAR_9);

      FUNC_3(VAR_5,
            VAR_9,
            FUNC_9(VAR_0), 1);
   }

   return 0;
}
