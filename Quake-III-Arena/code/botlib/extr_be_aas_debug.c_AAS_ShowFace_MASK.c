
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_6__ {int normal; } ;
typedef TYPE_1__ aas_plane_t ;
struct TYPE_7__ {int numedges; int firstedge; size_t planenum; } ;
typedef TYPE_2__ aas_face_t ;
struct TYPE_8__ {size_t* v; } ;
typedef TYPE_3__ aas_edge_t ;
struct TYPE_10__ {int numfaces; int numedges; int * vertexes; TYPE_3__* edges; int * edgeindex; TYPE_1__* planes; TYPE_2__* faces; } ;
struct TYPE_9__ {int (* Print ) (int ,char*,int) ;} ;


 int FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int,int ,int ) ;
 TYPE_5__ VAR_5 ;
 int FUNC_3 (int ) ;
 TYPE_4__ VAR_6 ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,char*,int) ;

void FUNC_6(int VAR_7)
{
 int VAR_8, VAR_9, VAR_10;
 aas_edge_t *VAR_11;
 aas_face_t *VAR_12;
 aas_plane_t *VAR_13;
 vec3_t VAR_14, VAR_15;

 VAR_9 = VAR_3;

 if (VAR_7 >= VAR_5.numfaces)
 {
  VAR_6.Print(VAR_4, "facenum %d out of range\n", VAR_7);
 }
 VAR_12 = &VAR_5.faces[VAR_7];

 for (VAR_8 = 0; VAR_8 < VAR_12->numedges; VAR_8++)
 {

  VAR_10 = FUNC_3(VAR_5.edgeindex[VAR_12->firstedge + VAR_8]);

  if (VAR_10 >= VAR_5.numedges)
  {
   VAR_6.Print(VAR_4, "edgenum %d out of range\n", VAR_10);
  }
  VAR_11 = &VAR_5.edges[VAR_10];
  if (VAR_9 == VAR_2) VAR_9 = VAR_1;
  else if (VAR_9 == VAR_1) VAR_9 = VAR_0;
  else if (VAR_9 == VAR_0) VAR_9 = VAR_3;
  else VAR_9 = VAR_2;
  FUNC_0(VAR_5.vertexes[VAR_11->v[0]],
          VAR_5.vertexes[VAR_11->v[1]],
          VAR_9);
 }
 VAR_13 = &VAR_5.planes[VAR_12->planenum];
 VAR_10 = FUNC_3(VAR_5.edgeindex[VAR_12->firstedge]);
 VAR_11 = &VAR_5.edges[VAR_10];
 FUNC_1(VAR_5.vertexes[VAR_11->v[0]], VAR_14);
 FUNC_2(VAR_14, 20, VAR_13->normal, VAR_15);
 FUNC_0(VAR_14, VAR_15, VAR_2);
}
