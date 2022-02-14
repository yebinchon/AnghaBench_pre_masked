
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vec3_t ;
typedef int qboolean ;
struct TYPE_2__ {int numplanes; } ;


 scalar_t__ FUNC_0 (int ,float,int) ;
 TYPE_1__ VAR_0 ;

qboolean FUNC_1(vec3_t VAR_1, float VAR_2, int *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0.numplanes; VAR_4++)
 {
  if (FUNC_0(VAR_1, VAR_2, VAR_4))
  {
   *VAR_3 = VAR_4;
   return 1;
  }
 }
 return 0;
}
