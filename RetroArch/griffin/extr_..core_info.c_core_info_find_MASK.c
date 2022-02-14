
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int inf; } ;
typedef TYPE_1__ core_info_ctx_find_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*) ;

bool FUNC_1(core_info_ctx_find_t *VAR_1, const char *VAR_2)
{
   if (!VAR_1 || !VAR_0)
      return 0;
   VAR_1->inf = FUNC_0(VAR_0, VAR_2);
   if (!VAR_1->inf)
      return 0;
   return 1;
}
