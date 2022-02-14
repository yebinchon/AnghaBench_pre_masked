
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* ipc_port_t ;
struct TYPE_5__ {int ip_kobject; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

uintptr_t
FUNC_2(
 ipc_port_t VAR_2)
{
 if (FUNC_0(VAR_2)) {
  uintptr_t VAR_3 = (uintptr_t) VAR_2->ip_kobject;






  if (FUNC_1(VAR_2) == VAR_0)
   return (VAR_3);
 }
 return (uintptr_t)VAR_1;
}
