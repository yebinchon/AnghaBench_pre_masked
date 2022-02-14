
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numpoints; int * p; } ;
typedef TYPE_1__ winding_t ;
typedef scalar_t__ vec_t ;
typedef int vec3_t ;


 int FUNC_0 (int ,int ,int ) ;
 double FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;

vec_t FUNC_3 (winding_t *VAR_0)
{
 int VAR_1;
 vec3_t VAR_2, VAR_3, VAR_4;
 vec_t VAR_5;

 VAR_5 = 0;
 for (VAR_1=2 ; VAR_1<VAR_0->numpoints ; VAR_1++)
 {
  FUNC_2 (VAR_0->p[VAR_1-1], VAR_0->p[0], VAR_2);
  FUNC_2 (VAR_0->p[VAR_1], VAR_0->p[0], VAR_3);
  FUNC_0 (VAR_2, VAR_3, VAR_4);
  VAR_5 += 0.5 * FUNC_1 ( VAR_4 );
 }
 return VAR_5;
}
