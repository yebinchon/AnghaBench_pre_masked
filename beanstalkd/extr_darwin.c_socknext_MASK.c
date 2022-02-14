
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_sec; int tv_nsec; } ;
struct kevent {int flags; int filter; int * udata; } ;
typedef int int64 ;
typedef int Socket ;


 scalar_t__ VAR_0 ;


 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int *,int ,struct kevent*,int,struct timespec*) ;
 int VAR_3 ;
 int FUNC_1 (char*) ;

int
FUNC_2(Socket **VAR_4, int64 VAR_5)
{
    int VAR_6;
    struct kevent VAR_7;
    static struct timespec VAR_8;

    VAR_8.tv_sec = VAR_5 / 1000000000;
    VAR_8.tv_nsec = VAR_5 % 1000000000;
    VAR_6 = FUNC_0(VAR_3, ((void*)0), 0, &VAR_7, 1, &VAR_8);
    if (VAR_6 == -1 && VAR_2 != VAR_0) {
        FUNC_1("kevent");
        return -1;
    }

    if (VAR_6 > 0) {
        *VAR_4 = VAR_7.udata;
        if (VAR_7.flags & VAR_1) {
            return 'h';
        }
        switch (VAR_7.filter) {
        case 129:
            return 'r';
        case 128:
            return 'w';
        }
    }
    return 0;
}
