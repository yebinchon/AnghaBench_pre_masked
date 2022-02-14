
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* processor_t ;
typedef int processor_info_t ;
typedef int mach_msg_type_number_t ;
typedef int kern_return_t ;
struct TYPE_4__ {int cpu_id; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;

kern_return_t
FUNC_1(
 processor_t VAR_2,
 processor_info_t VAR_3,
 mach_msg_type_number_t VAR_4)
{
 if (VAR_2 == VAR_1)
  return(VAR_0);

 return(FUNC_0(VAR_2->cpu_id, VAR_3, VAR_4));
}
