
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int view; int staging; int handle; } ;
struct TYPE_7__ {TYPE_1__ texture; scalar_t__ font_data; TYPE_2__* font_driver; } ;
typedef TYPE_3__ d3d10_font_t ;
struct TYPE_6__ {int (* free ) (scalar_t__) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(void* VAR_0, bool VAR_1)
{
   d3d10_font_t* VAR_2 = (d3d10_font_t*)VAR_0;

   if (!VAR_2)
      return;

   if (VAR_2->font_driver && VAR_2->font_data && VAR_2->font_driver->free)
      VAR_2->font_driver->free(VAR_2->font_data);

   FUNC_0(VAR_2->texture.handle);
   FUNC_0(VAR_2->texture.staging);
   FUNC_0(VAR_2->texture.view);
   FUNC_1(VAR_2);
}
