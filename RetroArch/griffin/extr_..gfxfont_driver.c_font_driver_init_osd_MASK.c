
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int video_font_size; } ;
struct TYPE_5__ {scalar_t__* path_font; } ;
struct TYPE_7__ {TYPE_2__ floats; TYPE_1__ paths; } ;
typedef TYPE_3__ settings_t ;
typedef enum font_driver_render_api { ____Placeholder_font_driver_render_api } font_driver_render_api ;


 int FUNC_0 (char*) ;
 TYPE_3__* FUNC_1 () ;
 scalar_t__ FUNC_2 (void*,scalar_t__*,int ,int,int,int) ;
 scalar_t__ VAR_0 ;

void FUNC_3(
      void *VAR_1,
      bool VAR_2,
      bool VAR_3,
      enum font_driver_render_api VAR_4)
{
   settings_t *VAR_5 = FUNC_1();
   if (VAR_0)
      return;

   VAR_0 = FUNC_2(VAR_1,
         *VAR_5->paths.path_font ? VAR_5->paths.path_font : ((void*)0),
         VAR_5->floats.video_font_size, VAR_2, VAR_3, VAR_4);

   if (!VAR_0)
      FUNC_0("[font]: Failed to initialize OSD font.\n");
}
