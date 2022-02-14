
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; int info; } ;
typedef TYPE_1__ menu_ctx_displaylist_t ;
struct TYPE_5__ {scalar_t__ (* list_push ) (int ,int ,int ,int ) ;} ;


 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;

bool FUNC_1(menu_ctx_displaylist_t *VAR_3)
{
   if (VAR_0->list_push)
      if (VAR_0->list_push(VAR_1,
               VAR_2, VAR_3->info, VAR_3->type) == 0)
         return 1;
   return 0;
}
