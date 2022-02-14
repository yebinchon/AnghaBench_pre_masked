
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* usimple_lock_t ;
typedef int uint32_t ;
typedef int simple_lock_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_10__ {scalar_t__ lock_data; } ;
struct TYPE_9__ {TYPE_7__ interlock; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (TYPE_7__*,int ) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (char*,TYPE_1__*,uintptr_t,int ,int ,uintptr_t,int ) ;
 int VAR_3 ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int ) ;
 TYPE_1__* VAR_4 ;
 int FUNC_13 (uintptr_t) ;
 int FUNC_14 (TYPE_1__*,int ) ;
 int FUNC_15 (TYPE_1__*,int ) ;

void
FUNC_16(
 usimple_lock_t VAR_5)
{

 FUNC_0(VAR_3);

 FUNC_2(VAR_3);
 FUNC_3(FUNC_15(VAR_5, VAR_3));

 if(FUNC_4(FUNC_7(&VAR_5->interlock, VAR_2) == 0)) {
  boolean_t VAR_6 = VAR_0;
  while (FUNC_9()) {
   FUNC_6();
   if ((VAR_6 = FUNC_7(&VAR_5->interlock, VAR_2)))
    break;
  }

  if (VAR_6 == VAR_0) {
   uint32_t VAR_7;
   uintptr_t VAR_8 = (uintptr_t)VAR_5->interlock.lock_data;
   VAR_4 = VAR_5;
   VAR_7 = FUNC_13(VAR_8);
   FUNC_10("Spinlock acquisition timed out: lock=%p, lock owner thread=0x%lx, current_thread: %p, lock owner active on CPU 0x%x, current owner: 0x%lx, time: %llu",
         VAR_5, VAR_8, FUNC_5(), VAR_7, (uintptr_t)VAR_5->interlock.lock_data, FUNC_8());
  }
 }




 FUNC_3(FUNC_14(VAR_5, VAR_3));






}
