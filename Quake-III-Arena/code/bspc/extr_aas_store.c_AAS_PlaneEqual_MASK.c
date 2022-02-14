
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_4__ {TYPE_1__* planes; } ;
struct TYPE_3__ {float dist; float* normal; } ;


 float VAR_0 ;
 float VAR_1 ;
 TYPE_2__ VAR_2 ;

int FUNC_0(vec3_t VAR_3, float VAR_4, int VAR_5)
{
 float VAR_6;

 VAR_6 = VAR_4 - VAR_2.planes[VAR_5].dist;
 if (VAR_6 > -VAR_0 && VAR_6 < VAR_0)
 {
  VAR_6 = VAR_3[0] - VAR_2.planes[VAR_5].normal[0];
  if (VAR_6 > -VAR_1 && VAR_6 < VAR_1)
  {
   VAR_6 = VAR_3[1] - VAR_2.planes[VAR_5].normal[1];
   if (VAR_6 > -VAR_1 && VAR_6 < VAR_1)
   {
    VAR_6 = VAR_3[2] - VAR_2.planes[VAR_5].normal[2];
    if (VAR_6 > -VAR_1 && VAR_6 < VAR_1)
    {
     return 1;
    }
   }
  }
 }
 return 0;
}
