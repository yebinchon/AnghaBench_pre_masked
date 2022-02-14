
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_6__ {int firstedge; } ;
typedef TYPE_2__ aas_face_t ;
struct TYPE_7__ {int* edgeindex; TYPE_1__* edges; int * vertexes; } ;
struct TYPE_5__ {size_t* v; } ;


 int FUNC_0 (int ,int ) ;
 TYPE_3__ VAR_0 ;
 size_t FUNC_1 (int) ;

void FUNC_2(aas_face_t *VAR_1, int VAR_2, vec3_t VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = VAR_0.edgeindex[VAR_1->firstedge + VAR_2];
 VAR_5 = VAR_4 < 0;
 FUNC_0(VAR_0.vertexes[VAR_0.edges[FUNC_1(VAR_4)].v[VAR_5]], VAR_3);
}
