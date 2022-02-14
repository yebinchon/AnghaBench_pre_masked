
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * processor_set_t ;
typedef TYPE_1__* processor_set_load_info_t ;
typedef scalar_t__ processor_set_info_t ;
typedef scalar_t__ mach_msg_type_number_t ;
typedef int kern_return_t ;
struct TYPE_2__ {int thread_count; int task_count; int load_average; int mach_factor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

kern_return_t
FUNC_0(
 processor_set_t VAR_12,
 int VAR_13,
 processor_set_info_t VAR_14,
 mach_msg_type_number_t *VAR_15)
{
 if (VAR_12 == VAR_6 || VAR_12 != &VAR_7)
  return (VAR_2);

 if (VAR_13 == VAR_4) {
  processor_set_load_info_t VAR_16;

  if (*VAR_15 < VAR_5)
   return(VAR_0);

  VAR_16 = (processor_set_load_info_t) VAR_14;

  VAR_16->mach_factor = VAR_9;
  VAR_16->load_average = VAR_8;

  VAR_16->task_count = VAR_10;
  VAR_16->thread_count = VAR_11;

  *VAR_15 = VAR_5;
  return(VAR_3);
 }

 return(VAR_1);
}
