
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* plane; } ;
typedef TYPE_1__ patchPlane_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (float*,float*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_2(patchPlane_t *VAR_4, float VAR_5[4], int *VAR_6) {
 float VAR_7[4];

 if (
    FUNC_1(VAR_4->plane[0] - VAR_5[0]) < VAR_1
 && FUNC_1(VAR_4->plane[1] - VAR_5[1]) < VAR_1
 && FUNC_1(VAR_4->plane[2] - VAR_5[2]) < VAR_1
 && FUNC_1(VAR_4->plane[3] - VAR_5[3]) < VAR_0 )
 {
  *VAR_6 = VAR_2;
  return VAR_3;
 }

 FUNC_0(VAR_5, VAR_7);
 VAR_7[3] = -VAR_5[3];

 if (
    FUNC_1(VAR_4->plane[0] - VAR_7[0]) < VAR_1
 && FUNC_1(VAR_4->plane[1] - VAR_7[1]) < VAR_1
 && FUNC_1(VAR_4->plane[2] - VAR_7[2]) < VAR_1
 && FUNC_1(VAR_4->plane[3] - VAR_7[3]) < VAR_0 )
 {
  *VAR_6 = VAR_3;
  return VAR_3;
 }

 return VAR_2;
}
