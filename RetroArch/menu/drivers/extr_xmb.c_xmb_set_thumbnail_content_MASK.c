
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char const* fullpath; } ;
typedef TYPE_1__ xmb_node_t ;
struct TYPE_7__ {int thumbnail_path_data; scalar_t__ is_db_manager_list; scalar_t__ is_playlist; } ;
typedef TYPE_2__ xmb_handle_t ;
struct TYPE_8__ {int label_enabled; int rich_label_enabled; int value_enabled; int sublabel_enabled; char const* path; } ;
typedef TYPE_3__ menu_entry_t ;
typedef int file_list_t ;


 scalar_t__ FUNC_0 (int *,size_t) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,int ,size_t,int *,int) ;
 int FUNC_3 (TYPE_3__*) ;
 size_t FUNC_4 () ;
 int FUNC_5 (int ,char const*) ;
 int FUNC_6 (int ,char const*,char const*) ;
 int FUNC_7 (int ,int ,size_t) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (char const*) ;
 scalar_t__ FUNC_10 (char const*,char*) ;

__attribute__((used)) static void FUNC_11(void *VAR_0, const char *VAR_1)
{
   size_t VAR_2 = FUNC_4();
   xmb_handle_t *VAR_3 = (xmb_handle_t*)VAR_0;
   if (!VAR_3)
      return;

   if (VAR_3->is_playlist)
   {

      if (FUNC_9(VAR_1))
         FUNC_7(VAR_3->thumbnail_path_data,
               FUNC_8(), VAR_2);
   }
   else if (VAR_3->is_db_manager_list)
   {

      if (FUNC_9(VAR_1))
      {
         menu_entry_t VAR_4;

         FUNC_3(&VAR_4);
         VAR_4.label_enabled = 0;
         VAR_4.rich_label_enabled = 0;
         VAR_4.value_enabled = 0;
         VAR_4.sublabel_enabled = 0;
         FUNC_2(&VAR_4, 0, VAR_2, ((void*)0), 1);

         if (!FUNC_9(VAR_4.path))
            FUNC_5(VAR_3->thumbnail_path_data, VAR_4.path);
      }
   }
   else if (FUNC_10(VAR_1, "imageviewer"))
   {

      menu_entry_t VAR_5;
      file_list_t *VAR_6 = FUNC_1(0);
      xmb_node_t *VAR_7 = (xmb_node_t*)FUNC_0(VAR_6, VAR_2);

      FUNC_3(&VAR_5);
      VAR_5.label_enabled = 0;
      VAR_5.rich_label_enabled = 0;
      VAR_5.value_enabled = 0;
      VAR_5.sublabel_enabled = 0;
      FUNC_2(&VAR_5, 0, VAR_2, ((void*)0), 1);

      if (VAR_7)
         if ( !FUNC_9(VAR_5.path) &&
               !FUNC_9(VAR_7->fullpath))
            FUNC_6(VAR_3->thumbnail_path_data, VAR_7->fullpath, VAR_5.path);
   }
   else if (!FUNC_9(VAR_1))
   {






      FUNC_5(VAR_3->thumbnail_path_data, VAR_1);
   }
}
