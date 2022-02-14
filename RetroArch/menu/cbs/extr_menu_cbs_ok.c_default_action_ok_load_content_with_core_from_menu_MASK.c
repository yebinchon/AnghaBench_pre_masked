
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum rarch_core_type { ____Placeholder_rarch_core_type } rarch_core_type ;
struct TYPE_3__ {int * environ_get; int * args; int * argv; scalar_t__ argc; } ;
typedef TYPE_1__ content_ctx_info_t ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,TYPE_1__*,int,int *,int *) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, unsigned VAR_1)
{
   content_ctx_info_t VAR_2;
   VAR_2.argc = 0;
   VAR_2.argv = ((void*)0);
   VAR_2.args = ((void*)0);
   VAR_2.environ_get = ((void*)0);
   if (!FUNC_1(
            VAR_0, &VAR_2,
            (enum rarch_core_type)VAR_1, ((void*)0), ((void*)0)))
      return -1;
   FUNC_0(VAR_0);
   return 0;
}
