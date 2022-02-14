
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int numpoints; int** p; } ;
typedef TYPE_1__ winding_t ;
typedef int vec_t ;
typedef int vec3_t ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int*,int ) ;
 int FUNC_2 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int*,int*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ,int*) ;

void FUNC_8 (winding_t *VAR_3)
{
 int VAR_4, VAR_5;
 vec_t *VAR_6, *VAR_7;
 vec_t VAR_8, VAR_9;
 vec3_t VAR_10, VAR_11, VAR_12;
 vec_t VAR_13;
 vec_t VAR_14;

 if (VAR_3->numpoints < 3)
  FUNC_2 ("CheckWinding: %i points",VAR_3->numpoints);

 VAR_13 = FUNC_6(VAR_3);
 if (VAR_13 < 1)
  FUNC_2 ("CheckWinding: %f area", VAR_13);

 FUNC_7 (VAR_3, VAR_12, &VAR_14);

 for (VAR_4=0 ; VAR_4<VAR_3->numpoints ; VAR_4++)
 {
  VAR_6 = VAR_3->p[VAR_4];

  for (VAR_5=0 ; VAR_5<3 ; VAR_5++)
   if (VAR_6[VAR_5] > VAR_0 || VAR_6[VAR_5] < VAR_1)
    FUNC_2 ("CheckFace: BUGUS_RANGE: %f",VAR_6[VAR_5]);

  VAR_5 = VAR_4+1 == VAR_3->numpoints ? 0 : VAR_4+1;


  VAR_8 = FUNC_1 (VAR_6, VAR_12) - VAR_14;
  if (VAR_8 < -VAR_2 || VAR_8 > VAR_2)
   FUNC_2 ("CheckWinding: point off plane");


  VAR_7 = VAR_3->p[VAR_5];
  FUNC_5 (VAR_7, VAR_6, VAR_10);

  if (FUNC_3 (VAR_10) < VAR_2)
   FUNC_2 ("CheckWinding: degenerate edge");

  FUNC_0 (VAR_12, VAR_10, VAR_11);
  FUNC_4 (VAR_11, VAR_11);
  VAR_9 = FUNC_1 (VAR_6, VAR_11);
  VAR_9 += VAR_2;


  for (VAR_5=0 ; VAR_5<VAR_3->numpoints ; VAR_5++)
  {
   if (VAR_5 == VAR_4)
    continue;
   VAR_8 = FUNC_1 (VAR_3->p[VAR_5], VAR_11);
   if (VAR_8 > VAR_9)
    FUNC_2 ("CheckWinding: non-convex");
  }
 }
}
