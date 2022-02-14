
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
typedef int mach_exception_data_type_t ;
struct TYPE_5__ {int osr_namespace; int osr_code; } ;
struct TYPE_4__ {int task; TYPE_3__* p_exit_reason; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;

 TYPE_3__* VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(proc_t VAR_4, mach_exception_data_type_t *VAR_5, mach_exception_data_type_t *VAR_6)
{
 mach_exception_data_type_t VAR_7 = *VAR_5;
 mach_exception_data_type_t VAR_8 = *VAR_6;
 if (VAR_4->p_exit_reason == VAR_2) {
  return;
 }

 switch (VAR_4->p_exit_reason->osr_namespace) {
  case 128:
   if (VAR_4->p_exit_reason->osr_code == VAR_1) {

    FUNC_1(VAR_7, VAR_3);
    FUNC_0(VAR_7, VAR_0);
    FUNC_2(VAR_7, ((FUNC_3(VAR_4->task)) >> 20));
    VAR_8 = 0;
    break;
   }

   break;
  default:
   break;
 }

 *VAR_5 = VAR_7;
 *VAR_6 = VAR_8;
 return;
}
