
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int numpoints; float** points; } ;
typedef TYPE_1__ winding_t ;
typedef float vec_t ;
typedef float* vec3_t ;
struct TYPE_9__ {int* normal; float dist; } ;
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

int FUNC_4 (winding_t *VAR_5, winding_t *VAR_6, plane_t *VAR_7, float VAR_8)
{
 vec_t VAR_9[128];
 int VAR_10[128];
 int VAR_11[3];
 vec_t VAR_12;
 int VAR_13, VAR_14;
 vec_t *VAR_15, *VAR_16;
 vec3_t VAR_17;
 winding_t VAR_18;
 winding_t *VAR_19;

 VAR_11[0] = VAR_11[1] = VAR_11[2] = 0;


 for (VAR_13=0 ; VAR_13<VAR_5->numpoints ; VAR_13++)
 {
  VAR_12 = FUNC_0 (VAR_5->points[VAR_13], VAR_7->normal);
  VAR_12 -= VAR_7->dist;
  VAR_9[VAR_13] = VAR_12;
  if (VAR_12 > VAR_8)
   VAR_10[VAR_13] = VAR_3;
  else if (VAR_12 < -VAR_8)
   VAR_10[VAR_13] = VAR_1;
  else
  {
   VAR_10[VAR_13] = VAR_4;
  }
  VAR_11[VAR_10[VAR_13]]++;
 }

 if (!VAR_11[VAR_1])
 {
  if (!VAR_11[VAR_3])
   return VAR_4;
  else
   return VAR_3;
 }

 if (!VAR_11[VAR_3])
 {
  return VAR_1;
 }

 VAR_10[VAR_13] = VAR_10[0];
 VAR_9[VAR_13] = VAR_9[0];

 VAR_19 = &VAR_18;

 VAR_19->numpoints = 0;
 VAR_6->numpoints = 0;

 for (VAR_13=0 ; VAR_13<VAR_5->numpoints ; VAR_13++)
 {
  VAR_15 = VAR_5->points[VAR_13];

  if (VAR_19->numpoints >= VAR_0)
  {
   FUNC_2("WARNING: VS_SplitWinding -> MAX_POINTS_ON_FIXED_WINDING overflowed\n");
   return VAR_3;
  }
  if (VAR_6->numpoints >= VAR_0)
  {
   FUNC_2("WARNING: VS_SplitWinding -> MAX_POINTS_ON_FIXED_WINDING overflowed\n");
   return VAR_3;
  }

  if (VAR_10[VAR_13] == VAR_4)
  {
   FUNC_1 (VAR_15, VAR_19->points[VAR_19->numpoints]);
   VAR_19->numpoints++;
   FUNC_1 (VAR_15, VAR_6->points[VAR_6->numpoints]);
   VAR_6->numpoints++;
   continue;
  }

  if (VAR_10[VAR_13] == VAR_3)
  {
   FUNC_1 (VAR_15, VAR_19->points[VAR_19->numpoints]);
   VAR_19->numpoints++;
  }
  if (VAR_10[VAR_13] == VAR_1)
  {
   FUNC_1 (VAR_15, VAR_6->points[VAR_6->numpoints]);
   VAR_6->numpoints++;
  }

  if (VAR_10[VAR_13+1] == VAR_4 || VAR_10[VAR_13+1] == VAR_10[VAR_13])
   continue;

  if (VAR_19->numpoints >= VAR_0)
  {
   FUNC_2("WARNING: VS_SplitWinding -> MAX_POINTS_ON_FIXED_WINDING overflowed\n");
   return VAR_3;
  }

  if (VAR_6->numpoints >= VAR_0)
  {
   FUNC_2("WARNING: VS_SplitWinding -> MAX_POINTS_ON_FIXED_WINDING overflowed\n");
   return VAR_3;
  }


  VAR_16 = VAR_5->points[(VAR_13+1)%VAR_5->numpoints];

  VAR_12 = VAR_9[VAR_13] / (VAR_9[VAR_13]-VAR_9[VAR_13+1]);
  for (VAR_14=0 ; VAR_14<3 ; VAR_14++)
  {
   if (VAR_7->normal[VAR_14] == 1)
    VAR_17[VAR_14] = VAR_7->dist;
   else if (VAR_7->normal[VAR_14] == -1)
    VAR_17[VAR_14] = -VAR_7->dist;
   else
    VAR_17[VAR_14] = VAR_15[VAR_14] + VAR_12*(VAR_16[VAR_14]-VAR_15[VAR_14]);
  }

  FUNC_1 (VAR_17, VAR_19->points[VAR_19->numpoints]);
  VAR_19->numpoints++;
  FUNC_1 (VAR_17, VAR_6->points[VAR_6->numpoints]);
  VAR_6->numpoints++;
 }
 FUNC_3(VAR_5, &VAR_18, sizeof(winding_t));

 return VAR_2;
}
