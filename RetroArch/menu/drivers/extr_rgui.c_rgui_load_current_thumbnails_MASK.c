
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int thumbnail_load_pending; int force_redraw; int thumbnail_path_data; int left_thumbnail_queue_size; void* entry_has_left_thumbnail; scalar_t__ show_fs_thumbnail; int thumbnail_queue_size; void* entry_has_thumbnail; } ;
typedef TYPE_1__ rgui_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ,char const**) ;
 scalar_t__ FUNC_2 (int ,char const**) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 () ;
 void* FUNC_4 (int *,int ,int *,char const*,int*) ;
 int FUNC_5 (char const*,int ,unsigned int,int,int) ;

__attribute__((used)) static void FUNC_6(rgui_t *VAR_5, bool VAR_6)
{
   const char *VAR_7 = ((void*)0);
   const char *VAR_8 = ((void*)0);
   bool VAR_9 = 0;


   if (FUNC_1(VAR_5->thumbnail_path_data,
         VAR_1, &VAR_7))
   {
      VAR_5->entry_has_thumbnail = FUNC_4(
            VAR_5->show_fs_thumbnail ? &VAR_2 : &VAR_4,
            VAR_1,
            &VAR_5->thumbnail_queue_size,
            VAR_7,
            &VAR_9);
   }




   if (!VAR_5->show_fs_thumbnail)
   {
      if (FUNC_1(VAR_5->thumbnail_path_data,
            VAR_0, &VAR_8))
      {
         VAR_5->entry_has_left_thumbnail = FUNC_4(
               &VAR_3,
               VAR_0,
               &VAR_5->left_thumbnail_queue_size,
               VAR_8,
               &VAR_9);
      }
   }


   VAR_5->thumbnail_load_pending = 0;



   VAR_5->force_redraw = 1;
}
