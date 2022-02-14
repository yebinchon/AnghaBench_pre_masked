
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int stat; int errno; } ;


 int FUNC_0 (char*,int) ;
 TYPE_1__* VAR_0 ;

int
FUNC_1(int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_0[VAR_2].stat != -1; VAR_2++) {
  if (VAR_0[VAR_2].stat == VAR_1)
   return VAR_0[VAR_2].errno;
 }
 FUNC_0("nfs_stat_to_errno: bad nfs status return value: %d\n", VAR_1);
 return VAR_0[VAR_2].errno;
}
