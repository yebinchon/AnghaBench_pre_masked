
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ tex; TYPE_2__* gl; scalar_t__ font_data; TYPE_3__* font_driver; } ;
typedef TYPE_4__ gl_raster_t ;
struct TYPE_8__ {int (* free ) (scalar_t__) ;} ;
struct TYPE_7__ {TYPE_1__* ctx_driver; } ;
struct TYPE_6__ {int (* make_current ) (int) ;} ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int,scalar_t__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(void *VAR_0,
      bool VAR_1)
{
   gl_raster_t *VAR_2 = (gl_raster_t*)VAR_0;
   if (!VAR_2)
      return;

   if (VAR_2->font_driver && VAR_2->font_data)
      VAR_2->font_driver->free(VAR_2->font_data);

   if (VAR_1)
   {
      if (
            VAR_2->gl &&
            VAR_2->gl->ctx_driver &&
            VAR_2->gl->ctx_driver->make_current)
         VAR_2->gl->ctx_driver->make_current(1);
   }

   if (VAR_2->tex)
   {
      FUNC_1(1, &VAR_2->tex);
      VAR_2->tex = 0;
   }

   FUNC_0(VAR_2);
}
