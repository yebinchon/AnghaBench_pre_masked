
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numpoints; float** p; } ;
typedef TYPE_1__ winding_t ;
typedef int byte ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int,int ) ;

void FUNC_1 (winding_t *VAR_1, int VAR_2)
{
 byte VAR_3[1024];
 int VAR_4, VAR_5;

 if (!VAR_0)
  return;

 ((int *)VAR_3)[0] = VAR_1->numpoints;
 ((int *)VAR_3)[1] = VAR_2;
 for (VAR_4=0 ; VAR_4<VAR_1->numpoints ; VAR_4++)
  for (VAR_5=0 ; VAR_5<3 ; VAR_5++)
   ((float *)VAR_3)[2+VAR_4*3+VAR_5] = VAR_1->p[VAR_4][VAR_5];

 FUNC_0 (VAR_0, VAR_3, VAR_1->numpoints*12+8, 0);
}
