
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int faceflags; int frontarea; int backarea; } ;
typedef TYPE_1__ aas_face_t ;
struct TYPE_5__ {int numfaces; int firstface; } ;
typedef TYPE_2__ aas_area_t ;
struct TYPE_6__ {TYPE_1__* faces; int * faceindex; TYPE_2__* areas; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;

void FUNC_1(int *VAR_3, int VAR_4, int *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8, VAR_9, VAR_10;
 aas_area_t *VAR_11;
 aas_face_t *VAR_12;

 VAR_5[VAR_6] = VAR_2;
 VAR_11 = &VAR_1.areas[VAR_3[VAR_6]];
 for (VAR_7 = 0; VAR_7 < VAR_11->numfaces; VAR_7++)
 {
  VAR_10 = FUNC_0(VAR_1.faceindex[VAR_11->firstface + VAR_7]);
  VAR_12 = &VAR_1.faces[VAR_10];

  if (VAR_12->faceflags & VAR_0) continue;

  if (VAR_12->frontarea != VAR_3[VAR_6]) VAR_9 = VAR_12->frontarea;
  else VAR_9 = VAR_12->backarea;

  for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
  {
   if (VAR_3[VAR_8] == VAR_9) break;
  }

  if (VAR_8 == VAR_4) continue;

  if (VAR_5[VAR_8]) continue;

  FUNC_1(VAR_3, VAR_4, VAR_5, VAR_8);
 }
}
