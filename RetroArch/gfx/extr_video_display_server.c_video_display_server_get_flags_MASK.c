
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ gfx_ctx_flags_t ;
struct TYPE_5__ {int (* get_flags ) (int ) ;} ;


 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

bool FUNC_1(gfx_ctx_flags_t *VAR_2)
{
   if (!VAR_0 || !VAR_0->get_flags)
      return 0;
   if (!VAR_2)
      return 0;

   VAR_2->flags = VAR_0->get_flags(
         VAR_1);
   return 1;
}
