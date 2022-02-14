
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* uthread_t ;
struct sysent {int sy_return_type; } ;
typedef int arm_saved_state_t ;
struct TYPE_6__ {int pc; int save_r0; int save_r1; int cpsr; } ;
typedef TYPE_2__ arm_saved_state32_t ;
struct TYPE_5__ {int* uu_rval; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 TYPE_2__* FUNC_3 (int *) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(struct sysent *VAR_3, arm_saved_state_t *VAR_4, uthread_t VAR_5, int VAR_6)
{
 FUNC_0(FUNC_1(VAR_4));

 arm_saved_state32_t *VAR_7 = FUNC_3(VAR_4);

 if (VAR_6 == VAR_1) {
  VAR_7->pc -= 4;
 } else if (VAR_6 != VAR_0) {
  if (VAR_6) {
   VAR_7->save_r0 = VAR_6;
   VAR_7->save_r1 = 0;

   VAR_7->cpsr |= VAR_2;
   FUNC_4("error: setting carry to trigger cerror call\n");
  } else {
   switch (VAR_3->sy_return_type) {
   case 134:
   case 128:
   case 132:
   case 135:
   case 131:
   case 130:
   case 129:
    VAR_7->save_r0 = VAR_5->uu_rval[0];
    VAR_7->save_r1 = VAR_5->uu_rval[1];
    break;
   case 133:
    VAR_7->save_r0 = 0;
    VAR_7->save_r1 = 0;
    break;
   default:
    FUNC_2("unix_syscall: unknown return type");
    break;
   }
  }
 }


}
