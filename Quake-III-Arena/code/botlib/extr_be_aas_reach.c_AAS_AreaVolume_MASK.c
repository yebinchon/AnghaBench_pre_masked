
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vec_t ;
typedef int vec3_t ;
struct TYPE_7__ {int dist; int normal; } ;
typedef TYPE_1__ aas_plane_t ;
struct TYPE_8__ {size_t firstedge; int backarea; int planenum; } ;
typedef TYPE_2__ aas_face_t ;
struct TYPE_9__ {size_t* v; } ;
typedef TYPE_3__ aas_edge_t ;
struct TYPE_10__ {size_t firstface; int numfaces; } ;
typedef TYPE_4__ aas_area_t ;
struct TYPE_11__ {int* faceindex; int* edgeindex; TYPE_1__* planes; TYPE_2__* faces; int * vertexes; TYPE_3__* edges; TYPE_4__* areas; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 TYPE_5__ VAR_0 ;
 size_t FUNC_3 (int) ;

float FUNC_4(int VAR_1)
{
 int VAR_2, VAR_3, VAR_4, VAR_5;
 vec_t VAR_6, VAR_7, VAR_8;
 vec3_t VAR_9;
 aas_plane_t *VAR_10;
 aas_edge_t *VAR_11;
 aas_face_t *VAR_12;
 aas_area_t *VAR_13;

 VAR_13 = &VAR_0.areas[VAR_1];
 VAR_4 = VAR_0.faceindex[VAR_13->firstface];
 VAR_12 = &VAR_0.faces[FUNC_3(VAR_4)];
 VAR_3 = VAR_0.edgeindex[VAR_12->firstedge];
 VAR_11 = &VAR_0.edges[FUNC_3(VAR_3)];

 FUNC_2(VAR_0.vertexes[VAR_11->v[0]], VAR_9);


 VAR_8 = 0;
 for (VAR_2 = 0; VAR_2 < VAR_13->numfaces; VAR_2++)
 {
  VAR_4 = FUNC_3(VAR_0.faceindex[VAR_13->firstface + VAR_2]);
  VAR_12 = &VAR_0.faces[VAR_4];
  VAR_5 = VAR_12->backarea != VAR_1;
  VAR_10 = &VAR_0.planes[VAR_12->planenum ^ VAR_5];
  VAR_6 = -(FUNC_1 (VAR_9, VAR_10->normal) - VAR_10->dist);
  VAR_7 = FUNC_0(VAR_12);
  VAR_8 += VAR_6 * VAR_7;
 }

 VAR_8 /= 3;
 return VAR_8;
}
