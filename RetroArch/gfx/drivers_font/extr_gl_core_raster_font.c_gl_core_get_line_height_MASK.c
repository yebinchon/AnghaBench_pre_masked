
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int font_data; TYPE_1__* font_driver; } ;
typedef TYPE_2__ gl_core_raster_t ;
struct TYPE_3__ {int (* get_line_height ) (int ) ;} ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_0)
{
   gl_core_raster_t *VAR_1 = (gl_core_raster_t*)VAR_0;

   if (!VAR_1 || !VAR_1->font_driver || !VAR_1->font_data)
      return -1;

   return VAR_1->font_driver->get_line_height(VAR_1->font_data);
}
