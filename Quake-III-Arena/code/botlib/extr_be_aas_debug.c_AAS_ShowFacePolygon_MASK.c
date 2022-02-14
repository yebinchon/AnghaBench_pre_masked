
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_5__ {int numedges; int firstedge; } ;
typedef TYPE_1__ aas_face_t ;
struct TYPE_6__ {size_t* v; } ;
typedef TYPE_2__ aas_edge_t ;
struct TYPE_8__ {int numfaces; int* edgeindex; int * vertexes; TYPE_2__* edges; TYPE_1__* faces; } ;
struct TYPE_7__ {int (* Print ) (int ,char*,int) ;} ;


 int FUNC_0 (int,int,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 TYPE_4__ VAR_1 ;
 size_t FUNC_2 (int) ;
 TYPE_3__ VAR_2 ;
 int FUNC_3 (int ,char*,int) ;

void FUNC_4(int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 vec3_t VAR_9[128];
 aas_edge_t *VAR_10;
 aas_face_t *VAR_11;


 if (VAR_3 >= VAR_1.numfaces)
 {
  VAR_2.Print(VAR_0, "facenum %d out of range\n", VAR_3);
 }
 VAR_11 = &VAR_1.faces[VAR_3];

 VAR_8 = 0;
 if (VAR_5)
 {
  for (VAR_6 = VAR_11->numedges-1; VAR_6 >= 0; VAR_6--)
  {

   VAR_7 = VAR_1.edgeindex[VAR_11->firstedge + VAR_6];
   VAR_10 = &VAR_1.edges[FUNC_2(VAR_7)];
   FUNC_1(VAR_1.vertexes[VAR_10->v[VAR_7 < 0]], VAR_9[VAR_8]);
   VAR_8++;
  }
 }
 else
 {
  for (VAR_6 = 0; VAR_6 < VAR_11->numedges; VAR_6++)
  {

   VAR_7 = VAR_1.edgeindex[VAR_11->firstedge + VAR_6];
   VAR_10 = &VAR_1.edges[FUNC_2(VAR_7)];
   FUNC_1(VAR_1.vertexes[VAR_10->v[VAR_7 < 0]], VAR_9[VAR_8]);
   VAR_8++;
  }
 }
 FUNC_0(VAR_4, VAR_8, VAR_9);
}
