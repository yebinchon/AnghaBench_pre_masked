
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;


typedef int vec_t ;
typedef int* vec3_t ;
struct TYPE_20__ {int flags; } ;
struct TYPE_22__ {int fraction; int* endpos; TYPE_3__ surface; } ;
typedef TYPE_5__ bsp_trace_t ;
struct TYPE_23__ {int* endpos; int fraction; scalar_t__ startsolid; } ;
typedef TYPE_6__ aas_trace_t ;
struct TYPE_24__ {int areanum; int facenum; int* start; int* end; struct TYPE_24__* next; scalar_t__ traveltime; int traveltype; scalar_t__ edgenum; } ;
typedef TYPE_7__ aas_lreachability_t ;
struct TYPE_25__ {int faceflags; size_t firstedge; size_t planenum; } ;
typedef TYPE_8__ aas_face_t ;
struct TYPE_26__ {scalar_t__* maxs; scalar_t__* mins; int* center; int numfaces; int firstface; } ;
typedef TYPE_9__ aas_area_t ;
struct TYPE_21__ {int contents; } ;
struct TYPE_19__ {int* normal; } ;
struct TYPE_18__ {size_t* v; } ;
struct TYPE_17__ {scalar_t__ rs_startgrapple; } ;
struct TYPE_16__ {int* faceindex; int** vertexes; int* edgeindex; TYPE_4__* areasettings; TYPE_2__* planes; TYPE_1__* edges; TYPE_8__* faces; TYPE_9__* areas; } ;


 TYPE_7__* FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int,int*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int*) ;
 int FUNC_7 (int*) ;
 scalar_t__ FUNC_8 (int,int) ;
 TYPE_5__ FUNC_9 (int*,int *,int *,int*,int ,int ) ;
 int FUNC_10 (int*,int*,int*,int *,int) ;
 TYPE_6__ FUNC_11 (int*,int*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_12 (int*,int*) ;
 int VAR_7 ;
 int FUNC_13 (char*,int,int,int,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_14 (int*,int*) ;
 double FUNC_15 (int*) ;
 int FUNC_16 (int*,int,int*,int*) ;
 int FUNC_17 (int*) ;
 int FUNC_18 (int*,int*,int*) ;
 TYPE_12__ VAR_13 ;
 TYPE_11__ VAR_14 ;
 size_t FUNC_19 (int) ;
 TYPE_7__** VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 float FUNC_20 (int) ;

int FUNC_21(int VAR_18, int VAR_19)
{
 int VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25[20];
 float VAR_26, VAR_27, VAR_28;
 bsp_trace_t VAR_29;
 aas_trace_t VAR_30;
 aas_face_t *VAR_31;
 aas_area_t *VAR_32, *VAR_33;
 aas_lreachability_t *VAR_34;
 vec3_t VAR_35, VAR_36, VAR_37, VAR_38, VAR_39, VAR_40 = {0, 0, -1};
 vec_t *VAR_41;


 if (!FUNC_1(VAR_18) && !FUNC_3(VAR_18)) return VAR_16;

 if (!(FUNC_2(VAR_18) & VAR_10)) return VAR_16;

 if (FUNC_3(VAR_18)) return VAR_16;

 VAR_32 = &VAR_14.areas[VAR_18];
 VAR_33 = &VAR_14.areas[VAR_19];

 if (VAR_33->maxs[2] < VAR_32->mins[2]) return VAR_16;

 FUNC_14(VAR_14.areas[VAR_18].center, VAR_37);

 if (!FUNC_3(VAR_18))
 {
  if (!FUNC_6(VAR_37)) FUNC_13("area %d center %f %f %f in solid?\r\n", VAR_18,
        VAR_37[0], VAR_37[1], VAR_37[2]);
  FUNC_14(VAR_37, VAR_38);
  VAR_38[2] -= 1000;
  VAR_30 = FUNC_11(VAR_37, VAR_38, VAR_9, -1);
  if (VAR_30.startsolid) return VAR_16;
  FUNC_14(VAR_30.endpos, VAR_35);
 }
 else
 {
  if (!(FUNC_7(VAR_37) & (VAR_3|VAR_4|VAR_6))) return VAR_16;
 }



 for (VAR_21 = 0; VAR_21 < VAR_33->numfaces; VAR_21++)
 {
  VAR_20 = VAR_14.faceindex[VAR_33->firstface + VAR_21];
  VAR_31 = &VAR_14.faces[FUNC_19(VAR_20)];

  if (!(VAR_31->faceflags & VAR_7)) continue;

  VAR_41 = VAR_14.vertexes[VAR_14.edges[FUNC_19(VAR_14.edgeindex[VAR_31->firstedge])].v[0]];
  FUNC_18(VAR_41, VAR_35, VAR_39);

  if (FUNC_12(VAR_14.planes[VAR_31->planenum].normal, VAR_39) > 0) continue;

  FUNC_4(VAR_20, VAR_36);

  if (VAR_36[2] < VAR_35[2] + 64) continue;

  if (FUNC_12(VAR_14.planes[VAR_31->planenum].normal, VAR_40) < 0) continue;

  FUNC_18(VAR_36, VAR_35, VAR_39);

  VAR_27 = VAR_39[2];
  VAR_39[2] = 0;
  VAR_28 = FUNC_15(VAR_39);
  if (!VAR_28) continue;

  if (VAR_28 > 2000) continue;

  VAR_26 = 15;
  if (VAR_27 / VAR_28 < FUNC_20(2 * VAR_8 * VAR_26 / 360)) continue;

  FUNC_14(VAR_36, VAR_37);
  FUNC_16(VAR_36, -500, VAR_14.planes[VAR_31->planenum].normal, VAR_38);

  VAR_29 = FUNC_9(VAR_37, ((void*)0), ((void*)0), VAR_38, 0, VAR_5);

  if ((VAR_29.surface.flags & VAR_11) || (VAR_29.fraction * 500 > 32)) continue;


  FUNC_18(VAR_36, VAR_35, VAR_39);
  FUNC_17(VAR_39);
  FUNC_16(VAR_35, 4, VAR_39, VAR_37);
  FUNC_14(VAR_29.endpos, VAR_38);
  VAR_30 = FUNC_11(VAR_37, VAR_38, VAR_10, -1);
  FUNC_18(VAR_30.endpos, VAR_36, VAR_39);
  if (FUNC_15(VAR_39) > 24) continue;

  FUNC_14(VAR_30.endpos, VAR_37);
  FUNC_14(VAR_30.endpos, VAR_38);
  VAR_38[2] -= FUNC_5();
  VAR_30 = FUNC_11(VAR_37, VAR_38, VAR_10, -1);
  if (VAR_30.fraction >= 1) continue;

  VAR_23 = FUNC_6(VAR_30.endpos);

  if (VAR_14.areasettings[VAR_23].contents & (VAR_2|VAR_1))
  {
   continue;
  }

  if (VAR_23 == VAR_18) continue;

  if (FUNC_8(VAR_18, VAR_23)) continue;

  if (!FUNC_1(VAR_23)) continue;

  VAR_24 = FUNC_10(VAR_35, VAR_29.endpos, VAR_25, ((void*)0), 20);
  if (VAR_24 >= 20) continue;
  for (VAR_22 = 0; VAR_22 < VAR_24; VAR_22++)
  {
   if (VAR_14.areasettings[VAR_25[VAR_22]].contents & VAR_0) break;
  }
  if (VAR_22 < VAR_24) continue;

  VAR_34 = FUNC_0();
  if (!VAR_34) return VAR_16;
  VAR_34->areanum = VAR_23;
  VAR_34->facenum = VAR_20;
  VAR_34->edgenum = 0;
  FUNC_14(VAR_35, VAR_34->start);

  FUNC_14(VAR_29.endpos, VAR_34->end);
  VAR_34->traveltype = VAR_12;
  FUNC_18(VAR_34->end, VAR_34->start, VAR_39);
  VAR_34->traveltime = VAR_13.rs_startgrapple + FUNC_15(VAR_39) * 0.25;
  VAR_34->next = VAR_15[VAR_18];
  VAR_15[VAR_18] = VAR_34;

  VAR_17++;
 }

 return VAR_16;
}
