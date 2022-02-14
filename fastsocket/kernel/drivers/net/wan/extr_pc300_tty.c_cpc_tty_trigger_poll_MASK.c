
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tty_tx_work; } ;
typedef TYPE_1__ st_cpc_tty_area ;
struct TYPE_5__ {scalar_t__ cpc_tty; } ;
typedef TYPE_2__ pc300dev_t ;


 int FUNC_0 (int *) ;

void FUNC_1(pc300dev_t *VAR_0)
{
 st_cpc_tty_area *VAR_1 = (st_cpc_tty_area *)VAR_0->cpc_tty;
 if (!VAR_1) {
  return;
 }
 FUNC_0(&(VAR_1->tty_tx_work));
}
