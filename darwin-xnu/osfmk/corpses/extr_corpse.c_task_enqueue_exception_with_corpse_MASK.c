
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ thread_t ;
typedef scalar_t__ task_t ;
typedef int mach_msg_type_number_t ;
typedef int * mach_exception_data_t ;
typedef scalar_t__ kern_return_t ;
typedef int exception_type_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__*,scalar_t__*,int ,int ,int ,void*) ;
 int FUNC_2 (scalar_t__,scalar_t__,int ) ;

kern_return_t
FUNC_3(
 task_t VAR_7,
 exception_type_t VAR_8,
 mach_exception_data_t VAR_9,
 mach_msg_type_number_t VAR_10,
 void *VAR_11)
{
 task_t VAR_12 = VAR_5;
 thread_t VAR_13 = VAR_6;
 kern_return_t VAR_14;

 if (VAR_10 < 2) {
  return VAR_3;
 }


 VAR_14 = FUNC_1(VAR_7, &VAR_12, &VAR_13,
   VAR_8, VAR_9[0], VAR_9[1], VAR_11);
 if (VAR_14 == VAR_4) {
  if (VAR_13 == VAR_6) {
   return VAR_2;
  }
  FUNC_0(VAR_12 != VAR_5);
  FUNC_0(VAR_8 == VAR_1 || VAR_8 == VAR_0);
  FUNC_2(VAR_12, VAR_13, VAR_8);
 }
 return VAR_14;
}
