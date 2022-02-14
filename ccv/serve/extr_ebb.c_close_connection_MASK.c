
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int (* on_close ) (TYPE_2__*) ;scalar_t__ open; int fd; int timeout_watcher; TYPE_1__* server; int write_watcher; int read_watcher; } ;
typedef TYPE_2__ ebb_connection ;
struct TYPE_5__ {int loop; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_5(ebb_connection *VAR_0)
{
  FUNC_2(VAR_0->server->loop, &VAR_0->read_watcher);
  FUNC_2(VAR_0->server->loop, &VAR_0->write_watcher);
  FUNC_3(VAR_0->server->loop, &VAR_0->timeout_watcher);

  if(0 > FUNC_0(VAR_0->fd))
    FUNC_1("problem closing connection fd");

  VAR_0->open = 0;

  if(VAR_0->on_close)
    VAR_0->on_close(VAR_0);



}
