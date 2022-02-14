
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_t ;
typedef int hw_lock_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 unsigned int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;

unsigned int
FUNC_5(hw_lock_t VAR_0)
{
 thread_t VAR_1 = FUNC_1();
 if (FUNC_0(!FUNC_4(VAR_1)))
  FUNC_3("Attempt to test no-preempt spinlock %p in preemptible context", VAR_0);
 return FUNC_2(VAR_0, VAR_1);
}
