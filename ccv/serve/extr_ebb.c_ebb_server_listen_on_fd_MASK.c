
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int listening; int fd; int connection_watcher; int loop; } ;
typedef TYPE_1__ ebb_server ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int const,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int const) ;

int
FUNC_6(ebb_server *VAR_2, const int VAR_3)
{
  FUNC_0(VAR_2->listening == 0);

  if (FUNC_3(VAR_3, VAR_0) < 0) {
    FUNC_4("listen()");
    return -1;
  }

  FUNC_5(VAR_3);

  VAR_2->fd = VAR_3;
  VAR_2->listening = 1;

  FUNC_1 (&VAR_2->connection_watcher, VAR_2->fd, VAR_1);
  FUNC_2 (VAR_2->loop, &VAR_2->connection_watcher);

  return VAR_2->fd;
}
