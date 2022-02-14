
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int kern_return_t ;
typedef int atm_value_t ;
typedef scalar_t__ atm_task_descriptor_t ;
typedef int atm_guard_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int ) ;

__attribute__((used)) static kern_return_t
FUNC_1(
 atm_value_t VAR_2,
 atm_task_descriptor_t VAR_3,
 atm_guard_t VAR_4)
{
 kern_return_t VAR_5;

 if (VAR_3 == VAR_0)
  return VAR_1;

 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);
 return VAR_5;
}
