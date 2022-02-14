
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numpoints; int * p; } ;
typedef TYPE_1__ winding_t ;
typedef scalar_t__ vec_t ;
typedef int vec3_t ;
typedef int qboolean ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_1 (winding_t *VAR_5, vec3_t VAR_6, vec_t VAR_7)
{
 qboolean VAR_8, VAR_9;
 int VAR_10;
 vec_t VAR_11;

 VAR_8 = 0;
 VAR_9 = 0;
 for (VAR_10=0 ; VAR_10<VAR_5->numpoints ; VAR_10++)
 {
  VAR_11 = FUNC_0 (VAR_5->p[VAR_10], VAR_6) - VAR_7;
  if (VAR_11 < -VAR_0)
  {
   if (VAR_8)
    return VAR_2;
   VAR_9 = 1;
   continue;
  }
  if (VAR_11 > VAR_0)
  {
   if (VAR_9)
    return VAR_2;
   VAR_8 = 1;
   continue;
  }
 }

 if (VAR_9)
  return VAR_1;
 if (VAR_8)
  return VAR_3;
 return VAR_4;
}
