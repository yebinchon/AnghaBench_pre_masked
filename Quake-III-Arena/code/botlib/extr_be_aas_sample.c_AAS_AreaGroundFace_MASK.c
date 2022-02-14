
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {int member_2; int member_1; int member_0; } ;
typedef TYPE_2__ vec3_t ;
struct TYPE_17__ {int faceflags; size_t planenum; } ;
typedef TYPE_3__ aas_face_t ;
struct TYPE_18__ {int numfaces; int firstface; } ;
typedef TYPE_4__ aas_area_t ;
struct TYPE_19__ {int* faceindex; TYPE_1__* planes; TYPE_3__* faces; TYPE_4__* areas; int loaded; } ;
struct TYPE_15__ {scalar_t__* normal; } ;


 scalar_t__ FUNC_0 (TYPE_3__*,TYPE_2__,TYPE_2__,float) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__,TYPE_2__) ;
 int FUNC_2 (TYPE_2__,TYPE_2__) ;
 TYPE_5__ VAR_1 ;
 size_t FUNC_3 (int) ;

aas_face_t *FUNC_4(int VAR_2, vec3_t VAR_3)
{
 int VAR_4, VAR_5;
 vec3_t VAR_6 = {0, 0, 1};
 vec3_t VAR_7;
 aas_area_t *VAR_8;
 aas_face_t *VAR_9;

 if (!VAR_1.loaded) return ((void*)0);

 VAR_8 = &VAR_1.areas[VAR_2];
 for (VAR_4 = 0; VAR_4 < VAR_8->numfaces; VAR_4++)
 {
  VAR_5 = VAR_1.faceindex[VAR_8->firstface + VAR_4];
  VAR_9 = &VAR_1.faces[FUNC_3(VAR_5)];

  if (VAR_9->faceflags & VAR_0)
  {

   if (VAR_1.planes[VAR_9->planenum].normal[2] < 0) FUNC_2(VAR_6, VAR_7);
   else FUNC_1(VAR_6, VAR_7);

   if (FUNC_0(VAR_9, VAR_7, VAR_3, 0.01f)) return VAR_9;
  }
 }
 return ((void*)0);
}
