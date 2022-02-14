
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int clusterNode ;
struct TYPE_4__ {TYPE_1__* cluster; } ;
struct TYPE_3__ {int reachable_nodes_count; int ** reachable_nodes; } ;


 int FUNC_0 () ;
 TYPE_2__ VAR_0 ;

void FUNC_1(void) {
    int VAR_1, VAR_2;
    clusterNode *VAR_3;
    for(VAR_2 = VAR_0.cluster->reachable_nodes_count - 1; VAR_2 > 0; VAR_2--) {
        VAR_1 = FUNC_0() % (VAR_2 + 1);
        VAR_3 = VAR_0.cluster->reachable_nodes[VAR_1];
        VAR_0.cluster->reachable_nodes[VAR_1] = VAR_0.cluster->reachable_nodes[VAR_2];
        VAR_0.cluster->reachable_nodes[VAR_2] = VAR_3;
    }
}
