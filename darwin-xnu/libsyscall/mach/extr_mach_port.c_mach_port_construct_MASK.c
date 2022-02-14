
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int mach_port_options_t ;
typedef int mach_port_name_t ;
typedef scalar_t__ mach_port_context_t ;
typedef scalar_t__ kern_return_t ;
typedef int ipc_space_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *,int ,int *) ;
 scalar_t__ FUNC_1 (int ,int *,int ,int *) ;

kern_return_t
FUNC_2(
 ipc_space_t VAR_1,
 mach_port_options_t *VAR_2,
 mach_port_context_t VAR_3,
 mach_port_name_t *VAR_4)
{
 kern_return_t VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_2, (uint64_t) VAR_3, VAR_4);

 if (VAR_5 == VAR_0)
  VAR_5 = FUNC_0(VAR_1, VAR_2, (uint64_t) VAR_3, VAR_4);

 return (VAR_5);
}
