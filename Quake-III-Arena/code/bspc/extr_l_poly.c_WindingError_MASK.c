
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int numpoints; int** p; } ;
typedef TYPE_1__ winding_t ;
typedef int vec_t ;
typedef int vec3_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int*,int*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ,int*) ;
 int FUNC_7 (int ,char*,...) ;
 int VAR_9 ;

int FUNC_8(winding_t *VAR_10)
{
 int VAR_11, VAR_12;
 vec_t *VAR_13, *VAR_14;
 vec_t VAR_15, VAR_16;
 vec3_t VAR_17, VAR_18, VAR_19;
 vec_t VAR_20;
 vec_t VAR_21;

 if (VAR_10->numpoints < 3)
 {
  FUNC_7(VAR_9, "winding %i points", VAR_10->numpoints);
  return VAR_5;
 }

 VAR_20 = FUNC_5(VAR_10);
 if (VAR_20 < 1)
 {
  FUNC_7(VAR_9, "winding %f area", VAR_20);
  return VAR_8;
 }

 FUNC_6 (VAR_10, VAR_19, &VAR_21);

 for (VAR_11=0 ; VAR_11<VAR_10->numpoints ; VAR_11++)
 {
  VAR_13 = VAR_10->p[VAR_11];

  for (VAR_12=0 ; VAR_12<3 ; VAR_12++)
  {
   if (VAR_13[VAR_12] > VAR_0 || VAR_13[VAR_12] < -VAR_0)
   {
    FUNC_7(VAR_9, "winding point %d BUGUS_RANGE \'%f %f %f\'", VAR_12, VAR_13[0], VAR_13[1], VAR_13[2]);
    return VAR_6;
   }
  }

  VAR_12 = VAR_11+1 == VAR_10->numpoints ? 0 : VAR_11+1;


  VAR_15 = FUNC_1 (VAR_13, VAR_19) - VAR_21;
  if (VAR_15 < -VAR_1 || VAR_15 > VAR_1)
  {
   FUNC_7(VAR_9, "winding point %d off plane", VAR_11);
   return VAR_7;
  }


  VAR_14 = VAR_10->p[VAR_12];
  FUNC_4 (VAR_14, VAR_13, VAR_17);

  if (FUNC_2 (VAR_17) < VAR_1)
  {
   FUNC_7(VAR_9, "winding degenerate edge %d-%d", VAR_11, VAR_12);
   return VAR_2;
  }

  FUNC_0 (VAR_19, VAR_17, VAR_18);
  FUNC_3 (VAR_18);
  VAR_16 = FUNC_1 (VAR_13, VAR_18);
  VAR_16 += VAR_1;


  for (VAR_12=0 ; VAR_12<VAR_10->numpoints ; VAR_12++)
  {
   if (VAR_12 == VAR_11)
    continue;
   VAR_15 = FUNC_1 (VAR_10->p[VAR_12], VAR_18);
   if (VAR_15 > VAR_16)
   {
    FUNC_7(VAR_9, "winding non-convex");
    return VAR_3;
   }
  }
 }
 return VAR_4;
}
