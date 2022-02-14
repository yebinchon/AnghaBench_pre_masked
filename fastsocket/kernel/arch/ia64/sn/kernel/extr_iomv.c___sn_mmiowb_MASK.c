
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long* pio_write_status_addr; unsigned long pio_write_status_val; } ;


 unsigned long volatile VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_1 ;

void FUNC_1(void)
{
 volatile unsigned long *VAR_2 = VAR_1->pio_write_status_addr;
 unsigned long VAR_3 = VAR_1->pio_write_status_val;

 while ((*VAR_2 & VAR_0) != VAR_3)
  FUNC_0();
}
