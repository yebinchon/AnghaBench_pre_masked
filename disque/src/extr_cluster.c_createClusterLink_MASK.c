
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int clusterNode ;
struct TYPE_4__ {int fd; int * node; void* rcvbuf; void* sndbuf; int ctime; } ;
typedef TYPE_1__ clusterLink ;


 int FUNC_0 () ;
 void* FUNC_1 () ;
 TYPE_1__* FUNC_2 (int) ;

clusterLink *FUNC_3(clusterNode *VAR_0) {
    clusterLink *VAR_1 = FUNC_2(sizeof(*VAR_1));
    VAR_1->ctime = FUNC_0();
    VAR_1->sndbuf = FUNC_1();
    VAR_1->rcvbuf = FUNC_1();
    VAR_1->node = VAR_0;
    VAR_1->fd = -1;
    return VAR_1;
}
