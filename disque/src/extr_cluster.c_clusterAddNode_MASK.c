
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int name; } ;
typedef TYPE_2__ clusterNode ;
struct TYPE_8__ {TYPE_1__* cluster; } ;
struct TYPE_6__ {int nodes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,TYPE_2__*) ;
 TYPE_3__ VAR_3 ;

int FUNC_1(clusterNode *VAR_4) {
    int VAR_5;

    VAR_5 = FUNC_0(VAR_3.cluster->nodes, VAR_4->name, VAR_4);
    return (VAR_5 == VAR_2) ? VAR_1 : VAR_0;
}
