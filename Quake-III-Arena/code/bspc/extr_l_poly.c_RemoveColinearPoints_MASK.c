
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numpoints; int * p; } ;
typedef TYPE_1__ winding_t ;
typedef int vec3_t ;
typedef int p ;


 double FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_5 (int *,int *,int) ;
 int VAR_2 ;

void FUNC_6 (winding_t *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 vec3_t VAR_7, VAR_8;
 int VAR_9;
 vec3_t VAR_10[VAR_0];

 VAR_9 = 0;
 for (VAR_4=0 ; VAR_4<VAR_3->numpoints ; VAR_4++)
 {
  VAR_5 = (VAR_4+1)%VAR_3->numpoints;
  VAR_6 = (VAR_4+VAR_3->numpoints-1)%VAR_3->numpoints;
  FUNC_4 (VAR_3->p[VAR_5], VAR_3->p[VAR_4], VAR_7);
  FUNC_4 (VAR_3->p[VAR_4], VAR_3->p[VAR_6], VAR_8);
  FUNC_3(VAR_7);
  FUNC_3(VAR_8);
  if (FUNC_0(VAR_7, VAR_8) < 0.999)
  {
   if (VAR_9 >= VAR_0)
    FUNC_1("RemoveColinearPoints: MAX_POINTS_ON_WINDING");
   FUNC_2 (VAR_3->p[VAR_4], VAR_10[VAR_9]);
   VAR_9++;
  }
 }

 if (VAR_9 == VAR_3->numpoints)
  return;

 if (VAR_2 == 1)
  VAR_1 += VAR_3->numpoints - VAR_9;
 VAR_3->numpoints = VAR_9;
 FUNC_5 (VAR_3->p, VAR_10, VAR_9*sizeof(VAR_10[0]));
}
