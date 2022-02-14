
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int fd; int events; int revents; } ;
typedef int pfd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct pollfd*,int ,int) ;
 int FUNC_1 (struct pollfd*,int,long long) ;

int FUNC_2(int VAR_6, int VAR_7, long long VAR_8) {
    struct pollfd VAR_9;
    int VAR_10 = 0, VAR_11;

    FUNC_0(&VAR_9, 0, sizeof(VAR_9));
    VAR_9.fd = VAR_6;
    if (VAR_7 & VAR_0) VAR_9.events |= VAR_4;
    if (VAR_7 & VAR_1) VAR_9.events |= VAR_5;

    if ((VAR_11 = FUNC_1(&VAR_9, 1, VAR_8))== 1) {
        if (VAR_9.revents & VAR_4) VAR_10 |= VAR_0;
        if (VAR_9.revents & VAR_5) VAR_10 |= VAR_1;
 if (VAR_9.revents & VAR_2) VAR_10 |= VAR_1;
        if (VAR_9.revents & VAR_3) VAR_10 |= VAR_1;
        return VAR_10;
    } else {
        return VAR_11;
    }
}
