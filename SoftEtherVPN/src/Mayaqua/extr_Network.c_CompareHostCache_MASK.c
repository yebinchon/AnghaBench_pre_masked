
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int IpAddress; } ;
typedef TYPE_1__ HOSTCACHE ;


 int FUNC_0 (int *,int *) ;

int FUNC_1(void *VAR_0, void *VAR_1)
{
 HOSTCACHE *VAR_2, *VAR_3;
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }
 VAR_2 = *(HOSTCACHE **)VAR_0;
 VAR_3 = *(HOSTCACHE **)VAR_1;
 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }

 return FUNC_0(&VAR_2->IpAddress, &VAR_3->IpAddress);
}
