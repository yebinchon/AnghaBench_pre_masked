
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int deferred_path; } ;
typedef TYPE_1__ menu_handle_t ;
struct TYPE_6__ {int * environ_get; int * args; int * argv; scalar_t__ argc; } ;
typedef TYPE_2__ content_ctx_info_t ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (char const*,int ,TYPE_2__*,int ,int *,int *) ;

__attribute__((used)) static int FUNC_4(const char *VAR_1,
      const char *VAR_2, unsigned VAR_3, size_t VAR_4, size_t VAR_5)
{
   content_ctx_info_t VAR_6;
   menu_handle_t *VAR_7 = FUNC_2();

   VAR_6.argc = 0;
   VAR_6.argv = ((void*)0);
   VAR_6.args = ((void*)0);
   VAR_6.environ_get = ((void*)0);

   if (!VAR_7)
      return FUNC_1();

   if (!FUNC_3(
            VAR_1, VAR_7->deferred_path,
            &VAR_6,
            VAR_0,
            ((void*)0), ((void*)0)))
      return -1;
   FUNC_0(VAR_1);

   return 0;
}
