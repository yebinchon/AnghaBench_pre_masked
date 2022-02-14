
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lockedBy; } ;
typedef TYPE_1__ timer_list_t ;
typedef scalar_t__ int64_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(timer_list_t* VAR_0) {
  int64_t VAR_1 = FUNC_2();
  if (FUNC_1(&(VAR_0->lockedBy), VAR_1, 0) != VAR_1) {
    FUNC_0(0);
    FUNC_3("%d trying to unlock a timer list not locked by current thread.", VAR_1);
  }
}
