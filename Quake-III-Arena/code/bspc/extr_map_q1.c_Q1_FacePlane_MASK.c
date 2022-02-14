
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vec_t ;
typedef int vec3_t ;
struct TYPE_5__ {size_t firstedge; } ;
typedef TYPE_1__ q1_dface_t ;
struct TYPE_7__ {size_t* v; } ;
struct TYPE_6__ {int * point; } ;


 int FUNC_0 (int ,int ,int ) ;
 float FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int ) ;
 size_t FUNC_4 (int) ;
 TYPE_3__* VAR_0 ;
 int* VAR_1 ;
 TYPE_2__* VAR_2 ;

void FUNC_5(q1_dface_t *VAR_3, vec3_t VAR_4, float *VAR_5)
{
 vec_t *VAR_6, *VAR_7, *VAR_8;
 vec3_t VAR_9, VAR_10;
 int VAR_11, VAR_12;

 VAR_12 = VAR_1[VAR_3->firstedge];
 VAR_11 = VAR_12 < 0;
 VAR_6 = VAR_2[VAR_0[FUNC_4(VAR_12)].v[VAR_11]].point;
 VAR_7 = VAR_2[VAR_0[FUNC_4(VAR_12)].v[!VAR_11]].point;
 VAR_12 = VAR_1[VAR_3->firstedge+1];
 VAR_11 = VAR_12 < 0;
 VAR_8 = VAR_2[VAR_0[FUNC_4(VAR_12)].v[!VAR_11]].point;

 FUNC_3(VAR_7, VAR_6, VAR_9);
 FUNC_3(VAR_8, VAR_6, VAR_10);

 FUNC_0(VAR_9, VAR_10, VAR_4);
 FUNC_2(VAR_4);
 *VAR_5 = FUNC_1(VAR_6, VAR_4);
}
