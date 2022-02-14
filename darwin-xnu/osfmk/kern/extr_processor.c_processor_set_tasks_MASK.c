
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ task_t ;
typedef scalar_t__* task_array_t ;
typedef int processor_set_t ;
typedef size_t mach_msg_type_number_t ;
typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,void**,size_t*,int ) ;

kern_return_t
FUNC_2(
 processor_set_t VAR_2,
 task_array_t *VAR_3,
 mach_msg_type_number_t *VAR_4)
{
 kern_return_t VAR_5;
 mach_msg_type_number_t VAR_6;

 VAR_5 = FUNC_1(VAR_2, (void **)VAR_3, VAR_4, VAR_1);
 if (VAR_5 != VAR_0)
  return VAR_5;


 for (VAR_6 = 0; VAR_6 < *VAR_4; VAR_6++)
  (*VAR_3)[VAR_6] = (task_t)FUNC_0((*VAR_3)[VAR_6]);
 return VAR_0;
}
