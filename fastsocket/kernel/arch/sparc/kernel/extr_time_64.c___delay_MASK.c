
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long (* get_tick ) () ;} ;


 unsigned long FUNC_0 () ;
 unsigned long FUNC_1 () ;
 TYPE_1__* VAR_0 ;

void FUNC_2(unsigned long VAR_1)
{
 unsigned long VAR_2, VAR_3;

 VAR_2 = VAR_0->get_tick();
 do {
  VAR_3 = VAR_0->get_tick();
 } while ((VAR_3-VAR_2) < VAR_1);
}
