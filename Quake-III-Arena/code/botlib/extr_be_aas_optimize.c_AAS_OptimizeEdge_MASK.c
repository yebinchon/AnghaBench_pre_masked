
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int* edgeoptimizeindex; size_t numedges; size_t* vertexoptimizeindex; size_t numvertexes; int * vertexes; TYPE_2__* edges; } ;
typedef TYPE_1__ optimized_t ;
struct TYPE_7__ {size_t* v; } ;
typedef TYPE_2__ aas_edge_t ;
struct TYPE_8__ {int * vertexes; TYPE_2__* edges; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;
 TYPE_3__ VAR_0 ;
 size_t FUNC_2 (int) ;

int FUNC_3(optimized_t *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;
 aas_edge_t *VAR_5, *VAR_6;

 VAR_5 = &VAR_0.edges[FUNC_2(VAR_2)];
 if (!FUNC_0(VAR_5)) return 0;

 VAR_4 = VAR_1->edgeoptimizeindex[FUNC_2(VAR_2)];
 if (VAR_4)
 {

  if (VAR_2 > 0) return VAR_4;
  else return -VAR_4;
 }

 VAR_6 = &VAR_1->edges[VAR_1->numedges];

 for (VAR_3 = 0; VAR_3 < 2; VAR_3++)
 {
  if (VAR_1->vertexoptimizeindex[VAR_5->v[VAR_3]])
  {
   VAR_6->v[VAR_3] = VAR_1->vertexoptimizeindex[VAR_5->v[VAR_3]];
  }
  else
  {
   FUNC_1(VAR_0.vertexes[VAR_5->v[VAR_3]], VAR_1->vertexes[VAR_1->numvertexes]);
   VAR_6->v[VAR_3] = VAR_1->numvertexes;
   VAR_1->vertexoptimizeindex[VAR_5->v[VAR_3]] = VAR_1->numvertexes;
   VAR_1->numvertexes++;
  }
 }
 VAR_1->edgeoptimizeindex[FUNC_2(VAR_2)] = VAR_1->numedges;
 VAR_4 = VAR_1->numedges;
 VAR_1->numedges++;

 if (VAR_2 > 0) return VAR_4;
 else return -VAR_4;
}
