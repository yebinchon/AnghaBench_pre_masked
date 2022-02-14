
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numpoints; int * p; } ;
typedef TYPE_1__ winding_t ;
typedef scalar_t__ vec_t ;
typedef int vec3_t ;
typedef int qboolean ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

qboolean FUNC_2 (winding_t *VAR_3)
{





 int VAR_4, VAR_5;
 vec_t VAR_6;
 vec3_t VAR_7;
 int VAR_8;

 VAR_8 = 0;
 for (VAR_4=0 ; VAR_4<VAR_3->numpoints ; VAR_4++)
 {
  VAR_5 = VAR_4 == VAR_3->numpoints - 1 ? 0 : VAR_4+1;
  FUNC_1 (VAR_3->p[VAR_5], VAR_3->p[VAR_4], VAR_7);
  VAR_6 = FUNC_0 (VAR_7);
  if (VAR_6 > VAR_0)
  {
   if (++VAR_8 == 3)
    return VAR_1;
  }
 }
 return VAR_2;
}
