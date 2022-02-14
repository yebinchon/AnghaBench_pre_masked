
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct clock_sleep_trap_args {scalar_t__ clock_name; int sleep_sec; int sleep_nsec; int wakeup_time; int sleep_type; } ;
typedef int sleep_type_t ;
typedef int mach_vm_address_t ;
struct TYPE_3__ {int tv_sec; int tv_nsec; } ;
typedef TYPE_1__ mach_timespec_t ;
typedef scalar_t__ mach_port_name_t ;
typedef scalar_t__ kern_return_t ;
typedef int * clock_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int * VAR_4 ;
 scalar_t__ FUNC_0 (int *,int ,TYPE_1__*) ;
 int FUNC_1 (char*,int ,int) ;
 int * FUNC_2 (scalar_t__) ;

kern_return_t
FUNC_3(
 struct clock_sleep_trap_args *VAR_5)
{
 mach_port_name_t VAR_6 = VAR_5->clock_name;
 sleep_type_t VAR_7 = VAR_5->sleep_type;
 int VAR_8 = VAR_5->sleep_sec;
 int VAR_9 = VAR_5->sleep_nsec;
 mach_vm_address_t VAR_10 = VAR_5->wakeup_time;
 clock_t VAR_11;
 mach_timespec_t VAR_12 = {};
 kern_return_t VAR_13;




 if (VAR_6 == VAR_2)
  VAR_11 = &VAR_4[VAR_3];
 else
  VAR_11 = FUNC_2(VAR_6);

 VAR_12.tv_sec = VAR_8;
 VAR_12.tv_nsec = VAR_9;




 VAR_13 = FUNC_0(VAR_11, VAR_7, &VAR_12);




 if (VAR_13 != VAR_1 && VAR_13 != VAR_0) {
  FUNC_1((char *)&VAR_12, VAR_10, sizeof(mach_timespec_t));
 }
 return (VAR_13);
}
