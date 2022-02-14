
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* thread_t ;
typedef scalar_t__ mach_exception_data_type_t ;
struct TYPE_8__ {scalar_t__ subcode; scalar_t__ code; } ;
struct TYPE_9__ {TYPE_1__ guard_exc_info; } ;


 int FUNC_0 (scalar_t__ const) ;





 int FUNC_1 (TYPE_2__*,scalar_t__ const,scalar_t__ const) ;
 int FUNC_2 (TYPE_2__*,scalar_t__ const,scalar_t__ const) ;
 int FUNC_3 (char*,scalar_t__ const,scalar_t__ const) ;
 int FUNC_4 (TYPE_2__*,scalar_t__ const,scalar_t__ const) ;
 int FUNC_5 (TYPE_2__*,scalar_t__ const,scalar_t__ const) ;

void
FUNC_6(thread_t VAR_0)
{
 const mach_exception_data_type_t
  VAR_1 = VAR_0->guard_exc_info.code,
  VAR_2 = VAR_0->guard_exc_info.subcode;

 VAR_0->guard_exc_info.code = 0;
 VAR_0->guard_exc_info.subcode = 0;

 switch (FUNC_0(VAR_1)) {
 case 130:

  break;
 case 131:
  FUNC_2(VAR_0, VAR_1, VAR_2);
  break;
 case 132:
  FUNC_1(VAR_0, VAR_1, VAR_2);
  break;





 case 129:
  FUNC_4(VAR_0, VAR_1, VAR_2);
  break;
 default:
  FUNC_3("guard_exc_info %llx %llx", VAR_1, VAR_2);
 }
}
