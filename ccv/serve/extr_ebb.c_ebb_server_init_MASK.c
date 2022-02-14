
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ev_loop {int dummy; } ;
struct TYPE_5__ {TYPE_1__* data; } ;
struct TYPE_4__ {char* port; int fd; int * data; int * new_connection; scalar_t__ secure; TYPE_2__ connection_watcher; scalar_t__ listening; struct ev_loop* loop; } ;
typedef TYPE_1__ ebb_server ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;

void
FUNC_1(ebb_server *VAR_1, struct ev_loop *VAR_2)
{
  VAR_1->loop = VAR_2;
  VAR_1->listening = 0;
  VAR_1->port[0] = '\0';
  VAR_1->fd = -1;
  VAR_1->connection_watcher.data = VAR_1;
  FUNC_0 (&VAR_1->connection_watcher, VAR_0);
  VAR_1->secure = 0;

  VAR_1->new_connection = ((void*)0);
  VAR_1->data = ((void*)0);
}
