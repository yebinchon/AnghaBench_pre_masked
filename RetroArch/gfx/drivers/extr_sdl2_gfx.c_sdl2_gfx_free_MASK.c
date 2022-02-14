
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ font_data; TYPE_1__* font_driver; scalar_t__ window; scalar_t__ renderer; } ;
typedef TYPE_2__ sdl2_video_t ;
struct TYPE_4__ {int (* free ) (scalar_t__) ;} ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(void *VAR_1)
{
   sdl2_video_t *VAR_2 = (sdl2_video_t*)VAR_1;
   if (!VAR_2)
      return;

   if (VAR_2->renderer)
      FUNC_0(VAR_2->renderer);

   if (VAR_2->window)
      FUNC_1(VAR_2->window);

   FUNC_2(VAR_0);

   if (VAR_2->font_data)
      VAR_2->font_driver->free(VAR_2->font_data);

   FUNC_3(VAR_2);
}
