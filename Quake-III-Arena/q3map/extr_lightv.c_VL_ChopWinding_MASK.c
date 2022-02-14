
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int numpoints; float** points; } ;
typedef TYPE_1__ winding_t ;
typedef float vec_t ;
typedef float* vec3_t ;
struct TYPE_8__ {int* normal; float dist; } ;
typedef TYPE_2__ plane_t ;


 float FUNC_0 (float*,int*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (float*,float*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,int) ;

int FUNC_4 (winding_t *VAR_5, plane_t *VAR_6, float VAR_7)
{
 vec_t VAR_8[128];
 int VAR_9[128];
 int VAR_10[3];
 vec_t VAR_11;
 int VAR_12, VAR_13;
 vec_t *VAR_14, *VAR_15;
 vec3_t VAR_16;
 winding_t VAR_17;
 winding_t *VAR_18;

 VAR_10[0] = VAR_10[1] = VAR_10[2] = 0;


 for (VAR_12=0 ; VAR_12<VAR_5->numpoints ; VAR_12++)
 {
  VAR_11 = FUNC_0 (VAR_5->points[VAR_12], VAR_6->normal);
  VAR_11 -= VAR_6->dist;
  VAR_8[VAR_12] = VAR_11;
  if (VAR_11 > VAR_7)
   VAR_9[VAR_12] = VAR_3;
  else if (VAR_11 < -VAR_7)
   VAR_9[VAR_12] = VAR_1;
  else
  {
   VAR_9[VAR_12] = VAR_4;
  }
  VAR_10[VAR_9[VAR_12]]++;
 }

 if (!VAR_10[VAR_1])
 {
  if (!VAR_10[VAR_3])
   return VAR_4;
  else
   return VAR_3;
 }

 if (!VAR_10[VAR_3])
 {
  return VAR_1;
 }

 VAR_9[VAR_12] = VAR_9[0];
 VAR_8[VAR_12] = VAR_8[0];

 VAR_18 = &VAR_17;

 VAR_18->numpoints = 0;

 for (VAR_12=0 ; VAR_12<VAR_5->numpoints ; VAR_12++)
 {
  VAR_14 = VAR_5->points[VAR_12];

  if (VAR_18->numpoints >= VAR_0)
  {
   FUNC_2("WARNING: VL_ChopWinding -> MAX_POINTS_ON_FIXED_WINDING overflowed\n");
   return VAR_3;
  }

  if (VAR_9[VAR_12] == VAR_4)
  {
   FUNC_1 (VAR_14, VAR_18->points[VAR_18->numpoints]);
   VAR_18->numpoints++;
   continue;
  }

  if (VAR_9[VAR_12] == VAR_3)
  {
   FUNC_1 (VAR_14, VAR_18->points[VAR_18->numpoints]);
   VAR_18->numpoints++;
  }

  if (VAR_9[VAR_12+1] == VAR_4 || VAR_9[VAR_12+1] == VAR_9[VAR_12])
   continue;

  if (VAR_18->numpoints >= VAR_0)
  {
   FUNC_2("WARNING: VL_ChopWinding -> MAX_POINTS_ON_FIXED_WINDING overflowed\n");
   return VAR_3;
  }


  VAR_15 = VAR_5->points[(VAR_12+1)%VAR_5->numpoints];

  VAR_11 = VAR_8[VAR_12] / (VAR_8[VAR_12]-VAR_8[VAR_12+1]);
  for (VAR_13=0 ; VAR_13<3 ; VAR_13++)
  {
   if (VAR_6->normal[VAR_13] == 1)
    VAR_16[VAR_13] = VAR_6->dist;
   else if (VAR_6->normal[VAR_13] == -1)
    VAR_16[VAR_13] = -VAR_6->dist;
   else
    VAR_16[VAR_13] = VAR_14[VAR_13] + VAR_11*(VAR_15[VAR_13]-VAR_14[VAR_13]);
  }

  FUNC_1 (VAR_16, VAR_18->points[VAR_18->numpoints]);
  VAR_18->numpoints++;
 }
 FUNC_3(VAR_5, &VAR_17, sizeof(winding_t));

 return VAR_2;
}
