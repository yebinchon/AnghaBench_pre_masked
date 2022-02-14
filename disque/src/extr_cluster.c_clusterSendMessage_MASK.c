
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int sndbuf; int fd; } ;
typedef TYPE_2__ clusterLink ;
struct TYPE_8__ {TYPE_1__* cluster; int el; } ;
struct TYPE_6__ {int stats_bus_messages_sent; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_1 (int ,unsigned char*,size_t) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_3__ VAR_2 ;

void FUNC_3(clusterLink *VAR_3, unsigned char *VAR_4, size_t VAR_5) {
    if (FUNC_2(VAR_3->sndbuf) == 0 && VAR_5 != 0)
        FUNC_0(VAR_2.el,VAR_3->fd,VAR_0,
                    VAR_1,VAR_3);

    VAR_3->sndbuf = FUNC_1(VAR_3->sndbuf, VAR_4, VAR_5);
    VAR_2.cluster->stats_bus_messages_sent++;
}
