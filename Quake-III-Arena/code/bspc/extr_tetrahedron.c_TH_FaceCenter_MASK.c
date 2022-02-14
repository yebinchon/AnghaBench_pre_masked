
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_5__ {int numedges; int firstedge; } ;
typedef TYPE_1__ aas_face_t ;
struct TYPE_6__ {size_t* v; } ;
typedef TYPE_2__ aas_edge_t ;
struct TYPE_7__ {int* edgeindex; int * vertexes; TYPE_2__* edges; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,double,int ) ;
 TYPE_3__ VAR_0 ;
 size_t FUNC_3 (int) ;

void FUNC_4(aas_face_t *VAR_1, vec3_t VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 aas_edge_t *VAR_6;

 FUNC_1(VAR_2);
 for (VAR_3 = 0; VAR_3 < VAR_1->numedges; VAR_3++)
 {
  VAR_4 = FUNC_3(VAR_0.edgeindex[VAR_1->firstedge + VAR_3]);
  VAR_5 = VAR_4 < 0;
  VAR_6 = &VAR_0.edges[FUNC_3(VAR_4)];
  FUNC_0(VAR_0.vertexes[VAR_6->v[VAR_5]], VAR_2, VAR_2);
 }
 FUNC_2(VAR_2, 1.0 / VAR_1->numedges, VAR_2);
}
