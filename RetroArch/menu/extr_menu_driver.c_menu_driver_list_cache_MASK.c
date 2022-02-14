
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int action; int type; } ;
typedef TYPE_1__ menu_ctx_list_t ;
struct TYPE_5__ {int (* list_cache ) (int ,int ,int ) ;} ;


 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;

bool FUNC_1(menu_ctx_list_t *VAR_2)
{
   if (!VAR_2 || !VAR_0 || !VAR_0->list_cache)
      return 0;

   VAR_0->list_cache(VAR_1,
         VAR_2->type, VAR_2->action);
   return 1;
}
