
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_4__ {TYPE_1__* vertexes; } ;
struct TYPE_3__ {float* v; } ;


 TYPE_2__ VAR_0 ;

int FUNC_0(int VAR_1, int VAR_2, vec3_t VAR_3, vec3_t VAR_4)
{
 float *VAR_5, *VAR_6;
 int VAR_7;

 VAR_5 = VAR_0.vertexes[VAR_1].v;
 VAR_6 = VAR_0.vertexes[VAR_2].v;

 for (VAR_7 = 0; VAR_7 < 3; VAR_7++)
 {
  if (VAR_5[VAR_7] < VAR_3[VAR_7] && VAR_6[VAR_7] < VAR_3[VAR_7]) return 1;
  if (VAR_5[VAR_7] > VAR_4[VAR_7] && VAR_6[VAR_7] > VAR_4[VAR_7]) return 1;
 }
 return 0;
}
