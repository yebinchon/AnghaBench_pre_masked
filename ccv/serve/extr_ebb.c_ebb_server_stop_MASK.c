
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* port; scalar_t__ listening; int fd; int connection_watcher; int loop; } ;
typedef TYPE_1__ ebb_server ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;

void
FUNC_2(ebb_server *VAR_0)
{
  if(VAR_0->listening) {
    FUNC_1(VAR_0->loop, &VAR_0->connection_watcher);
    FUNC_0(VAR_0->fd);
    VAR_0->port[0] = '\0';
    VAR_0->listening = 0;
  }
}
