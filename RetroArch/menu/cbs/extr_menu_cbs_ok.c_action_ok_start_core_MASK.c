
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * environ_get; int * args; int * argv; scalar_t__ argc; } ;
typedef TYPE_1__ content_ctx_info_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_1,
      const char *VAR_2, unsigned VAR_3, size_t VAR_4, size_t VAR_5)
{
   content_ctx_info_t VAR_6;

   VAR_6.argc = 0;
   VAR_6.argv = ((void*)0);
   VAR_6.args = ((void*)0);
   VAR_6.environ_get = ((void*)0);

   FUNC_0(VAR_0);
   if (!FUNC_1(&VAR_6))
      return -1;

   return 0;
}
