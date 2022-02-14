
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct timeval {int tv_usec; int tv_sec; } ;
struct pollfd {int events; int fd; } ;
struct TYPE_6__ {int fd; } ;
typedef TYPE_1__ redisContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*,int ,char*) ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct pollfd*,int,long) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(redisContext *VAR_9, const struct timeval *VAR_10) {
    struct pollfd VAR_11[1];
    long VAR_12;

    VAR_12 = -1;
    VAR_11[0].fd = VAR_9->fd;
    VAR_11[0].events = VAR_3;


    if (VAR_10 != ((void*)0)) {
        if (VAR_10->tv_usec > 1000000 || VAR_10->tv_sec > VAR_7) {
            FUNC_0(VAR_9, VAR_5, ((void*)0));
            FUNC_3(VAR_9);
            return VAR_4;
        }

        VAR_12 = (VAR_10->tv_sec * 1000) + ((VAR_10->tv_usec + 999) / 1000);

        if (VAR_12 < 0 || VAR_12 > VAR_2) {
            VAR_12 = VAR_2;
        }
    }

    if (VAR_8 == VAR_0) {
        int VAR_13;

        if ((VAR_13 = FUNC_1(VAR_11, 1, VAR_12)) == -1) {
            FUNC_0(VAR_9, VAR_5, "poll(2)");
            FUNC_3(VAR_9);
            return VAR_4;
        } else if (VAR_13 == 0) {
            VAR_8 = VAR_1;
            FUNC_0(VAR_9,VAR_5,((void*)0));
            FUNC_3(VAR_9);
            return VAR_4;
        }

        if (FUNC_2(VAR_9) != VAR_6)
            return VAR_4;

        return VAR_6;
    }

    FUNC_0(VAR_9,VAR_5,((void*)0));
    FUNC_3(VAR_9);
    return VAR_4;
}
