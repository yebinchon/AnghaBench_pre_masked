
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int numpoints; int** p; } ;
typedef TYPE_1__ winding_t ;
typedef int vec_t ;
typedef int* vec3_t ;


 TYPE_1__* FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int*,int*) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int*,int*) ;

void FUNC_5 (winding_t *VAR_4, vec3_t VAR_5, vec_t VAR_6,
    vec_t VAR_7, winding_t **VAR_8, winding_t **VAR_9)
{
 vec_t VAR_10[VAR_0+4];
 int VAR_11[VAR_0+4];
 int VAR_12[3];
 static vec_t VAR_13;
 int VAR_14, VAR_15;
 vec_t *VAR_16, *VAR_17;
 vec3_t VAR_18;
 winding_t *VAR_19, *VAR_20;
 int VAR_21;

 VAR_12[0] = VAR_12[1] = VAR_12[2] = 0;


 for (VAR_14=0 ; VAR_14<VAR_4->numpoints ; VAR_14++)
 {
  VAR_13 = FUNC_2 (VAR_4->p[VAR_14], VAR_5);
  VAR_13 -= VAR_6;
  VAR_10[VAR_14] = VAR_13;
  if (VAR_13 > VAR_7)
   VAR_11[VAR_14] = VAR_2;
  else if (VAR_13 < -VAR_7)
   VAR_11[VAR_14] = VAR_1;
  else
  {
   VAR_11[VAR_14] = VAR_3;
  }
  VAR_12[VAR_11[VAR_14]]++;
 }
 VAR_11[VAR_14] = VAR_11[0];
 VAR_10[VAR_14] = VAR_10[0];

 *VAR_8 = *VAR_9 = ((void*)0);

 if (!VAR_12[0])
 {
  *VAR_9 = FUNC_1 (VAR_4);
  return;
 }
 if (!VAR_12[1])
 {
  *VAR_8 = FUNC_1 (VAR_4);
  return;
 }

 VAR_21 = VAR_4->numpoints+4;


 *VAR_8 = VAR_19 = FUNC_0 (VAR_21);
 *VAR_9 = VAR_20 = FUNC_0 (VAR_21);

 for (VAR_14=0 ; VAR_14<VAR_4->numpoints ; VAR_14++)
 {
  VAR_16 = VAR_4->p[VAR_14];

  if (VAR_11[VAR_14] == VAR_3)
  {
   FUNC_4 (VAR_16, VAR_19->p[VAR_19->numpoints]);
   VAR_19->numpoints++;
   FUNC_4 (VAR_16, VAR_20->p[VAR_20->numpoints]);
   VAR_20->numpoints++;
   continue;
  }

  if (VAR_11[VAR_14] == VAR_2)
  {
   FUNC_4 (VAR_16, VAR_19->p[VAR_19->numpoints]);
   VAR_19->numpoints++;
  }
  if (VAR_11[VAR_14] == VAR_1)
  {
   FUNC_4 (VAR_16, VAR_20->p[VAR_20->numpoints]);
   VAR_20->numpoints++;
  }

  if (VAR_11[VAR_14+1] == VAR_3 || VAR_11[VAR_14+1] == VAR_11[VAR_14])
   continue;


  VAR_17 = VAR_4->p[(VAR_14+1)%VAR_4->numpoints];

  VAR_13 = VAR_10[VAR_14] / (VAR_10[VAR_14]-VAR_10[VAR_14+1]);
  for (VAR_15=0 ; VAR_15<3 ; VAR_15++)
  {
   if (VAR_5[VAR_15] == 1)
    VAR_18[VAR_15] = VAR_6;
   else if (VAR_5[VAR_15] == -1)
    VAR_18[VAR_15] = -VAR_6;
   else
    VAR_18[VAR_15] = VAR_16[VAR_15] + VAR_13*(VAR_17[VAR_15]-VAR_16[VAR_15]);
  }

  FUNC_4 (VAR_18, VAR_19->p[VAR_19->numpoints]);
  VAR_19->numpoints++;
  FUNC_4 (VAR_18, VAR_20->p[VAR_20->numpoints]);
  VAR_20->numpoints++;
 }

 if (VAR_19->numpoints > VAR_21 || VAR_20->numpoints > VAR_21)
  FUNC_3 ("ClipWinding: points exceeded estimate");
 if (VAR_19->numpoints > VAR_0 || VAR_20->numpoints > VAR_0)
  FUNC_3 ("ClipWinding: MAX_POINTS_ON_WINDING");
}
