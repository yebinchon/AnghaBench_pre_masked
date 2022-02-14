
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
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
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,TYPE_1__**) ;
 int VAR_5 ;
 int FUNC_3 (int ,int ,int ,int ) ;

kern_return_t
FUNC_4(
 ipc_space_t VAR_6,
 mach_port_name_t VAR_7,
 mach_vm_address_t VAR_8)
{
 ipc_port_t VAR_9;
 kern_return_t VAR_10;

 if (VAR_6 == VAR_0)
  return VAR_3;

 if (!FUNC_0(VAR_7))
  return VAR_2;

 VAR_10 = FUNC_2(VAR_6, VAR_7, &VAR_9);
 if (VAR_10 != VAR_4)
  return VAR_10;


 if(VAR_9->ip_strict_guard) {
  uint64_t VAR_11 = VAR_9->ip_context;
  FUNC_1(VAR_9);

  FUNC_3(VAR_7, VAR_8, VAR_11, VAR_5);
  return VAR_1;
 }

 VAR_9->ip_context = VAR_8;

 FUNC_1(VAR_9);
 return VAR_4;
}
