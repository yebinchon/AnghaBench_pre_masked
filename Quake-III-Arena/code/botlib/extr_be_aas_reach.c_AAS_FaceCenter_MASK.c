
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_4__ {int numedges; int firstedge; } ;
typedef TYPE_1__ aas_face_t ;
struct TYPE_5__ {size_t* v; } ;
typedef TYPE_2__ aas_edge_t ;
struct TYPE_6__ {int * vertexes; int * edgeindex; TYPE_2__* edges; TYPE_1__* faces; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,float,int ) ;
 TYPE_3__ VAR_0 ;
 size_t FUNC_3 (int ) ;

void FUNC_4(int VAR_1, vec3_t VAR_2)
{
 int VAR_3;
 float VAR_4;
 aas_face_t *VAR_5;
 aas_edge_t *VAR_6;

 VAR_5 = &VAR_0.faces[VAR_1];

 FUNC_1(VAR_2);
 for (VAR_3 = 0; VAR_3 < VAR_5->numedges; VAR_3++)
 {
  VAR_6 = &VAR_0.edges[FUNC_3(VAR_0.edgeindex[VAR_5->firstedge + VAR_3])];
  FUNC_0(VAR_2, VAR_0.vertexes[VAR_6->v[0]], VAR_2);
  FUNC_0(VAR_2, VAR_0.vertexes[VAR_6->v[1]], VAR_2);
 }
 VAR_4 = 0.5 / VAR_5->numedges;
 FUNC_2(VAR_2, VAR_4, VAR_2);
}
