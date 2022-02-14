
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* frame; int scaler; } ;
struct TYPE_8__ {TYPE_2__ menu; scalar_t__ font; TYPE_1__* font_driver; struct TYPE_8__* omap; } ;
typedef TYPE_3__ omap_video_t ;
struct TYPE_6__ {int (* free ) (scalar_t__) ;} ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
   omap_video_t *VAR_1 = VAR_0;
   if (!VAR_1)
      return;

   FUNC_1(VAR_1->omap);
   FUNC_0(VAR_1->omap);

   if (VAR_1->font)
      VAR_1->font_driver->free(VAR_1->font);

   FUNC_2(&VAR_1->menu.scaler);
   FUNC_0(VAR_1->menu.frame);

   FUNC_0(VAR_1);
}
