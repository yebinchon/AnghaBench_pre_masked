
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hw_lock_bit_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,unsigned int,int ) ;
 int FUNC_3 (char*,int *) ;

void
FUNC_4(hw_lock_bit_t *VAR_1, unsigned int VAR_2)
{
 if (FUNC_0(FUNC_1() == 0))
  FUNC_3("Attempt to take no-preempt bitlock %p in preemptible context", VAR_1);
 if (FUNC_2(VAR_1, VAR_2, VAR_0))
  return;



 FUNC_3("hw_lock_bit_nopreempt(): interlock held (%p)", VAR_1);

}
