
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* usimple_lock_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int boolean_t ;
struct TYPE_8__ {int lock_data; } ;
struct TYPE_9__ {TYPE_1__ interlock; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (char*,TYPE_2__*,uintptr_t,int ,int ,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 TYPE_2__* VAR_3 ;
 int FUNC_11 (uintptr_t) ;

boolean_t
FUNC_12(usimple_lock_t VAR_4)
{
 if (FUNC_5()) {
  FUNC_9(VAR_4);
  return VAR_2;
 } else {
  uint64_t VAR_5 = FUNC_8();
  while (!FUNC_10(VAR_4)) {
   FUNC_1(((void*)0));
   if (FUNC_6(VAR_5)) {
    uint32_t VAR_6;
    uintptr_t VAR_7 = (uintptr_t)
         VAR_4->interlock.lock_data;
    VAR_3 = VAR_4;
    VAR_6 = FUNC_11(VAR_7);
    FUNC_0(FUNC_2(VAR_6), VAR_1);
    FUNC_7("mp_safe_spin_lock() timed out, lock: %p, owner thread: 0x%lx, current_thread: %p, owner on CPU 0x%x, time: %llu",
          VAR_4, VAR_7, FUNC_3(), VAR_6, FUNC_4());
   }
  }
  return VAR_0;
 }
}
