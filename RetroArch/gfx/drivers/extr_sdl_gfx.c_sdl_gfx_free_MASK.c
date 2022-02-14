
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int scaler; scalar_t__ frame; } ;
struct TYPE_7__ {TYPE_1__ menu; int scaler; scalar_t__ font; TYPE_2__* font_driver; } ;
typedef TYPE_3__ sdl_video_t ;
struct TYPE_6__ {int (* free ) (scalar_t__) ;} ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(void *VAR_1)
{
   sdl_video_t *VAR_2 = (sdl_video_t*)VAR_1;
   if (!VAR_2)
      return;

   if (VAR_2->menu.frame)
      FUNC_0(VAR_2->menu.frame);

   FUNC_1(VAR_0);

   if (VAR_2->font)
      VAR_2->font_driver->free(VAR_2->font);

   FUNC_3(&VAR_2->scaler);
   FUNC_3(&VAR_2->menu.scaler);

   FUNC_2(VAR_2);
}
