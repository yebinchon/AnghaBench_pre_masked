
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vec3_t ;
typedef int qboolean ;
struct TYPE_6__ {int numedges; int firstedge; } ;
typedef TYPE_1__ aas_face_t ;
struct TYPE_7__ {size_t* v; } ;
typedef TYPE_2__ aas_edge_t ;
struct TYPE_9__ {int* edgeindex; int * vertexes; TYPE_2__* edges; int loaded; } ;
struct TYPE_8__ {int (* Print ) (int ,char*) ;} ;


 int FUNC_0 (int ,int ,int ) ;
 float FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 TYPE_4__ VAR_1 ;
 size_t FUNC_4 (int) ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,char*) ;

qboolean FUNC_6(aas_face_t *VAR_5, vec3_t VAR_6, vec3_t VAR_7, float VAR_8)
{
 int VAR_9, VAR_10, VAR_11;
 vec3_t VAR_12;
 vec3_t VAR_13, VAR_14, VAR_15;
 aas_edge_t *VAR_16;




 if (!VAR_1.loaded) return VAR_3;

 for (VAR_9 = 0; VAR_9 < VAR_5->numedges; VAR_9++)
 {
  VAR_11 = VAR_1.edgeindex[VAR_5->firstedge + VAR_9];
  VAR_16 = &VAR_1.edges[FUNC_4(VAR_11)];

  VAR_10 = VAR_11 < 0;
  FUNC_2(VAR_1.vertexes[VAR_16->v[VAR_10]], VAR_12);

  FUNC_3(VAR_1.vertexes[VAR_16->v[!VAR_10]], VAR_12, VAR_13);
  FUNC_3(VAR_7, VAR_12, VAR_14);





  FUNC_0(VAR_13, VAR_6, VAR_15);





  if (FUNC_1(VAR_14, VAR_15) < -VAR_8) return VAR_3;
 }
 return VAR_4;
}
