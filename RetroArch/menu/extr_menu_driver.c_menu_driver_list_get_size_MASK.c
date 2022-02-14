
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; scalar_t__ size; } ;
typedef TYPE_1__ menu_ctx_list_t ;
struct TYPE_5__ {scalar_t__ (* list_get_size ) (int ,int ) ;} ;


 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;

bool FUNC_1(menu_ctx_list_t *VAR_2)
{
   if (!VAR_0 || !VAR_0->list_get_size)
   {
      VAR_2->size = 0;
      return 0;
   }
   VAR_2->size = VAR_0->list_get_size(VAR_1, VAR_2->type);
   return 1;
}
