
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ menu_rgui_inline_thumbnails; } ;
struct TYPE_9__ {TYPE_1__ bools; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_10__ {int show_fs_thumbnail; } ;
typedef TYPE_3__ rgui_t ;
struct TYPE_12__ {int is_valid; char* path; scalar_t__ height; scalar_t__ width; } ;
struct TYPE_11__ {int is_valid; char* path; scalar_t__ height; scalar_t__ width; } ;


 TYPE_2__* FUNC_0 () ;
 TYPE_6__ VAR_0 ;
 TYPE_5__ VAR_1 ;
 int FUNC_1 (TYPE_3__*,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_2)
{
   rgui_t *VAR_3 = (rgui_t*)VAR_2;
   settings_t *VAR_4 = FUNC_0();
   if (!VAR_3 || !VAR_4)
      return;

   VAR_3->show_fs_thumbnail = !VAR_3->show_fs_thumbnail;






   if (VAR_4->bools.menu_rgui_inline_thumbnails)
   {
      if (VAR_3->show_fs_thumbnail)
      {
         VAR_1.width = 0;
         VAR_1.height = 0;
         VAR_1.is_valid = 0;
         VAR_1.path[0] = '\0';
      }
      else
      {
         VAR_0.width = 0;
         VAR_0.height = 0;
         VAR_0.is_valid = 0;
         VAR_0.path[0] = '\0';
      }
   }





   FUNC_1(VAR_3, 1);
}
