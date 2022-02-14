
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numpoints; int * p; } ;
typedef TYPE_1__ winding_t ;
typedef int vec_t ;
typedef int vec3_t ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 double FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;

void FUNC_5 (winding_t *VAR_0, vec3_t VAR_1, vec_t *VAR_2)
{
 vec3_t VAR_3, VAR_4;
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_0->numpoints; VAR_5++)
 {
  FUNC_4(VAR_0->p[(VAR_5+1) % VAR_0->numpoints], VAR_0->p[VAR_5], VAR_3);
  FUNC_4(VAR_0->p[(VAR_5+2) % VAR_0->numpoints], VAR_0->p[VAR_5], VAR_4);
  if (FUNC_2(VAR_3) > 0.5 && FUNC_2(VAR_4) > 0.5) break;
 }
 FUNC_0(VAR_4, VAR_3, VAR_1);
 FUNC_3(VAR_1);
 *VAR_2 = FUNC_1(VAR_0->p[0], VAR_1);
}
