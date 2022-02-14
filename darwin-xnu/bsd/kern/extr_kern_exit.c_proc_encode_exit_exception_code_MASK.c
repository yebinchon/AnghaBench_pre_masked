
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef TYPE_1__* proc_t ;
typedef int mach_exception_data_type_t ;
struct TYPE_5__ {int osr_code; int osr_namespace; } ;
struct TYPE_4__ {TYPE_3__* p_exit_reason; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 TYPE_3__* VAR_0 ;

mach_exception_data_type_t FUNC_2(proc_t VAR_1)
{
 uint64_t VAR_2 = 0;

 if (VAR_1->p_exit_reason == VAR_0) {
  return 0;
 }


 FUNC_1(VAR_2, VAR_1->p_exit_reason->osr_namespace);
 FUNC_0(VAR_2, VAR_1->p_exit_reason->osr_code);
 return (mach_exception_data_type_t)VAR_2;
}
