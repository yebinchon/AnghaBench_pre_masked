
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int numpoints; float** p; } ;
typedef TYPE_1__ winding_t ;
typedef float* vec3_t ;


 int FUNC_0 (float*,float*,float*) ;
 float FUNC_1 (float*,float*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (float*,float*) ;
 double FUNC_4 (float*) ;
 int FUNC_5 (float*,float*) ;
 int FUNC_6 (float*) ;
 int FUNC_7 (float*,float*,float*) ;

int FUNC_8(winding_t *VAR_0, winding_t *VAR_1, vec3_t VAR_2,
           vec3_t VAR_3, float *VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 int VAR_10[3], VAR_11[3];
 float VAR_12, VAR_13, VAR_14, VAR_15;
 vec3_t VAR_16, VAR_17;
 vec3_t VAR_18, VAR_19;

 for (VAR_5 = 0; VAR_5 < VAR_0->numpoints; VAR_5++)
 {
  VAR_6 = (VAR_5+1) % VAR_0->numpoints;

  FUNC_7(VAR_0->p[VAR_6], VAR_0->p[VAR_5], VAR_18);
  if (FUNC_4(VAR_18) < 0.1)
  {

   continue;
  }
  FUNC_0(VAR_18, VAR_2, VAR_16);
  FUNC_6(VAR_16);
  VAR_12 = FUNC_1(VAR_16, VAR_0->p[VAR_5]);

  for (VAR_7 = 0; VAR_7 < VAR_1->numpoints; VAR_7++)
  {
   VAR_8 = (VAR_7+1) % VAR_1->numpoints;

   FUNC_7(VAR_1->p[VAR_8], VAR_1->p[VAR_7], VAR_19);
   if (FUNC_4(VAR_19) < 0.1)
   {

    continue;
   }
   FUNC_0(VAR_19, VAR_2, VAR_17);
   FUNC_6(VAR_17);
   VAR_13 = FUNC_1(VAR_17, VAR_1->p[VAR_7]);

   VAR_15 = VAR_12 - VAR_13;
   if (VAR_15 < -0.1 || VAR_15 > 0.1)
   {
    VAR_13 = -VAR_13;
    FUNC_5(VAR_17, VAR_17);
    VAR_15 = VAR_12 - VAR_13;
    if (VAR_15 < -0.1 || VAR_15 > 0.1) continue;
   }

   for (VAR_9 = 0; VAR_9 < 3; VAR_9++)
   {
    VAR_15 = VAR_16[VAR_9] - VAR_17[VAR_9];
    if (VAR_15 < -0.0001 || VAR_15 > 0.0001) break;
   }
   if (VAR_9 != 3) continue;


   VAR_10[0] = VAR_10[1] = VAR_10[2] = 0;
   for (VAR_9 = 0; VAR_9 < VAR_0->numpoints; VAR_9++)
   {
    VAR_14 = FUNC_1(VAR_0->p[VAR_9], VAR_16) - VAR_12;
    if (VAR_14 > 0.1) VAR_10[0]++;
    else if (VAR_14 < -0.1) VAR_10[1]++;
    else VAR_10[2]++;
   }


   VAR_11[0] = VAR_11[1] = VAR_11[2] = 0;
   for (VAR_9 = 0; VAR_9 < VAR_1->numpoints; VAR_9++)
   {

    VAR_14 = FUNC_1(VAR_1->p[VAR_9], VAR_16) - VAR_12;
    if (VAR_14 > 0.1) VAR_11[0]++;
    else if (VAR_14 < -0.1) VAR_11[1]++;
    else VAR_11[2]++;
   }

   if (VAR_10[0] && VAR_10[1])
   {
    FUNC_2("FindPlaneSeperatingWindings: winding1 non-convex\r\n");
    continue;
   }

   if (VAR_11[0] && VAR_11[1])
   {
    FUNC_2("FindPlaneSeperatingWindings: winding2 non-convex\r\n");
    continue;
   }

   if ((!VAR_10[0] && !VAR_10[1]) || (!VAR_11[0] && !VAR_11[1]))
   {

    continue;
   }

   if ((!VAR_10[0] && !VAR_11[1]) || (!VAR_10[1] && !VAR_11[0]))
   {
    FUNC_3(VAR_16, VAR_3);
    *VAR_4 = VAR_12;
    return 1;
   }
  }
 }
 return 0;
}
