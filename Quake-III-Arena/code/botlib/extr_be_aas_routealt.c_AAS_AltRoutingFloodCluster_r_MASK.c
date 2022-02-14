
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int frontarea; int backarea; } ;
typedef TYPE_1__ aas_face_t ;
struct TYPE_6__ {int numfaces; int firstface; } ;
typedef TYPE_2__ aas_area_t ;
struct TYPE_8__ {int * faceindex; TYPE_1__* faces; TYPE_2__* areas; } ;
struct TYPE_7__ {int valid; } ;


 TYPE_4__ VAR_0 ;
 size_t FUNC_0 (int ) ;
 int* VAR_1 ;
 TYPE_3__* VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;

void FUNC_1(int VAR_5)
{
 int VAR_6, VAR_7;
 aas_area_t *VAR_8;
 aas_face_t *VAR_9;


 VAR_1[VAR_3] = VAR_5;
 VAR_3++;

 VAR_2[VAR_5].valid = VAR_4;

 VAR_8 = &VAR_0.areas[VAR_5];
 for (VAR_6 = 0; VAR_6 < VAR_8->numfaces; VAR_6++)
 {
  VAR_9 = &VAR_0.faces[FUNC_0(VAR_0.faceindex[VAR_8->firstface + VAR_6])];

  if (VAR_9->frontarea == VAR_5) VAR_7 = VAR_9->backarea;
  else VAR_7 = VAR_9->frontarea;

  if (!VAR_7) continue;

  if (!VAR_2[VAR_7].valid) continue;

  FUNC_1(VAR_7);
 }
}
