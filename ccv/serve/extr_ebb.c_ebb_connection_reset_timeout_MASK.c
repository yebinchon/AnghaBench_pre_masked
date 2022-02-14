
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int timeout_watcher; TYPE_1__* server; } ;
typedef TYPE_2__ ebb_connection ;
struct TYPE_4__ {int loop; } ;


 int FUNC_0 (int ,int *) ;

void
FUNC_1(ebb_connection *VAR_0)
{
  FUNC_0(VAR_0->server->loop, &VAR_0->timeout_watcher);
}
