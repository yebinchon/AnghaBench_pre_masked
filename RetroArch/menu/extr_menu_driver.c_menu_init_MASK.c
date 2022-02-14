
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int bundle_assets_dst_subdir; int bundle_assets_dst; int bundle_assets_src; } ;
struct TYPE_9__ {scalar_t__ bundle_assets_extract_version_current; scalar_t__ bundle_assets_extract_last_version; } ;
struct TYPE_8__ {scalar_t__ bundle_assets_extract_enable; scalar_t__ config_save_on_exit; scalar_t__ menu_show_start_screen; } ;
struct TYPE_11__ {TYPE_3__ arrays; TYPE_2__ uints; TYPE_1__ bools; } ;
typedef TYPE_4__ settings_t ;
typedef int menu_handle_t ;
struct TYPE_12__ {scalar_t__ allocated; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 TYPE_4__* FUNC_1 () ;
 int FUNC_2 (TYPE_4__*,scalar_t__,int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int,int ) ;
 TYPE_5__ VAR_4 ;
 int VAR_5 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int *,int ,int *,int ,int *,int *) ;
 int FUNC_10 () ;

__attribute__((used)) static bool FUNC_11(menu_handle_t *VAR_6)
{
   settings_t *VAR_7 = FUNC_1();



   FUNC_6();

   if (!FUNC_5())
      return 0;

   if (VAR_7->bools.menu_show_start_screen)
   {




      FUNC_4(1, VAR_2);

      FUNC_2(VAR_7,
            VAR_7->bools.menu_show_start_screen, 0);

      if (VAR_7->bools.config_save_on_exit)
         FUNC_0(VAR_0, ((void*)0));

   }

   if ( VAR_7->bools.bundle_assets_extract_enable
         && !FUNC_8(VAR_7->arrays.bundle_assets_src)
         && !FUNC_8(VAR_7->arrays.bundle_assets_dst)



         && (VAR_7->uints.bundle_assets_extract_version_current
            != VAR_7->uints.bundle_assets_extract_last_version)

      )
   {
      FUNC_4(1, VAR_1);






   }





   VAR_4.allocated = 0;

   VAR_5 = FUNC_10();

   return 1;
}
