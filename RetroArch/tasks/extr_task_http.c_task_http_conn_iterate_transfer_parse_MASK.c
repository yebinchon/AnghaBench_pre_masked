
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * handle; int (* cb ) (TYPE_2__*,int ) ;} ;
struct TYPE_6__ {TYPE_1__ connection; } ;
typedef TYPE_2__ http_handle_t ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_3(
      http_handle_t *VAR_0)
{
   if (FUNC_0(VAR_0->connection.handle))
   {
      if (VAR_0->connection.handle && VAR_0->connection.cb)
         VAR_0->connection.cb(VAR_0, 0);
   }

   FUNC_1(VAR_0->connection.handle);

   VAR_0->connection.handle = ((void*)0);

   return 0;
}
