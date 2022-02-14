
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int max; int min; } ;
typedef TYPE_1__ menu_input_ctx_bind_limits_t ;
struct TYPE_5__ {int last; int begin; } ;


 TYPE_3__ VAR_0 ;

bool FUNC_0(menu_input_ctx_bind_limits_t *VAR_1)
{
   if (!VAR_1)
      return 0;

   VAR_0.begin = VAR_1->min;
   VAR_0.last = VAR_1->max;

   return 1;
}
