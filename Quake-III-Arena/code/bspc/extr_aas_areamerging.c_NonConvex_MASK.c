
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int numpoints; int * p; } ;
typedef TYPE_1__ winding_t ;
struct TYPE_8__ {int planenum; TYPE_1__* winding; } ;
typedef TYPE_2__ tmp_face_t ;
struct TYPE_9__ {scalar_t__ dist; int normal; } ;
typedef TYPE_3__ plane_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 TYPE_3__* VAR_1 ;

int FUNC_1(tmp_face_t *VAR_2, tmp_face_t *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6;
 winding_t *VAR_7, *VAR_8;
 plane_t *VAR_9, *VAR_10;

 VAR_7 = VAR_2->winding;
 VAR_8 = VAR_3->winding;

 VAR_9 = &VAR_1[VAR_2->planenum ^ VAR_4];
 VAR_10 = &VAR_1[VAR_3->planenum ^ VAR_5];


 for (VAR_6 = 0; VAR_6 < VAR_7->numpoints; VAR_6++)
 {
  if (FUNC_0(VAR_10->normal, VAR_7->p[VAR_6]) - VAR_10->dist < -VAR_0) return 1;
 }

 for (VAR_6 = 0; VAR_6 < VAR_8->numpoints; VAR_6++)
 {
  if (FUNC_0(VAR_9->normal, VAR_8->p[VAR_6]) - VAR_9->dist < -VAR_0) return 1;
 }

 return 0;
}
