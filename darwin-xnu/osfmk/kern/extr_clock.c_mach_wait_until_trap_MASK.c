
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wait_result_t ;
typedef int uint64_t ;
struct mach_wait_until_trap_args {int deadline; } ;
typedef int kern_return_t ;
typedef int event_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;

kern_return_t
FUNC_2(
 struct mach_wait_until_trap_args *VAR_7)
{
 uint64_t VAR_8 = VAR_7->deadline;
 wait_result_t VAR_9;

 VAR_9 = FUNC_0((event_t)FUNC_2, VAR_2,
         VAR_5, VAR_8, 0);
 if (VAR_9 == VAR_4)
  VAR_9 = FUNC_1(VAR_6);

 return ((VAR_9 == VAR_3)? VAR_0: VAR_1);
}
