
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef double* vec3_t ;
struct TYPE_11__ {int normal; } ;
typedef TYPE_1__ aas_plane_t ;
struct TYPE_12__ {int areanum; int edgenum; double* start; double* end; int traveltime; struct TYPE_12__* next; int traveltype; scalar_t__ facenum; } ;
typedef TYPE_2__ aas_lreachability_t ;
struct TYPE_13__ {int faceflags; int numedges; int firstedge; size_t planenum; } ;
typedef TYPE_3__ aas_face_t ;
struct TYPE_14__ {size_t* v; } ;
typedef TYPE_4__ aas_edge_t ;
struct TYPE_15__ {scalar_t__* mins; scalar_t__* maxs; int numfaces; int firstface; } ;
typedef TYPE_5__ aas_area_t ;
struct TYPE_17__ {scalar_t__ rs_startcrouch; } ;
struct TYPE_16__ {int* faceindex; int* edgeindex; TYPE_1__* planes; int * vertexes; TYPE_4__* edges; TYPE_3__* faces; TYPE_5__* areas; } ;


 TYPE_2__* FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int FUNC_4 (double*,int ,double*) ;
 float FUNC_5 (double*,double*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ,int ,double*) ;
 int FUNC_7 (double*,double*) ;
 int FUNC_8 (double*) ;
 float FUNC_9 (double*) ;
 int FUNC_10 (double*,int ,double*,double*) ;
 int FUNC_11 (double*) ;
 int FUNC_12 (double*,double,double*) ;
 int FUNC_13 (int ,int ,double*) ;
 TYPE_8__ VAR_4 ;
 TYPE_7__ VAR_5 ;
 size_t FUNC_14 (int) ;
 TYPE_2__** VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

int FUNC_15(int VAR_10, int VAR_11)
{
 int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 float VAR_19, VAR_20, VAR_21, VAR_22;
 vec3_t VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28 = {0, 0, -1};
 vec3_t VAR_29;
 aas_area_t *VAR_30, *VAR_31;
 aas_face_t *VAR_32, *VAR_33;
 aas_edge_t *VAR_34;
 aas_plane_t *VAR_35;
 aas_lreachability_t VAR_36, *VAR_37;

 if (!FUNC_2(VAR_10) || !FUNC_2(VAR_11)) return VAR_7;

 VAR_30 = &VAR_5.areas[VAR_10];
 VAR_31 = &VAR_5.areas[VAR_11];

 for (VAR_12 = 0; VAR_12 < 2; VAR_12++)
 {
  if (VAR_30->mins[VAR_12] > VAR_31->maxs[VAR_12] + 10) return VAR_7;
  if (VAR_30->maxs[VAR_12] < VAR_31->mins[VAR_12] - 10) return VAR_7;
 }

 if (VAR_31->mins[2] > VAR_30->maxs[2]) return VAR_7;

 FUNC_7(VAR_28, VAR_27);
 FUNC_8(VAR_27);

 VAR_20 = 99999;
 VAR_22 = 0;
 VAR_17 = VAR_7;
 FUNC_3(&VAR_36, 0, sizeof(aas_lreachability_t));



 for (VAR_12 = 0; VAR_12 < VAR_30->numfaces; VAR_12++)
 {
  VAR_32 = &VAR_5.faces[FUNC_14(VAR_5.faceindex[VAR_30->firstface + VAR_12])];
  if (!(VAR_32->faceflags & VAR_0)) continue;

  for (VAR_13 = 0; VAR_13 < VAR_31->numfaces; VAR_13++)
  {
   VAR_33 = &VAR_5.faces[FUNC_14(VAR_5.faceindex[VAR_31->firstface + VAR_13])];
   if (!(VAR_33->faceflags & VAR_0)) continue;

   for (VAR_15 = 0; VAR_15 < VAR_32->numedges; VAR_15++)
   {
    for (VAR_16 = 0; VAR_16 < VAR_33->numedges; VAR_16++)
    {
     if (FUNC_14(VAR_5.edgeindex[VAR_32->firstedge + VAR_15]) !=
       FUNC_14(VAR_5.edgeindex[VAR_33->firstedge + VAR_16]))
         continue;
     VAR_14 = VAR_5.edgeindex[VAR_32->firstedge + VAR_15];
     VAR_18 = VAR_14 < 0;
     VAR_34 = &VAR_5.edges[FUNC_14(VAR_14)];

     FUNC_13(VAR_5.vertexes[VAR_34->v[1]],
        VAR_5.vertexes[VAR_34->v[0]], VAR_23);
     VAR_21 = FUNC_9(VAR_23);

     FUNC_6(VAR_5.vertexes[VAR_34->v[0]],
        VAR_5.vertexes[VAR_34->v[1]], VAR_24);
     FUNC_12(VAR_24, 0.5, VAR_24);
     FUNC_7(VAR_24, VAR_25);




     FUNC_13(VAR_5.vertexes[VAR_34->v[VAR_18]],
        VAR_5.vertexes[VAR_34->v[!VAR_18]], VAR_29);
     VAR_35 = &VAR_5.planes[VAR_33->planenum];
     FUNC_4(VAR_29, VAR_35->normal, VAR_26);
     FUNC_11(VAR_26);


     FUNC_10(VAR_25, VAR_1, VAR_26, VAR_25);
     FUNC_10(VAR_24, VAR_2, VAR_26, VAR_24);
     VAR_25[2] += 0.125;

     VAR_19 = FUNC_5(VAR_27, VAR_24);






     if (VAR_19 < VAR_20 ||
       (VAR_19 < VAR_20 + 1 && VAR_21 > VAR_22))
     {
      VAR_20 = VAR_19;
      VAR_22 = VAR_21;

      VAR_36.areanum = VAR_11;
      VAR_36.facenum = 0;
      VAR_36.edgenum = VAR_14;
      FUNC_7(VAR_24, VAR_36.start);
      FUNC_7(VAR_25, VAR_36.end);
      VAR_36.traveltype = VAR_3;
      VAR_36.traveltime = 1;
      VAR_17 = VAR_8;
     }
    }
   }
  }
 }
 if (VAR_17)
 {

  VAR_37 = FUNC_0();
  if (!VAR_37) return VAR_7;
  VAR_37->areanum = VAR_36.areanum;
  VAR_37->facenum = VAR_36.facenum;
  VAR_37->edgenum = VAR_36.edgenum;
  FUNC_7(VAR_36.start, VAR_37->start);
  FUNC_7(VAR_36.end, VAR_37->end);
  VAR_37->traveltype = VAR_36.traveltype;
  VAR_37->traveltime = VAR_36.traveltime;
  VAR_37->next = VAR_6[VAR_10];
  VAR_6[VAR_10] = VAR_37;

  if (!FUNC_1(VAR_10) && FUNC_1(VAR_11))
  {
   VAR_37->traveltime += VAR_4.rs_startcrouch;
  }
  VAR_9++;
  return VAR_8;
 }
 return VAR_7;
}
