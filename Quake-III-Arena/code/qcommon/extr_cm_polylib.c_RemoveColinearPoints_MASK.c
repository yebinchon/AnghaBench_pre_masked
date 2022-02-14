
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numpoints; int * p; } ;
typedef TYPE_1__ winding_t ;
typedef int vec3_t ;
typedef int p ;


 int FUNC_0 (int *,int *,int) ;
 double FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_1 ;

void FUNC_5 (winding_t *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 vec3_t VAR_6, VAR_7;
 int VAR_8;
 vec3_t VAR_9[VAR_0];

 VAR_8 = 0;
 for (VAR_3=0 ; VAR_3<VAR_2->numpoints ; VAR_3++)
 {
  VAR_4 = (VAR_3+1)%VAR_2->numpoints;
  VAR_5 = (VAR_3+VAR_2->numpoints-1)%VAR_2->numpoints;
  FUNC_4 (VAR_2->p[VAR_4], VAR_2->p[VAR_3], VAR_6);
  FUNC_4 (VAR_2->p[VAR_3], VAR_2->p[VAR_5], VAR_7);
  FUNC_3(VAR_6,VAR_6);
  FUNC_3(VAR_7,VAR_7);
  if (FUNC_1(VAR_6, VAR_7) < 0.999)
  {
   FUNC_2 (VAR_2->p[VAR_3], VAR_9[VAR_8]);
   VAR_8++;
  }
 }

 if (VAR_8 == VAR_2->numpoints)
  return;

 VAR_1 += VAR_2->numpoints - VAR_8;
 VAR_2->numpoints = VAR_8;
 FUNC_0 (VAR_2->p, VAR_9, VAR_8*sizeof(VAR_9[0]));
}
