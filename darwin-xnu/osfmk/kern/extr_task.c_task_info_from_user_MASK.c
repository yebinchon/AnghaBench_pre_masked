
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int task_t ;
typedef int task_info_t ;
typedef int task_flavor_t ;
typedef int mach_port_t ;
typedef int mach_msg_type_number_t ;
typedef int kern_return_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int *) ;

kern_return_t
FUNC_4(
 mach_port_t VAR_1,
 task_flavor_t VAR_2,
 task_info_t VAR_3,
 mach_msg_type_number_t *VAR_4)
{
 task_t VAR_5;
 kern_return_t VAR_6;

 if (VAR_2 == VAR_0)
  VAR_5 = FUNC_0(VAR_1);
 else
  VAR_5 = FUNC_1(VAR_1);

 VAR_6 = FUNC_3(VAR_5, VAR_2, VAR_3, VAR_4);

 FUNC_2(VAR_5);

 return VAR_6;
}
