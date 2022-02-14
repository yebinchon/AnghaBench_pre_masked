
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int numpoints; int * points; } ;
typedef TYPE_1__ winding_t ;
typedef int vec3_t ;


 float FUNC_0 (int ,int ) ;
 float VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_1(winding_t *VAR_3, winding_t *VAR_4,
        vec3_t VAR_5, vec3_t VAR_6,
        float VAR_7, float VAR_8)
{
 int VAR_9;

 if (!VAR_3 || !VAR_4) return VAR_1;


 for (VAR_9 = 0; VAR_9 < VAR_3->numpoints; VAR_9++)
 {
  if (FUNC_0(VAR_6, VAR_3->points[VAR_9]) - VAR_8 > VAR_0) return VAR_2;
 }

 for (VAR_9 = 0; VAR_9 < VAR_4->numpoints; VAR_9++)
 {
  if (FUNC_0(VAR_5, VAR_4->points[VAR_9]) - VAR_7 > VAR_0) return VAR_2;
 }

 return VAR_1;
}
