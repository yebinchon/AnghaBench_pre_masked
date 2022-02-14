
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mach_port_right_t ;
struct TYPE_4__ {scalar_t__ name; } ;
typedef TYPE_1__ mach_port_qos_t ;
typedef int mach_port_name_t ;
typedef int kern_return_t ;
typedef int ipc_space_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,TYPE_1__*,int *) ;

kern_return_t
FUNC_1(
 ipc_space_t VAR_2,
 mach_port_right_t VAR_3,
 mach_port_qos_t *VAR_4,
 mach_port_name_t *VAR_5)
{
 kern_return_t VAR_6;

 if (VAR_4->name)
  return VAR_0;
 VAR_6 = FUNC_0 (VAR_2, VAR_3, VAR_1,
     VAR_4, VAR_5);
 return (VAR_6);
}
