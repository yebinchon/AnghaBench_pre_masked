
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int fail_reports; scalar_t__ port; int ip; int * link; scalar_t__ fail_time; scalar_t__ pong_received; scalar_t__ ping_sent; int ctime; int name; } ;
typedef TYPE_1__ clusterNode ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 () ;
 int VAR_1 ;
 TYPE_1__* FUNC_6 (int) ;

clusterNode *FUNC_7(char *VAR_2, int VAR_3) {
    clusterNode *VAR_4 = FUNC_6(sizeof(*VAR_4));

    if (VAR_2)
        FUNC_3(VAR_4->name, VAR_2, VAR_0);
    else
        FUNC_0(VAR_4->name, VAR_0);
    VAR_4->ctime = FUNC_5();
    VAR_4->flags = VAR_3;
    VAR_4->ping_sent = VAR_4->pong_received = 0;
    VAR_4->fail_time = 0;
    VAR_4->link = ((void*)0);
    FUNC_4(VAR_4->ip,0,sizeof(VAR_4->ip));
    VAR_4->port = 0;
    VAR_4->fail_reports = FUNC_1();
    FUNC_2(VAR_4->fail_reports,VAR_1);
    return VAR_4;
}
