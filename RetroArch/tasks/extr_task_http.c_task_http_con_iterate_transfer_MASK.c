
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int handle; } ;
struct TYPE_5__ {TYPE_1__ connection; } ;
typedef TYPE_2__ http_handle_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(http_handle_t *VAR_0)
{
   if (!FUNC_0(VAR_0->connection.handle))
      return -1;
   return 0;
}
