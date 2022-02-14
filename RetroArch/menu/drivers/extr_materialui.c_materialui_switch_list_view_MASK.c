
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ menu_materialui_thumbnail_view_portrait; scalar_t__ menu_materialui_thumbnail_view_landscape; } ;
struct TYPE_11__ {TYPE_1__ uints; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_12__ {int secondary_thumbnail_enabled; scalar_t__ list_view_type; int need_compute; scalar_t__ is_portrait; int primary_thumbnail_available; } ;
typedef TYPE_3__ materialui_handle_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_3__*) ;
 size_t FUNC_5 () ;

__attribute__((used)) static void FUNC_6(materialui_handle_t *VAR_5)
{
   settings_t *VAR_6 = FUNC_0();
   size_t VAR_7 = FUNC_5();
   bool VAR_8 = VAR_5->secondary_thumbnail_enabled;

   if (!VAR_6)
      return;



   if ((VAR_5->list_view_type == VAR_2) ||
       !VAR_5->primary_thumbnail_available)
      return;






   FUNC_1(VAR_5, VAR_4);


   if (VAR_5->is_portrait)
   {
      VAR_6->uints.menu_materialui_thumbnail_view_portrait++;

      if (VAR_6->uints.menu_materialui_thumbnail_view_portrait >=
            VAR_1)
         VAR_6->uints.menu_materialui_thumbnail_view_portrait = 0;
   }
   else
   {
      VAR_6->uints.menu_materialui_thumbnail_view_landscape++;

      if (VAR_6->uints.menu_materialui_thumbnail_view_landscape >=
            VAR_0)
         VAR_6->uints.menu_materialui_thumbnail_view_landscape = 0;
   }


   FUNC_4(VAR_5);







   if ((VAR_5->list_view_type == VAR_2) ||
       (VAR_5->list_view_type == VAR_3) ||
       (VAR_8 && !VAR_5->secondary_thumbnail_enabled))
      FUNC_3();



   FUNC_2(VAR_5, VAR_6);

   VAR_5->need_compute = 1;
}
