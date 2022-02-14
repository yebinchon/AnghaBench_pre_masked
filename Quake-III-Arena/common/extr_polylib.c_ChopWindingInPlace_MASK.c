
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
 int FUNC_1 (int*,int*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int*,int*) ;

void FUNC_5 (winding_t **VAR_4, vec3_t VAR_5, vec_t VAR_6, vec_t VAR_7)
{
 winding_t *VAR_8;
 vec_t VAR_9[VAR_0+4];
 int VAR_10[VAR_0+4];
 int VAR_11[3];
 static vec_t VAR_12;
 int VAR_13, VAR_14;
 vec_t *VAR_15, *VAR_16;
 vec3_t VAR_17;
 winding_t *VAR_18;
 int VAR_19;

 VAR_8 = *VAR_4;
 VAR_11[0] = VAR_11[1] = VAR_11[2] = 0;


 for (VAR_13=0 ; VAR_13<VAR_8->numpoints ; VAR_13++)
 {
  VAR_12 = FUNC_1 (VAR_8->p[VAR_13], VAR_5);
  VAR_12 -= VAR_6;
  VAR_9[VAR_13] = VAR_12;
  if (VAR_12 > VAR_7)
   VAR_10[VAR_13] = VAR_2;
  else if (VAR_12 < -VAR_7)
   VAR_10[VAR_13] = VAR_1;
  else
  {
   VAR_10[VAR_13] = VAR_3;
  }
  VAR_11[VAR_10[VAR_13]]++;
 }
 VAR_10[VAR_13] = VAR_10[0];
 VAR_9[VAR_13] = VAR_9[0];

 if (!VAR_11[0])
 {
  FUNC_3 (VAR_8);
  *VAR_4 = ((void*)0);
  return;
 }
 if (!VAR_11[1])
  return;

 VAR_19 = VAR_8->numpoints+4;


 VAR_18 = FUNC_0 (VAR_19);

 for (VAR_13=0 ; VAR_13<VAR_8->numpoints ; VAR_13++)
 {
  VAR_15 = VAR_8->p[VAR_13];

  if (VAR_10[VAR_13] == VAR_3)
  {
   FUNC_4 (VAR_15, VAR_18->p[VAR_18->numpoints]);
   VAR_18->numpoints++;
   continue;
  }

  if (VAR_10[VAR_13] == VAR_2)
  {
   FUNC_4 (VAR_15, VAR_18->p[VAR_18->numpoints]);
   VAR_18->numpoints++;
  }

  if (VAR_10[VAR_13+1] == VAR_3 || VAR_10[VAR_13+1] == VAR_10[VAR_13])
   continue;


  VAR_16 = VAR_8->p[(VAR_13+1)%VAR_8->numpoints];

  VAR_12 = VAR_9[VAR_13] / (VAR_9[VAR_13]-VAR_9[VAR_13+1]);
  for (VAR_14=0 ; VAR_14<3 ; VAR_14++)
  {
   if (VAR_5[VAR_14] == 1)
    VAR_17[VAR_14] = VAR_6;
   else if (VAR_5[VAR_14] == -1)
    VAR_17[VAR_14] = -VAR_6;
   else
    VAR_17[VAR_14] = VAR_15[VAR_14] + VAR_12*(VAR_16[VAR_14]-VAR_15[VAR_14]);
  }

  FUNC_4 (VAR_17, VAR_18->p[VAR_18->numpoints]);
  VAR_18->numpoints++;
 }

 if (VAR_18->numpoints > VAR_19)
  FUNC_2 ("ClipWinding: points exceeded estimate");
 if (VAR_18->numpoints > VAR_0)
  FUNC_2 ("ClipWinding: MAX_POINTS_ON_WINDING");

 FUNC_3 (VAR_8);
 *VAR_4 = VAR_18;
}
