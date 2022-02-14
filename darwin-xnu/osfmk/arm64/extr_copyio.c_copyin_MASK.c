
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef scalar_t__ user_addr_t ;
struct TYPE_4__ {TYPE_1__* map; } ;
struct TYPE_3__ {scalar_t__ pmap; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__ const,void*,scalar_t__) ;
 int FUNC_1 (scalar_t__ const,uintptr_t,scalar_t__) ;
 int FUNC_2 (int ,char const*,void*,scalar_t__,int *) ;
 TYPE_2__* FUNC_3 () ;
 scalar_t__ VAR_1 ;

int
FUNC_4(const user_addr_t VAR_2, void *VAR_3, vm_size_t VAR_4)
{
 int VAR_5;

 if (VAR_4 == 0)
  return 0;

 VAR_5 = FUNC_1(VAR_2, (uintptr_t)VAR_3, VAR_4);
 if (VAR_5) return VAR_5;

 if (FUNC_3()->map->pmap == VAR_1)
  return FUNC_0(VAR_2, VAR_3, VAR_4);
 else
  return FUNC_2(VAR_0, (const char *)(uintptr_t)VAR_2, VAR_3, VAR_4, ((void*)0));
}
