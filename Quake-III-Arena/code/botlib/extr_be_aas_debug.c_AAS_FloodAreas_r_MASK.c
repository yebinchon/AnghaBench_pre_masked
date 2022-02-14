
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int areanum; } ;
typedef TYPE_1__ aas_reachability_t ;
struct TYPE_7__ {int frontarea; int backarea; } ;
typedef TYPE_2__ aas_face_t ;
struct TYPE_8__ {int contents; int numreachableareas; int firstreachablearea; } ;
typedef TYPE_3__ aas_areasettings_t ;
struct TYPE_9__ {int numfaces; int firstface; } ;
typedef TYPE_4__ aas_area_t ;
struct TYPE_10__ {TYPE_3__* areasettings; TYPE_1__* reachability; TYPE_2__* faces; int * faceindex; TYPE_4__* areas; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;
 int VAR_0 ;
 TYPE_5__ VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;

void FUNC_3(int VAR_3, int VAR_4, int *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 aas_area_t *VAR_9;
 aas_face_t *VAR_10;
 aas_areasettings_t *VAR_11;
 aas_reachability_t *VAR_12;

 FUNC_1(VAR_3, 1, VAR_2);

 VAR_9 = &VAR_1.areas[VAR_3];
 VAR_11 = &VAR_1.areasettings[VAR_3];

 for (VAR_7 = 0; VAR_7 < VAR_9->numfaces; VAR_7++)
 {
  VAR_8 = FUNC_2(VAR_1.faceindex[VAR_9->firstface + VAR_7]);
  VAR_10 = &VAR_1.faces[VAR_8];
  if (VAR_10->frontarea == VAR_3)
   VAR_6 = VAR_10->backarea;
  else
   VAR_6 = VAR_10->frontarea;
  if (!VAR_6)
   continue;
  if (VAR_5[VAR_6])
   continue;
  VAR_5[VAR_6] = VAR_2;
  if (VAR_1.areasettings[VAR_6].contents & VAR_0)
   continue;
  if (FUNC_0(VAR_6) != VAR_4)
   continue;
  FUNC_3(VAR_6, VAR_4, VAR_5);
 }

 for (VAR_7 = 0; VAR_7 < VAR_11->numreachableareas; VAR_7++)
 {
  VAR_12 = &VAR_1.reachability[VAR_11->firstreachablearea + VAR_7];
  VAR_6 = VAR_12->areanum;
  if (!VAR_6)
   continue;
  if (VAR_5[VAR_6])
   continue;
  VAR_5[VAR_6] = VAR_2;
  if (VAR_1.areasettings[VAR_6].contents & VAR_0)
   continue;
  if (FUNC_0(VAR_6) != VAR_4)
   continue;






  FUNC_3(VAR_6, VAR_4, VAR_5);
 }
}
