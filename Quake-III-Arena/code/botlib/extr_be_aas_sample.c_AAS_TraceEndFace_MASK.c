
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {size_t lastarea; int planenum; int endpos; scalar_t__ startsolid; } ;
typedef TYPE_2__ aas_trace_t ;
struct TYPE_11__ {int planenum; } ;
typedef TYPE_3__ aas_face_t ;
struct TYPE_12__ {int numfaces; int firstface; } ;
typedef TYPE_4__ aas_area_t ;
struct TYPE_13__ {int* faceindex; TYPE_1__* planes; TYPE_3__* faces; TYPE_4__* areas; int loaded; } ;
struct TYPE_9__ {int normal; } ;


 scalar_t__ FUNC_0 (TYPE_3__*,int ,int ,float) ;
 TYPE_5__ VAR_0 ;
 size_t FUNC_1 (int) ;

aas_face_t *FUNC_2(aas_trace_t *VAR_1)
{
 int VAR_2, VAR_3;
 aas_area_t *VAR_4;
 aas_face_t *VAR_5, *VAR_6 = ((void*)0);

 if (!VAR_0.loaded) return ((void*)0);


 if (VAR_1->startsolid) return ((void*)0);

 VAR_4 = &VAR_0.areas[VAR_1->lastarea];

 for (VAR_2 = 0; VAR_2 < VAR_4->numfaces; VAR_2++)
 {
  VAR_3 = VAR_0.faceindex[VAR_4->firstface + VAR_2];
  VAR_5 = &VAR_0.faces[FUNC_1(VAR_3)];

  if ((VAR_5->planenum & ~1) == (VAR_1->planenum & ~1))
  {
   if (FUNC_0(VAR_5,
      VAR_0.planes[VAR_5->planenum].normal, VAR_1->endpos, 0.01f)) return VAR_5;
  }
 }
 return VAR_6;
}
