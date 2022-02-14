
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ image; } ;
struct TYPE_7__ {TYPE_1__ surface; } ;
struct TYPE_9__ {scalar_t__ ubo_tex; TYPE_2__ texture; scalar_t__ font_data; TYPE_3__* font_driver; } ;
typedef TYPE_4__ wiiu_font_t ;
struct TYPE_8__ {int (* free ) (scalar_t__) ;} ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(void* VAR_0, bool VAR_1)
{
   wiiu_font_t* VAR_2 = (wiiu_font_t*)VAR_0;

   if (!VAR_2)
      return;

   if (VAR_2->font_driver && VAR_2->font_data &&
         VAR_2->font_driver->free)
      VAR_2->font_driver->free(VAR_2->font_data);

   if (VAR_2->texture.surface.image)
      FUNC_0(VAR_2->texture.surface.image);
   if (VAR_2->ubo_tex)
      FUNC_0(VAR_2->ubo_tex);
   FUNC_1(VAR_2);
}
