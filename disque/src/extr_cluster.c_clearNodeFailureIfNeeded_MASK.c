
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int name; } ;
typedef TYPE_1__ clusterNode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ) ;

void FUNC_4(clusterNode *VAR_4) {
    FUNC_2(FUNC_1(VAR_4));


    FUNC_3(VAR_3,
        "Clear FAIL state for node %.40s: it is reachable again.",
            VAR_4->name);
    VAR_4->flags &= ~VAR_0;
    FUNC_0(VAR_2|VAR_1);
}
