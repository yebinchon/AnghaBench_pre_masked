
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {size_t planenum; struct TYPE_8__** children; scalar_t__ tmparea; } ;
typedef TYPE_1__ tmp_node_t ;
struct TYPE_9__ {int dist; int normal; } ;
typedef TYPE_2__ plane_t ;
struct TYPE_10__ {int* children; int planenum; } ;
typedef TYPE_3__ aas_node_t ;
struct TYPE_12__ {int numnodes; TYPE_3__* nodes; } ;
struct TYPE_11__ {int max_nodes; } ;


 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,int) ;
 TYPE_6__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_4__ VAR_2 ;

int FUNC_3(tmp_node_t *VAR_3)
{
 int VAR_4;
 plane_t *VAR_5;
 aas_node_t *VAR_6;


 if (!VAR_3) return 0;

 if (VAR_3->tmparea) return FUNC_1(VAR_3->tmparea);


 if (VAR_0.numnodes == 0) VAR_0.numnodes = 1;
 if (VAR_0.numnodes >= VAR_2.max_nodes)
 {
  FUNC_2("AAS_MAX_NODES = %d", VAR_2.max_nodes);
 }
 VAR_4 = VAR_0.numnodes;
 VAR_6 = &VAR_0.nodes[VAR_0.numnodes++];
 VAR_5 = &VAR_1[VAR_3->planenum];
 FUNC_0(VAR_5->normal, VAR_5->dist, &VAR_6->planenum);
 VAR_6->children[0] = FUNC_3(VAR_3->children[0]);
 VAR_6->children[1] = FUNC_3(VAR_3->children[1]);
 return VAR_4;
}
