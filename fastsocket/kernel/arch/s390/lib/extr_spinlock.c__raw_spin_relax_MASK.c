
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int owner_cpu; } ;
typedef TYPE_1__ raw_spinlock_t ;


 int FUNC_0 (unsigned int) ;

void FUNC_1(raw_spinlock_t *VAR_0)
{
 unsigned int VAR_1 = VAR_0->owner_cpu;
 if (VAR_1 != 0)
  FUNC_0(~VAR_1);
}
