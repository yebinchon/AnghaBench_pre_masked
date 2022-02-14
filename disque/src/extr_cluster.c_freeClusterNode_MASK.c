
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int flags; int name; int fail_reports; scalar_t__ link; } ;
typedef TYPE_2__ clusterNode ;
struct TYPE_10__ {TYPE_1__* cluster; } ;
struct TYPE_8__ {int deleted_nodes; int nodes; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 TYPE_4__ VAR_2 ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_2__*) ;

void FUNC_7(clusterNode *VAR_3) {
    FUNC_5(FUNC_1(VAR_2.cluster->nodes,VAR_3->name) == VAR_1);
    if (VAR_3->link) FUNC_2(VAR_3->link);



    if (FUNC_4(VAR_3)) {
        FUNC_3(VAR_3->fail_reports);
        FUNC_6(VAR_3);
    } else {
        FUNC_0(VAR_2.cluster->deleted_nodes,VAR_3->name,VAR_3);
        VAR_3->flags |= VAR_0;
    }
}
