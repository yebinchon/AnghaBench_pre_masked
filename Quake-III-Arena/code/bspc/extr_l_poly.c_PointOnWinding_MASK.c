
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numpoints; int * p; } ;
typedef TYPE_1__ winding_t ;
typedef int vec3_t ;


 int FUNC_0 (int ,int ,int ) ;
 double FUNC_1 (int ,int ) ;
 float VAR_0 ;
 double FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;

int FUNC_4(winding_t *VAR_1, vec3_t VAR_2, float VAR_3, vec3_t VAR_4, int *VAR_5)
{
 int VAR_6, VAR_7;
 vec3_t VAR_8, VAR_9;
 vec3_t VAR_10, VAR_11;
 float VAR_12, VAR_13;

 *VAR_5 = 0;

 VAR_13 = FUNC_1(VAR_4, VAR_2) - VAR_3;
 if (VAR_13 < -VAR_0 || VAR_13 > VAR_0) return 0;

 for (VAR_6 = 0; VAR_6 < VAR_1->numpoints; VAR_6++)
 {
  VAR_7 = (VAR_6+1) % VAR_1->numpoints;

  FUNC_3(VAR_1->p[VAR_7], VAR_1->p[VAR_6], VAR_11);
  FUNC_0(VAR_2, VAR_11, VAR_10);
  FUNC_2(VAR_10);
  VAR_12 = FUNC_1(VAR_10, VAR_1->p[VAR_6]);

  VAR_13 = FUNC_1(VAR_4, VAR_10) - VAR_12;
  if (VAR_13 < -VAR_0 || VAR_13 > VAR_0) continue;

  FUNC_3(VAR_4, VAR_1->p[VAR_6], VAR_8);

  FUNC_3(VAR_4, VAR_1->p[VAR_7], VAR_9);


  if (FUNC_2(VAR_8) < 0.5) return 0;
  if (FUNC_2(VAR_9) < 0.5) return 0;



  if (FUNC_1(VAR_8, VAR_9) < -0.99)
  {
   *VAR_5 = VAR_6 + 1;
   return 1;
  }
 }
 return 0;
}
