
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bg; } ;
struct TYPE_5__ {TYPE_1__ textures; } ;
typedef TYPE_2__ materialui_handle_t ;
typedef enum menu_image_type { ____Placeholder_menu_image_type } menu_image_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 () ;
 int FUNC_2 (void*,int ,int *) ;

__attribute__((used)) static bool FUNC_3(void *VAR_2, void *VAR_3, enum menu_image_type VAR_4)
{
   materialui_handle_t *VAR_5 = (materialui_handle_t*)VAR_2;

   if (VAR_4 == VAR_0)
   {
      FUNC_0(VAR_5);
      FUNC_2(VAR_3,
            VAR_1, &VAR_5->textures.bg);
      FUNC_1();
   }

   return 1;
}
