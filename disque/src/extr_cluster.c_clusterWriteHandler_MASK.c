
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_4__ {int fd; int sndbuf; } ;
typedef TYPE_1__ clusterLink ;
typedef int aeEventLoop ;
struct TYPE_5__ {int el; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__,int) ;
 TYPE_2__ VAR_3 ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int,int ,scalar_t__) ;

void FUNC_8(aeEventLoop *VAR_4, int VAR_5, void *VAR_6, int VAR_7) {
    clusterLink *VAR_8 = (clusterLink*) VAR_6;
    ssize_t VAR_9;
    FUNC_0(*VAR_4);
    FUNC_0(VAR_7);

    VAR_9 = FUNC_7(VAR_5, VAR_8->sndbuf, FUNC_3(VAR_8->sndbuf));
    if (VAR_9 <= 0) {
        FUNC_5(VAR_1,"I/O error writing to node link: %s",
            FUNC_6(VAR_2));
        FUNC_2(VAR_8);
        return;
    }
    FUNC_4(VAR_8->sndbuf,VAR_9,-1);
    if (FUNC_3(VAR_8->sndbuf) == 0)
        FUNC_1(VAR_3.el, VAR_8->fd, VAR_0);
}
