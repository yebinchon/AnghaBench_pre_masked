
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; int tv_usec; } ;
struct pollfd {int revents; scalar_t__ fd; int events; } ;
struct _reent {int dummy; } ;
typedef int nfds_t ;
typedef int fd_set ;
typedef int __errno_r ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct _reent* FUNC_4 () ;
 int FUNC_5 (int,int *,int *,int *,struct timeval*) ;

int FUNC_6(struct pollfd *VAR_11, nfds_t VAR_12, int VAR_13)
{
    struct timeval VAR_14 = {

        .tv_sec = VAR_13 / 1000,
        .tv_usec = (VAR_13 % 1000) * 1000,
    };
    int VAR_15 = -1;
    fd_set VAR_16;
    fd_set VAR_17;
    fd_set VAR_18;
    struct _reent* VAR_19 = FUNC_4();
    int VAR_20 = 0;

    if (VAR_11 == ((void*)0)) {
        __errno_r(VAR_21) = VAR_0;
        return -1;
    }

    FUNC_2(&VAR_16);
    FUNC_2(&VAR_17);
    FUNC_2(&VAR_18);

    for (int VAR_22 = 0; VAR_22 < VAR_12; ++VAR_22) {
        VAR_11[VAR_22].revents = 0;

        if (VAR_11[VAR_22].fd < 0) {

            continue;
        }

        if (VAR_11[VAR_22].fd >= VAR_1) {
            VAR_11[VAR_22].revents |= VAR_4;
            ++VAR_20;
            continue;
        }

        if (VAR_11[VAR_22].events & (VAR_3 | VAR_8 | VAR_7 | VAR_6)) {
            FUNC_1(VAR_11[VAR_22].fd, &VAR_16);
            FUNC_1(VAR_11[VAR_22].fd, &VAR_18);
            VAR_15 = FUNC_3(VAR_15, VAR_11[VAR_22].fd);
        }

        if (VAR_11[VAR_22].events & (VAR_5 | VAR_10 | VAR_9)) {
            FUNC_1(VAR_11[VAR_22].fd, &VAR_17);
            FUNC_1(VAR_11[VAR_22].fd, &VAR_18);
            VAR_15 = FUNC_3(VAR_15, VAR_11[VAR_22].fd);
        }
    }

    const int VAR_23 = FUNC_5(VAR_15 + 1, &VAR_16, &VAR_17, &VAR_18, VAR_13 < 0 ? ((void*)0): &VAR_14);

    if (VAR_23 > 0) {
        VAR_20 += VAR_23;

        for (int VAR_24 = 0; VAR_24 < VAR_12; ++VAR_24) {
            if (FUNC_0(VAR_11[VAR_24].fd, &VAR_16)) {
                VAR_11[VAR_24].revents |= VAR_3;
            }

            if (FUNC_0(VAR_11[VAR_24].fd, &VAR_17)) {
                VAR_11[VAR_24].revents |= VAR_5;
            }

            if (FUNC_0(VAR_11[VAR_24].fd, &VAR_18)) {
                VAR_11[VAR_24].revents |= VAR_2;
            }
        }
    } else {
        VAR_20 = VAR_23;

    }

    return VAR_20;
}
