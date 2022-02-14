
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mach_vm_address_t ;
typedef int mach_port_name_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ ipc_space_t ;
typedef TYPE_1__* ipc_port_t ;
struct TYPE_4__ {int ip_context; scalar_t__ ip_strict_guard; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,TYPE_1__**) ;

kern_return_t
FUNC_3(
 ipc_space_t VAR_4,
 mach_port_name_t VAR_5,
 mach_vm_address_t *VAR_6)
{
 ipc_port_t VAR_7;
 kern_return_t VAR_8;

 if (VAR_4 == VAR_0)
  return VAR_2;

 if (!FUNC_0(VAR_5))
  return VAR_1;

 VAR_8 = FUNC_2(VAR_4, VAR_5, &VAR_7);
 if (VAR_8 != VAR_3)
  return VAR_8;




 if (VAR_7->ip_strict_guard)
  *VAR_6 = 0;
 else
  *VAR_6 = VAR_7->ip_context;

 FUNC_1(VAR_7);
 return VAR_3;
}
