
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct fileglob {int dummy; } ;
typedef TYPE_1__* ipc_port_t ;
struct TYPE_8__ {scalar_t__ ip_kobject; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

struct fileglob *
FUNC_5(ipc_port_t VAR_1)
{
 struct fileglob *VAR_2 = ((void*)0);

 if (!FUNC_0(VAR_1))
  return ((void*)0);

 FUNC_3(VAR_1);
 if (FUNC_1(VAR_1) && VAR_0 == FUNC_2(VAR_1))
  VAR_2 = (void *)VAR_1->ip_kobject;
 FUNC_4(VAR_1);

 return VAR_2;
}
