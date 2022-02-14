
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct work_interval {int dummy; } ;
typedef TYPE_1__* ipc_port_t ;
struct TYPE_6__ {scalar_t__ ip_kobject; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct work_interval*) ;

__attribute__((used)) static struct work_interval *
FUNC_4(ipc_port_t VAR_1)
{
 struct work_interval *VAR_2 = ((void*)0);

 if (!FUNC_0(VAR_1))
  return ((void*)0);

 if (!FUNC_1(VAR_1))
  return ((void*)0);

 if (VAR_0 != FUNC_2(VAR_1))
  return ((void*)0);

 VAR_2 = (struct work_interval *)VAR_1->ip_kobject;

 FUNC_3(VAR_2);

 return VAR_2;
}
