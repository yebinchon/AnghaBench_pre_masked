
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mach_port_right_t ;
struct TYPE_4__ {int name; } ;
typedef TYPE_1__ mach_port_qos_t ;
typedef int mach_port_name_t ;
typedef int kern_return_t ;
typedef int ipc_space_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,TYPE_1__*,int *) ;
 TYPE_1__ VAR_3 ;

kern_return_t
FUNC_2(
 ipc_space_t VAR_4,
 mach_port_right_t VAR_5,
 mach_port_name_t VAR_6)
{
 kern_return_t VAR_7;
 mach_port_qos_t VAR_8 = VAR_3;

 VAR_8.name = VAR_2;

 if (!FUNC_0(VAR_6))
  return VAR_0;

 VAR_7 = FUNC_1 (VAR_4, VAR_5, VAR_1,
     &VAR_8, &VAR_6);
 return (VAR_7);
}
