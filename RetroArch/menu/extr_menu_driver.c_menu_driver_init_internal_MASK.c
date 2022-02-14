
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int menu_driver; } ;
struct TYPE_10__ {TYPE_1__ arrays; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_11__ {TYPE_7__* driver_ctx; int userdata; } ;
typedef TYPE_3__ menu_handle_t ;
struct TYPE_12__ {int (* lists_init ) (TYPE_3__*) ;int ident; scalar_t__ (* init ) (int *,int) ;} ;


 TYPE_2__* FUNC_0 () ;
 TYPE_7__* VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static bool FUNC_5(bool VAR_3)
{
   if (VAR_0->init)
   {
      VAR_1 = (menu_handle_t*)
         VAR_0->init(&VAR_2, VAR_3);
      VAR_1->userdata = VAR_2;
      VAR_1->driver_ctx = VAR_0;
   }

   if (!VAR_1 || !FUNC_1(VAR_1))
      return 0;

   {
      settings_t *VAR_4 = FUNC_0();
      FUNC_2(VAR_4->arrays.menu_driver, VAR_0->ident,
            sizeof(VAR_4->arrays.menu_driver));
   }

   if (VAR_0->lists_init)
      if (!VAR_0->lists_init(VAR_1))
         return 0;

   return 1;
}
