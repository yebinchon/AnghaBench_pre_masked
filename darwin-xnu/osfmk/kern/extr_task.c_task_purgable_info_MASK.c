
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_purgeable_info_t ;
typedef scalar_t__ task_t ;
typedef int task_purgable_info_t ;
typedef int kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

kern_return_t
FUNC_3(
 task_t VAR_3,
 task_purgable_info_t *VAR_4)
{
 if (VAR_3 == VAR_2 || VAR_4 == ((void*)0))
  return VAR_0;

 FUNC_1(VAR_3);
 FUNC_2((vm_purgeable_info_t)VAR_4, VAR_3);

 FUNC_0(VAR_3);
 return VAR_1;
}
