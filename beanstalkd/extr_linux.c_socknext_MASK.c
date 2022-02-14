
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * ptr; } ;
struct epoll_event {int events; TYPE_1__ data; } ;
typedef int int64 ;
typedef int Socket ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,struct epoll_event*,int,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;

int
FUNC_3(Socket **VAR_7, int64 VAR_8)
{
    int VAR_9;
    struct epoll_event VAR_10 = {.events=0};

    VAR_9 = FUNC_0(VAR_5, &VAR_10, 1, (int)(VAR_8/1000000));
    if (VAR_9 == -1 && VAR_6 != VAR_0) {
        FUNC_2("epoll_wait");
        FUNC_1(1);
    }

    if (VAR_9 > 0) {
        *VAR_7 = VAR_10.data.ptr;
        if (VAR_10.events & (VAR_1|VAR_4)) {
            return 'h';
        } else if (VAR_10.events & VAR_2) {
            return 'r';
        } else if (VAR_10.events & VAR_3) {
            return 'w';
        }
    }
    return 0;
}
