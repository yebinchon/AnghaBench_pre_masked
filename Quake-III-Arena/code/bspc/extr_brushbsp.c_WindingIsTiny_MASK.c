
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int numpoints; int * p; } ;
typedef TYPE_1__ winding_t ;
typedef scalar_t__ vec_t ;
typedef int vec3_t ;
typedef int qboolean ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;

qboolean FUNC_3 (winding_t *VAR_1)
{





 int VAR_2, VAR_3;
 vec_t VAR_4;
 vec3_t VAR_5;
 int VAR_6;

 VAR_6 = 0;
 for (VAR_2=0 ; VAR_2<VAR_1->numpoints ; VAR_2++)
 {
  VAR_3 = VAR_2 == VAR_1->numpoints - 1 ? 0 : VAR_2+1;
  FUNC_1 (VAR_1->p[VAR_3], VAR_1->p[VAR_2], VAR_5);
  VAR_4 = FUNC_0 (VAR_5);
  if (VAR_4 > VAR_0)
  {
   if (++VAR_6 == 3)
    return 0;
  }
 }
 return 1;

}
