
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hw_lock_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;

void
FUNC_5(hw_lock_t VAR_0)
{
 if (FUNC_0(!FUNC_4(FUNC_1())))
  FUNC_3("Attempt to release no-preempt spinlock %p in preemptible context", VAR_0);
 FUNC_2(VAR_0);
}
