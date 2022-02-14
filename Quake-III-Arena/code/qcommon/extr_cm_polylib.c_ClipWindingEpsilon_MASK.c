
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
 int FUNC_1 (int ,char*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int*,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int*,int*) ;

void FUNC_5 (winding_t *VAR_5, vec3_t VAR_6, vec_t VAR_7,
    vec_t VAR_8, winding_t **VAR_9, winding_t **VAR_10)
{
 vec_t VAR_11[VAR_1+4];
 int VAR_12[VAR_1+4];
 int VAR_13[3];
 static vec_t VAR_14;
 int VAR_15, VAR_16;
 vec_t *VAR_17, *VAR_18;
 vec3_t VAR_19;
 winding_t *VAR_20, *VAR_21;
 int VAR_22;

 VAR_13[0] = VAR_13[1] = VAR_13[2] = 0;


 for (VAR_15=0 ; VAR_15<VAR_5->numpoints ; VAR_15++)
 {
  VAR_14 = FUNC_3 (VAR_5->p[VAR_15], VAR_6);
  VAR_14 -= VAR_7;
  VAR_11[VAR_15] = VAR_14;
  if (VAR_14 > VAR_8)
   VAR_12[VAR_15] = VAR_3;
  else if (VAR_14 < -VAR_8)
   VAR_12[VAR_15] = VAR_2;
  else
  {
   VAR_12[VAR_15] = VAR_4;
  }
  VAR_13[VAR_12[VAR_15]]++;
 }
 VAR_12[VAR_15] = VAR_12[0];
 VAR_11[VAR_15] = VAR_11[0];

 *VAR_9 = *VAR_10 = ((void*)0);

 if (!VAR_13[0])
 {
  *VAR_10 = FUNC_2 (VAR_5);
  return;
 }
 if (!VAR_13[1])
 {
  *VAR_9 = FUNC_2 (VAR_5);
  return;
 }

 VAR_22 = VAR_5->numpoints+4;


 *VAR_9 = VAR_20 = FUNC_0 (VAR_22);
 *VAR_10 = VAR_21 = FUNC_0 (VAR_22);

 for (VAR_15=0 ; VAR_15<VAR_5->numpoints ; VAR_15++)
 {
  VAR_17 = VAR_5->p[VAR_15];

  if (VAR_12[VAR_15] == VAR_4)
  {
   FUNC_4 (VAR_17, VAR_20->p[VAR_20->numpoints]);
   VAR_20->numpoints++;
   FUNC_4 (VAR_17, VAR_21->p[VAR_21->numpoints]);
   VAR_21->numpoints++;
   continue;
  }

  if (VAR_12[VAR_15] == VAR_3)
  {
   FUNC_4 (VAR_17, VAR_20->p[VAR_20->numpoints]);
   VAR_20->numpoints++;
  }
  if (VAR_12[VAR_15] == VAR_2)
  {
   FUNC_4 (VAR_17, VAR_21->p[VAR_21->numpoints]);
   VAR_21->numpoints++;
  }

  if (VAR_12[VAR_15+1] == VAR_4 || VAR_12[VAR_15+1] == VAR_12[VAR_15])
   continue;


  VAR_18 = VAR_5->p[(VAR_15+1)%VAR_5->numpoints];

  VAR_14 = VAR_11[VAR_15] / (VAR_11[VAR_15]-VAR_11[VAR_15+1]);
  for (VAR_16=0 ; VAR_16<3 ; VAR_16++)
  {
   if (VAR_6[VAR_16] == 1)
    VAR_19[VAR_16] = VAR_7;
   else if (VAR_6[VAR_16] == -1)
    VAR_19[VAR_16] = -VAR_7;
   else
    VAR_19[VAR_16] = VAR_17[VAR_16] + VAR_14*(VAR_18[VAR_16]-VAR_17[VAR_16]);
  }

  FUNC_4 (VAR_19, VAR_20->p[VAR_20->numpoints]);
  VAR_20->numpoints++;
  FUNC_4 (VAR_19, VAR_21->p[VAR_21->numpoints]);
  VAR_21->numpoints++;
 }

 if (VAR_20->numpoints > VAR_22 || VAR_21->numpoints > VAR_22)
  FUNC_1 (VAR_0, "ClipWinding: points exceeded estimate");
 if (VAR_20->numpoints > VAR_1 || VAR_21->numpoints > VAR_1)
  FUNC_1 (VAR_0, "ClipWinding: MAX_POINTS_ON_WINDING");
}
