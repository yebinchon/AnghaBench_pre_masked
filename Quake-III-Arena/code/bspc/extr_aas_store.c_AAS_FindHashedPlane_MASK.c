
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vec3_t ;
typedef int qboolean ;
typedef int aas_plane_t ;
struct TYPE_2__ {int * planes; } ;


 scalar_t__ FUNC_0 (int ,float,int) ;
 int VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 TYPE_1__ VAR_3 ;
 scalar_t__ FUNC_1 (float) ;

qboolean FUNC_2(vec3_t VAR_4, float VAR_5, int *VAR_6)
{
 int VAR_7, VAR_8;
 aas_plane_t *VAR_9;
 int VAR_10, VAR_11;

 VAR_10 = (int)FUNC_1(VAR_5) / 8;
 VAR_10 &= (VAR_0-1);


 for (VAR_7 = -1; VAR_7 <= 1; VAR_7++)
 {
  VAR_11 = (VAR_10+VAR_7)&(VAR_0-1);
  for (VAR_8 = VAR_1[VAR_11]; VAR_8 >= 0; VAR_8 = VAR_2[VAR_8])
  {
   VAR_9 = &VAR_3.planes[VAR_8];
   if (FUNC_0(VAR_4, VAR_5, VAR_8))
   {
    *VAR_6 = VAR_8;
    return 1;
   }
  }
 }
 return 0;
}
