
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sds ;
struct TYPE_3__ {long long name; long long ip; char* port; int flags; scalar_t__ link; scalar_t__ pong_received; scalar_t__ ping_sent; } ;
typedef TYPE_1__ clusterNode ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char*,long long,long long,char*) ;
 int FUNC_2 () ;

sds FUNC_3(clusterNode *VAR_1) {
    sds VAR_2;


    VAR_2 = FUNC_1(FUNC_2(),"%.40s %s:%d ",
        VAR_1->name,
        VAR_1->ip,
        VAR_1->port);


    VAR_2 = FUNC_0(VAR_2, VAR_1->flags);


    VAR_2 = FUNC_1(VAR_2," %lld %lld %s",
        (long long) VAR_1->ping_sent,
        (long long) VAR_1->pong_received,
        (VAR_1->link || VAR_1->flags & VAR_0) ?
                    "connected" : "disconnected");

    return VAR_2;
}
