
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int handle; } ;
struct TYPE_4__ {int error; int * cb; int handle; TYPE_1__ connection; } ;
typedef TYPE_2__ http_handle_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(void *VAR_0, size_t VAR_1)
{
   http_handle_t *VAR_2 = (http_handle_t*)VAR_0;

   if (!VAR_2)
      return -1;

   if (!FUNC_1())
      return -1;

   VAR_2->handle = FUNC_0(VAR_2->connection.handle);

   if (!VAR_2->handle)
   {
      VAR_2->error = 1;
      return -1;
   }

   VAR_2->cb = ((void*)0);

   return 0;
}
