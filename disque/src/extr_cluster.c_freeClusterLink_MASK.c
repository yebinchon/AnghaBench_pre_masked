
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int fd; TYPE_1__* node; int rcvbuf; int sndbuf; } ;
typedef TYPE_2__ clusterLink ;
struct TYPE_8__ {int el; } ;
struct TYPE_6__ {int * link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 TYPE_4__ VAR_2 ;
 int FUNC_3 (TYPE_2__*) ;

void FUNC_4(clusterLink *VAR_3) {
    if (VAR_3->fd != -1) {
        FUNC_0(VAR_2.el, VAR_3->fd, VAR_1);
        FUNC_0(VAR_2.el, VAR_3->fd, VAR_0);
    }
    FUNC_2(VAR_3->sndbuf);
    FUNC_2(VAR_3->rcvbuf);
    if (VAR_3->node)
        VAR_3->node->link = ((void*)0);
    FUNC_1(VAR_3->fd);
    FUNC_3(VAR_3);
}
