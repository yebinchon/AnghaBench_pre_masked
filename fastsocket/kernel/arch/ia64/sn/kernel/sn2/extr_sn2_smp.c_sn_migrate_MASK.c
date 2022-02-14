
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_4__ {unsigned long* pio_write_status_addr; unsigned long pio_write_status_val; } ;
typedef TYPE_1__ pda_t ;
struct TYPE_5__ {int last_cpu; } ;


 unsigned long volatile VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (struct task_struct*) ;
 scalar_t__ FUNC_3 (int) ;

void FUNC_4(struct task_struct *VAR_1)
{
 pda_t *VAR_2 = FUNC_1(FUNC_2(VAR_1)->last_cpu);
 volatile unsigned long *VAR_3 = VAR_2->pio_write_status_addr;
 unsigned long VAR_4 = VAR_2->pio_write_status_val;


 while (FUNC_3((*VAR_3 & VAR_0)
   != VAR_4))
  FUNC_0();
}
