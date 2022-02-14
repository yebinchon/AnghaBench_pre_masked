
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hw_lock_bit_t ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *,unsigned int) ;
 int FUNC_3 (char*,int *) ;

void
FUNC_4(hw_lock_bit_t *VAR_0, unsigned int VAR_1)
{
 if (FUNC_0(FUNC_1() == 0))
  FUNC_3("Attempt to release no-preempt bitlock %p in preemptible context", VAR_0);
 FUNC_2(VAR_0, VAR_1);
}
