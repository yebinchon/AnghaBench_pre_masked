
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * environ_get; int * args; int * argv; scalar_t__ argc; } ;
typedef TYPE_1__ content_ctx_info_t ;


 int FUNC_0 (char const*,char const*,char const*,TYPE_1__*,int *,int *) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0,
      const char *VAR_1, const char *VAR_2)
{
   content_ctx_info_t VAR_3;
   VAR_3.argc = 0;
   VAR_3.argv = ((void*)0);
   VAR_3.args = ((void*)0);
   VAR_3.environ_get = ((void*)0);
   if (!FUNC_0(
            VAR_0, VAR_1, VAR_2,
            &VAR_3,
            ((void*)0), ((void*)0)))
      return -1;
   return 0;
}
