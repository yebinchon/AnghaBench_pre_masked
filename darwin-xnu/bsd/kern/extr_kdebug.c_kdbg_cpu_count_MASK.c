
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int mach_msg_type_number_t ;
typedef int host_t ;
typedef int host_info_t ;
struct TYPE_2__ {scalar_t__ logical_cpu_max; } ;
typedef TYPE_1__ host_basic_info_data_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static uint32_t
FUNC_3(boolean_t VAR_3)
{
 if (VAR_3) {



  return VAR_2;

 }

 host_basic_info_data_t VAR_4;
 mach_msg_type_number_t VAR_5 = VAR_1;
 FUNC_1((host_t)1 , VAR_0, (host_info_t)&VAR_4, &VAR_5);
 FUNC_0(VAR_4.logical_cpu_max > 0);
 return VAR_4.logical_cpu_max;
}
