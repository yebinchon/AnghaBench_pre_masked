
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int winding_t ;
struct TYPE_6__ {int planenum; TYPE_2__* frontarea; struct TYPE_6__** next; } ;
typedef TYPE_1__ tmp_face_t ;
struct TYPE_7__ {TYPE_1__* tmpfaces; } ;
typedef TYPE_2__ tmp_area_t ;
struct TYPE_8__ {int dist; int normal; } ;
typedef TYPE_3__ plane_t ;


 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (int **,int ,int ,int ) ;
 TYPE_3__* VAR_0 ;

winding_t *FUNC_2(tmp_area_t *VAR_1, int VAR_2)
{
 tmp_face_t *VAR_3;
 plane_t *VAR_4;
 int VAR_5;
 winding_t *VAR_6;


 VAR_4 = &VAR_0[VAR_2];

 VAR_6 = FUNC_0(VAR_4->normal, VAR_4->dist);

 for (VAR_3 = VAR_1->tmpfaces; VAR_3 && VAR_6; VAR_3 = VAR_3->next[VAR_5])
 {

  VAR_5 = VAR_3->frontarea != VAR_1;
  VAR_4 = &VAR_0[VAR_3->planenum ^ VAR_5];
  FUNC_1(&VAR_6, VAR_4->normal, VAR_4->dist, 0);
 }
 return VAR_6;
}
