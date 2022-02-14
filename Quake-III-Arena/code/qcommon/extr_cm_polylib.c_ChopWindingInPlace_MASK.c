
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int numpoints; int** p; } ;
typedef TYPE_1__ winding_t ;
typedef int vec_t ;
typedef int* vec3_t ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int*,int*) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int*,int*) ;

void FUNC_5 (winding_t **VAR_5, vec3_t VAR_6, vec_t VAR_7, vec_t VAR_8)
{
 winding_t *VAR_9;
 vec_t VAR_10[VAR_1+4];
 int VAR_11[VAR_1+4];
 int VAR_12[3];
 static vec_t VAR_13;
 int VAR_14, VAR_15;
 vec_t *VAR_16, *VAR_17;
 vec3_t VAR_18;
 winding_t *VAR_19;
 int VAR_20;

 VAR_9 = *VAR_5;
 VAR_12[0] = VAR_12[1] = VAR_12[2] = 0;


 for (VAR_14=0 ; VAR_14<VAR_9->numpoints ; VAR_14++)
 {
  VAR_13 = FUNC_2 (VAR_9->p[VAR_14], VAR_6);
  VAR_13 -= VAR_7;
  VAR_10[VAR_14] = VAR_13;
  if (VAR_13 > VAR_8)
   VAR_11[VAR_14] = VAR_3;
  else if (VAR_13 < -VAR_8)
   VAR_11[VAR_14] = VAR_2;
  else
  {
   VAR_11[VAR_14] = VAR_4;
  }
  VAR_12[VAR_11[VAR_14]]++;
 }
 VAR_11[VAR_14] = VAR_11[0];
 VAR_10[VAR_14] = VAR_10[0];

 if (!VAR_12[0])
 {
  FUNC_3 (VAR_9);
  *VAR_5 = ((void*)0);
  return;
 }
 if (!VAR_12[1])
  return;

 VAR_20 = VAR_9->numpoints+4;


 VAR_19 = FUNC_0 (VAR_20);

 for (VAR_14=0 ; VAR_14<VAR_9->numpoints ; VAR_14++)
 {
  VAR_16 = VAR_9->p[VAR_14];

  if (VAR_11[VAR_14] == VAR_4)
  {
   FUNC_4 (VAR_16, VAR_19->p[VAR_19->numpoints]);
   VAR_19->numpoints++;
   continue;
  }

  if (VAR_11[VAR_14] == VAR_3)
  {
   FUNC_4 (VAR_16, VAR_19->p[VAR_19->numpoints]);
   VAR_19->numpoints++;
  }

  if (VAR_11[VAR_14+1] == VAR_4 || VAR_11[VAR_14+1] == VAR_11[VAR_14])
   continue;


  VAR_17 = VAR_9->p[(VAR_14+1)%VAR_9->numpoints];

  VAR_13 = VAR_10[VAR_14] / (VAR_10[VAR_14]-VAR_10[VAR_14+1]);
  for (VAR_15=0 ; VAR_15<3 ; VAR_15++)
  {
   if (VAR_6[VAR_15] == 1)
    VAR_18[VAR_15] = VAR_7;
   else if (VAR_6[VAR_15] == -1)
    VAR_18[VAR_15] = -VAR_7;
   else
    VAR_18[VAR_15] = VAR_16[VAR_15] + VAR_13*(VAR_17[VAR_15]-VAR_16[VAR_15]);
  }

  FUNC_4 (VAR_18, VAR_19->p[VAR_19->numpoints]);
  VAR_19->numpoints++;
 }

 if (VAR_19->numpoints > VAR_20)
  FUNC_1 (VAR_0, "ClipWinding: points exceeded estimate");
 if (VAR_19->numpoints > VAR_1)
  FUNC_1 (VAR_0, "ClipWinding: MAX_POINTS_ON_WINDING");

 FUNC_3 (VAR_9);
 *VAR_5 = VAR_19;
}
