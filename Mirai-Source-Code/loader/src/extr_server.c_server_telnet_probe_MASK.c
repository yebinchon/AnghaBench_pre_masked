
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct telnet_info {int port; int addr; } ;
struct TYPE_3__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct server_worker {int efd; } ;
struct server {size_t workers_len; int max_open; struct connection** estab_conns; int curr_open; int curr_worker_child; struct server_worker* workers; } ;
struct TYPE_4__ {int fd; } ;
struct epoll_event {int events; TYPE_2__ data; } ;
struct connection {int fd; struct server* srv; int info; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 size_t FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int,struct sockaddr*,int) ;
 int FUNC_3 (struct connection*) ;
 int FUNC_4 (struct connection*) ;
 int FUNC_5 (int ,int ,int,struct epoll_event*) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (int *,struct telnet_info*,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct server*) ;

void FUNC_10(struct server *VAR_5, struct telnet_info *VAR_6)
{
    int VAR_7 = FUNC_9(VAR_5);
    struct sockaddr_in VAR_8;
    struct connection *VAR_9;
    struct epoll_event VAR_10;
    int VAR_11;
    struct server_worker *VAR_12 = &VAR_5->workers[FUNC_1(&VAR_5->curr_worker_child) % VAR_5->workers_len];

    if (VAR_7 == -1)
    {
        if (FUNC_8(((void*)0)) % 10 == 0)
        {
            FUNC_7("Failed to open and bind socket\n");
        }
        FUNC_0(&VAR_5->curr_open);
        return;
    }
    while (VAR_7 >= (VAR_5->max_open * 2))
    {
        FUNC_7("fd too big\n");
        VAR_9->fd = VAR_7;



        FUNC_3(VAR_9);
        return;
    }

    if (VAR_5 == ((void*)0))
        FUNC_7("srv == NULL 4\n");

    VAR_9 = VAR_5->estab_conns[VAR_7];
    FUNC_6(&VAR_9->info, VAR_6, sizeof (struct telnet_info));
    VAR_9->srv = VAR_5;
    VAR_9->fd = VAR_7;
    FUNC_4(VAR_9);

    VAR_8.sin_family = VAR_0;
    VAR_8.sin_addr.s_addr = VAR_6->addr;
    VAR_8.sin_port = VAR_6->port;
    VAR_11 = FUNC_2(VAR_7, (struct sockaddr *)&VAR_8, sizeof (struct sockaddr_in));
    if (VAR_11 == -1 && VAR_4 != VAR_1)
    {
        FUNC_7("got connect error\n");
    }

    VAR_10.data.fd = VAR_7;
    VAR_10.events = VAR_2;
    FUNC_5(VAR_12->efd, VAR_3, VAR_7, &VAR_10);
}
