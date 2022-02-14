
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int numpoints; int** points; } ;
typedef TYPE_1__ winding_t ;
typedef int vec_t ;
typedef int* vec3_t ;
struct TYPE_8__ {int* normal; int dist; } ;
typedef TYPE_2__ plane_t ;


 int FUNC_0 (int*,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int*,int*) ;

winding_t *FUNC_2 (winding_t *VAR_5, winding_t *VAR_6, plane_t *VAR_7)
{
 vec_t VAR_8[128];
 int VAR_9[128];
 int VAR_10[3];
 vec_t VAR_11;
 int VAR_12, VAR_13;
 vec_t *VAR_14, *VAR_15;
 vec3_t VAR_16;
 winding_t *VAR_17;

 VAR_10[0] = VAR_10[1] = VAR_10[2] = 0;


 for (VAR_12=0 ; VAR_12<VAR_5->numpoints ; VAR_12++)
 {
  VAR_11 = FUNC_0 (VAR_5->points[VAR_12], VAR_7->normal);
  VAR_11 -= VAR_7->dist;
  VAR_8[VAR_12] = VAR_11;
  if (VAR_11 > VAR_1)
   VAR_9[VAR_12] = VAR_3;
  else if (VAR_11 < -VAR_1)
   VAR_9[VAR_12] = VAR_2;
  else
  {
   VAR_9[VAR_12] = VAR_4;
  }
  VAR_10[VAR_9[VAR_12]]++;
 }

 if (!VAR_10[1])
  return VAR_5;

 if (!VAR_10[0])
 {
  return ((void*)0);
 }

 VAR_9[VAR_12] = VAR_9[0];
 VAR_8[VAR_12] = VAR_8[0];

 VAR_17 = VAR_6;

 VAR_17->numpoints = 0;

 for (VAR_12=0 ; VAR_12<VAR_5->numpoints ; VAR_12++)
 {
  VAR_14 = VAR_5->points[VAR_12];

  if (VAR_17->numpoints == VAR_0)
  {
   return VAR_5;
  }

  if (VAR_9[VAR_12] == VAR_4)
  {
   FUNC_1 (VAR_14, VAR_17->points[VAR_17->numpoints]);
   VAR_17->numpoints++;
   continue;
  }

  if (VAR_9[VAR_12] == VAR_3)
  {
   FUNC_1 (VAR_14, VAR_17->points[VAR_17->numpoints]);
   VAR_17->numpoints++;
  }

  if (VAR_9[VAR_12+1] == VAR_4 || VAR_9[VAR_12+1] == VAR_9[VAR_12])
   continue;

  if (VAR_17->numpoints == VAR_0)
  {
   return VAR_5;
  }


  VAR_15 = VAR_5->points[(VAR_12+1)%VAR_5->numpoints];

  VAR_11 = VAR_8[VAR_12] / (VAR_8[VAR_12]-VAR_8[VAR_12+1]);
  for (VAR_13=0 ; VAR_13<3 ; VAR_13++)
  {
   if (VAR_7->normal[VAR_13] == 1)
    VAR_16[VAR_13] = VAR_7->dist;
   else if (VAR_7->normal[VAR_13] == -1)
    VAR_16[VAR_13] = -VAR_7->dist;
   else
    VAR_16[VAR_13] = VAR_14[VAR_13] + VAR_11*(VAR_15[VAR_13]-VAR_14[VAR_13]);
  }

  FUNC_1 (VAR_16, VAR_17->points[VAR_17->numpoints]);
  VAR_17->numpoints++;
 }

 return VAR_17;
}
