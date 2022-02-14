
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int machine_flags; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ,int) ;
 unsigned int FUNC_1 () ;

void FUNC_2(void)
{

 unsigned int VAR_2;

 VAR_2 = FUNC_1();
 if (!(VAR_2 & (1UL << 23)) || !(VAR_2 & (1UL << 29)))
  return;
 VAR_1.machine_flags |= VAR_0;
 FUNC_0(0, 23);

}
