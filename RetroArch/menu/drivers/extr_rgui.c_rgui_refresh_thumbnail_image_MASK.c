
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ menu_rgui_inline_thumbnails; } ;
struct TYPE_10__ {TYPE_1__ bools; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_11__ {scalar_t__ is_playlist; int thumbnail_path_data; scalar_t__ show_fs_thumbnail; } ;
typedef TYPE_3__ rgui_t ;
struct TYPE_14__ {int is_valid; char* path; scalar_t__ height; scalar_t__ width; } ;
struct TYPE_13__ {int is_valid; char* path; scalar_t__ height; scalar_t__ width; } ;
struct TYPE_12__ {int is_valid; char* path; scalar_t__ height; scalar_t__ width; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 () ;
 TYPE_7__ VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 TYPE_6__ VAR_3 ;
 TYPE_5__ VAR_4 ;
 int FUNC_2 (TYPE_3__*,int) ;

__attribute__((used)) static void FUNC_3(void *VAR_5, unsigned VAR_6)
{
   rgui_t *VAR_7 = (rgui_t*)VAR_5;
   settings_t *VAR_8 = FUNC_0();
   if (!VAR_7 || !VAR_8)
      return;


   if ((VAR_7->show_fs_thumbnail || VAR_8->bools.menu_rgui_inline_thumbnails) &&
       (FUNC_1(VAR_7->thumbnail_path_data, VAR_1) ||
        FUNC_1(VAR_7->thumbnail_path_data, VAR_0)))
   {

      VAR_2.width = 0;
      VAR_2.height = 0;
      VAR_2.is_valid = 0;
      VAR_2.path[0] = '\0';

      VAR_4.width = 0;
      VAR_4.height = 0;
      VAR_4.is_valid = 0;
      VAR_4.path[0] = '\0';

      VAR_3.width = 0;
      VAR_3.height = 0;
      VAR_3.is_valid = 0;
      VAR_3.path[0] = '\0';




      if (VAR_7->is_playlist)
         FUNC_2(VAR_7, 1);
   }
}
