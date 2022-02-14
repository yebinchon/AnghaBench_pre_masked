
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int tv_sec; int tv_usec; } ;
struct TYPE_6__ {TYPE_5__ timeout; int port; int host; } ;
struct config {TYPE_1__ tcp; } ;
struct TYPE_7__ {scalar_t__ err; } ;
typedef TYPE_2__ redisContext ;
typedef int LONG_MAX ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (int ,int ,TYPE_5__) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct config VAR_1) {
    redisContext *VAR_2;

    FUNC_2("Set error when an invalid timeout usec value is given to redisConnectWithTimeout: ");

    VAR_1.tcp.timeout.tv_sec = 0;
    VAR_1.tcp.timeout.tv_usec = 10000001;

    VAR_2 = FUNC_0(VAR_1.tcp.host, VAR_1.tcp.port, VAR_1.tcp.timeout);

    FUNC_3(VAR_2->err == VAR_0);

    FUNC_2("Set error when an invalid timeout sec value is given to redisConnectWithTimeout: ");

    VAR_1.tcp.timeout.tv_sec = (((LONG_MAX) - 999) / 1000) + 1;
    VAR_1.tcp.timeout.tv_usec = 0;

    VAR_2 = FUNC_0(VAR_1.tcp.host, VAR_1.tcp.port, VAR_1.tcp.timeout);

    FUNC_3(VAR_2->err == VAR_0);

    FUNC_1(VAR_2);
}
