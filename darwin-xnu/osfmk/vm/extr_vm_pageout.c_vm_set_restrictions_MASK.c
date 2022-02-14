
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int mach_msg_type_number_t ;
typedef int host_t ;
typedef int host_info_t ;
struct TYPE_3__ {int max_cpus; } ;
typedef TYPE_1__ host_basic_info_data_t ;
struct TYPE_4__ {int vm_restricted_to_single_processor; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 TYPE_2__ VAR_5 ;

void
FUNC_2()
{
 host_basic_info_data_t VAR_6;
 mach_msg_type_number_t VAR_7 = VAR_3;


 FUNC_1((host_t)1, VAR_2, (host_info_t)&VAR_6, &VAR_7);

 FUNC_0(VAR_6.max_cpus > 0);

 if (VAR_6.max_cpus <= 3) {
  VAR_5.vm_restricted_to_single_processor = VAR_4;
 } else
  VAR_5.vm_restricted_to_single_processor = VAR_1;
}
