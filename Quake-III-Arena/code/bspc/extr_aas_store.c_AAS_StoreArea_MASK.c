
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int winding_t ;
typedef int vec3_t ;
struct TYPE_9__ {int aasfacenum; int planenum; int faceflags; int * winding; TYPE_2__* frontarea; struct TYPE_9__** next; } ;
typedef TYPE_1__ tmp_face_t ;
struct TYPE_10__ {int aasareanum; int settings; TYPE_1__* tmpfaces; scalar_t__ invalid; struct TYPE_10__* mergedarea; } ;
typedef TYPE_2__ tmp_area_t ;
typedef int plane_t ;
typedef size_t aas_faceindex_t ;
struct TYPE_11__ {int backarea; int frontarea; int numedges; int firstedge; int faceflags; } ;
typedef TYPE_3__ aas_face_t ;
struct TYPE_12__ {size_t* v; } ;
typedef TYPE_4__ aas_edge_t ;
struct TYPE_13__ {int areanum; double numfaces; scalar_t__ firstface; int center; int maxs; int mins; } ;
typedef TYPE_5__ aas_area_t ;
struct TYPE_15__ {scalar_t__ numareas; scalar_t__ faceindexsize; size_t* faceindex; int * vertexes; int * edgeindex; TYPE_4__* edges; TYPE_3__* faces; TYPE_5__* areas; } ;
struct TYPE_14__ {scalar_t__ max_areas; size_t max_faces; scalar_t__ max_faceindexsize; } ;


 int FUNC_0 (int *,int *,int ,size_t*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,double,int ) ;
 TYPE_7__ VAR_0 ;
 size_t FUNC_10 (int ) ;
 int * VAR_1 ;
 TYPE_6__ VAR_2 ;
 int FUNC_11 (char*,int) ;

int FUNC_12(tmp_area_t *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 plane_t *VAR_7;
 tmp_face_t *VAR_8;
 aas_area_t *VAR_9;
 aas_edge_t *VAR_10;
 aas_face_t *VAR_11;
 aas_faceindex_t VAR_12;
 vec3_t VAR_13;
 winding_t *VAR_14;




 while(VAR_3->mergedarea) VAR_3 = VAR_3->mergedarea;

 if (VAR_3->invalid) FUNC_4("AAS_StoreArea: tried to store invalid area");

 if (VAR_3->aasareanum) return -VAR_3->aasareanum;

 if (VAR_0.numareas >= VAR_2.max_areas)
 {
  FUNC_4("AAS_MAX_AREAS = %d", VAR_2.max_areas);
 }

 if (VAR_0.numareas == 0) VAR_0.numareas = 1;

 VAR_9 = &VAR_0.areas[VAR_0.numareas];
 VAR_9->areanum = VAR_0.numareas;
 VAR_9->numfaces = 0;
 VAR_9->firstface = VAR_0.faceindexsize;
 FUNC_3(VAR_9->mins, VAR_9->maxs);
 FUNC_8(VAR_9->center);



 VAR_3->aasareanum = VAR_9->areanum;

 for (VAR_8 = VAR_3->tmpfaces; VAR_8; VAR_8 = VAR_8->next[VAR_4])
 {
  VAR_4 = VAR_8->frontarea != VAR_3;

  if (VAR_8->aasfacenum)
  {

   VAR_12 = -VAR_8->aasfacenum;






   VAR_11 = &VAR_0.faces[VAR_8->aasfacenum];
   VAR_11->backarea = VAR_9->areanum;
  }
  else
  {
   VAR_7 = &VAR_1[VAR_8->planenum ^ VAR_4];
   if (VAR_4)
   {
    VAR_14 = VAR_8->winding;
    VAR_8->winding = FUNC_6(VAR_8->winding);
   }
   if (!FUNC_0(VAR_8->winding, VAR_7, 0, &VAR_12)) continue;
   if (VAR_4)
   {
    FUNC_5(VAR_8->winding);
    VAR_8->winding = VAR_14;
   }
   VAR_11 = &VAR_0.faces[VAR_12];
   VAR_11->frontarea = VAR_9->areanum;
   VAR_11->backarea = 0;
   VAR_11->faceflags = VAR_8->faceflags;

   VAR_8->aasfacenum = VAR_12;
  }


  FUNC_8(VAR_13);
  for (VAR_5 = 0; VAR_5 < VAR_11->numedges; VAR_5++)
  {
   VAR_10 = &VAR_0.edges[FUNC_10(VAR_0.edgeindex[VAR_11->firstedge + VAR_5])];
   for (VAR_6 = 0; VAR_6 < 2; VAR_6++)
   {
    FUNC_2(VAR_0.vertexes[VAR_10->v[VAR_6]], VAR_9->mins, VAR_9->maxs);
    FUNC_7(VAR_0.vertexes[VAR_10->v[VAR_6]], VAR_13, VAR_13);
   }
  }
  FUNC_9(VAR_13, 1.0 / (VAR_11->numedges * 2.0), VAR_13);

  FUNC_7(VAR_9->center, VAR_13, VAR_9->center);

  if (VAR_0.faceindexsize >= VAR_2.max_faceindexsize)
  {
   FUNC_4("AAS_MAX_FACEINDEXSIZE = %d", VAR_2.max_faceindexsize);
  }
  VAR_0.faceindex[VAR_0.faceindexsize++] = VAR_12;
  VAR_9->numfaces++;
 }

 if (!VAR_9->numfaces) return 0;

 FUNC_9(VAR_9->center, 1.0 / VAR_9->numfaces, VAR_9->center);



 FUNC_1(VAR_3->settings);


 FUNC_11("\r%6d", VAR_9->areanum);

 VAR_0.numareas++;
 return -(VAR_0.numareas - 1);
}
