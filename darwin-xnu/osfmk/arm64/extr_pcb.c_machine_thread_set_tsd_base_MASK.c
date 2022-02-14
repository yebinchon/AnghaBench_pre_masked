
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef TYPE_2__* thread_t ;
typedef int mach_vm_offset_t ;
typedef int kern_return_t ;
struct TYPE_6__ {int cthread_self; } ;
struct TYPE_7__ {scalar_t__ task; TYPE_1__ machine; int map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ) ;

kern_return_t
FUNC_7(
 thread_t VAR_5,
 mach_vm_offset_t VAR_6)
{

 if (VAR_5->task == VAR_4) {
  return VAR_0;
 }

 if (VAR_6 & VAR_2) {
  return VAR_0;
 }

 if (FUNC_5(VAR_5)) {
  if (VAR_6 > FUNC_6(VAR_5->map))
   VAR_6 = 0ULL;
 } else {
  if (VAR_6 > VAR_3)
   VAR_6 = 0ULL;
 }

 VAR_5->machine.cthread_self = VAR_6;


 if (VAR_5 == FUNC_0()) {
  uint64_t VAR_7, VAR_8;

  FUNC_2();
  VAR_8 = FUNC_1();
  VAR_7 = VAR_8 & (VAR_2);
  FUNC_4(VAR_6 | VAR_7);
  FUNC_3();

 }

 return VAR_1;
}
