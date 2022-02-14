
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int numpoints; int * p; } ;
typedef TYPE_1__ winding_t ;
typedef int vec3_t ;


 float FUNC_0 (int ,int ) ;
 float VAR_0 ;

int FUNC_1(winding_t *VAR_1, winding_t *VAR_2,
        vec3_t VAR_3, vec3_t VAR_4,
        float VAR_5, float VAR_6)
{
 int VAR_7;

 if (!VAR_1 || !VAR_2) return 0;


 for (VAR_7 = 0; VAR_7 < VAR_1->numpoints; VAR_7++)
 {
  if (FUNC_0(VAR_4, VAR_1->p[VAR_7]) - VAR_6 > VAR_0) return 1;
 }

 for (VAR_7 = 0; VAR_7 < VAR_2->numpoints; VAR_7++)
 {
  if (FUNC_0(VAR_3, VAR_2->p[VAR_7]) - VAR_5 > VAR_0) return 1;
 }

 return 0;
}
