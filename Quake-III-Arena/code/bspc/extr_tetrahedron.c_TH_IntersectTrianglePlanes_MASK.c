
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_7__ {float dist; int normal; } ;
typedef TYPE_2__ th_plane_t ;
struct TYPE_8__ {TYPE_1__* vertexes; } ;
struct TYPE_6__ {float* v; } ;


 float FUNC_0 (float*,int ) ;
 TYPE_3__ VAR_0 ;

int FUNC_1(int VAR_1, int VAR_2, th_plane_t *VAR_3, th_plane_t *VAR_4)
{
 float *VAR_5, *VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11, VAR_12, VAR_13;
 vec3_t VAR_14;

 VAR_5 = VAR_0.vertexes[VAR_1].v;
 VAR_6 = VAR_0.vertexes[VAR_2].v;

 VAR_7 = FUNC_0(VAR_5, VAR_3->normal) - VAR_3->dist;
 VAR_8 = FUNC_0(VAR_6, VAR_3->normal) - VAR_3->dist;

 if (VAR_7 < 0.1 && VAR_8 < 0.1) return 0;
 if (VAR_7 > -0.1 && VAR_8 > -0.1) return 0;

 VAR_9 = VAR_7/(VAR_7-VAR_8);
 VAR_14[0] = VAR_5[0] + (VAR_6[0] - VAR_5[0]) * VAR_9;
 VAR_14[1] = VAR_5[1] + (VAR_6[1] - VAR_5[1]) * VAR_9;
 VAR_14[2] = VAR_5[2] + (VAR_6[2] - VAR_5[2]) * VAR_9;

 VAR_13 = 0;
 for (VAR_11 = 0; VAR_11 < 3; VAR_11++)
 {
  VAR_10 = FUNC_0(VAR_14, VAR_4[VAR_11].normal) - VAR_4[VAR_11].dist;
  VAR_12 = VAR_10 < 0;
  if (VAR_11 && VAR_12 != VAR_13) return 0;
  VAR_13 = VAR_12;
 }
 return 1;
}
