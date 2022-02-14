
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int mach_port_name_t ;
typedef int ipc_space_t ;
typedef TYPE_1__* ipc_port_t ;
typedef scalar_t__ clock_t ;
struct TYPE_6__ {scalar_t__ ip_kobject; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ,int ,TYPE_1__**) ;

clock_t
FUNC_5(
 mach_port_name_t VAR_3)
{
 clock_t VAR_4 = VAR_0;
 ipc_space_t VAR_5;
 ipc_port_t VAR_6;

 if (VAR_3 == 0)
  return (VAR_4);
 VAR_5 = FUNC_0();
 if (FUNC_4(VAR_5, VAR_3, &VAR_6) != VAR_2)
  return (VAR_4);
 if (FUNC_1(VAR_6) && (FUNC_2(VAR_6) == VAR_1))
  VAR_4 = (clock_t) VAR_6->ip_kobject;
 FUNC_3(VAR_6);
 return (VAR_4);
}
