
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* thread_t ;
typedef int spl_t ;
typedef void* mach_exception_data_type_t ;
struct TYPE_7__ {void* subcode; void* code; } ;
struct TYPE_8__ {scalar_t__ task; TYPE_1__ guard_exc_info; } ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 () ;
 scalar_t__ VAR_1 ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*,int ) ;

void
FUNC_7(thread_t VAR_2,
    mach_exception_data_type_t VAR_3, mach_exception_data_type_t VAR_4)
{
 FUNC_1(VAR_2 == FUNC_3());


 if (VAR_2->task == VAR_1)
  return;

 spl_t VAR_5 = FUNC_4();





 FUNC_1(FUNC_0(VAR_3));
 VAR_2->guard_exc_info.code = VAR_3;
 VAR_2->guard_exc_info.subcode = VAR_4;
 FUNC_6(VAR_2, VAR_0);
 FUNC_2(VAR_2);

 FUNC_5(VAR_5);
}
