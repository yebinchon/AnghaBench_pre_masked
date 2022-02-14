
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* ptr; } ;
struct epoll_event {int events; TYPE_1__ data; } ;
struct TYPE_5__ {int added; int fd; } ;
typedef TYPE_2__ Socket ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int,int ,struct epoll_event*) ;

int
FUNC_1(Socket *VAR_8, int VAR_9)
{
    int VAR_10;

    if (!VAR_8->added && !VAR_9) {
        return 0;
    } else if (!VAR_8->added && VAR_9) {
        VAR_8->added = 1;
        VAR_10 = VAR_4;
    } else if (!VAR_9) {
        VAR_10 = VAR_5;
    } else {
        VAR_10 = VAR_6;
    }

    struct epoll_event VAR_11 = {.events=0};
    switch (VAR_9) {
    case 'r':
        VAR_11.events = VAR_0;
        break;
    case 'w':
        VAR_11.events = VAR_1;
        break;
    }
    VAR_11.events |= VAR_3 | VAR_2;
    VAR_11.data.ptr = VAR_8;

    return FUNC_0(VAR_7, VAR_10, VAR_8->fd, &VAR_11);
}
