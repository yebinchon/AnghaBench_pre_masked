
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_16__ ;
typedef struct TYPE_22__ TYPE_14__ ;
typedef struct TYPE_21__ TYPE_13__ ;
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct uart_pram {void* max_idl; void* mrblr; } ;
struct smc_uart_pram {int brkcr; void* max_idl; void* mrblr; } ;
struct smc_regs {int smc_smcm; int smc_smcmr; } ;
struct TYPE_28__ {int low; } ;
struct TYPE_29__ {TYPE_5__ w; } ;
struct scc_regs {int scc_sccm; TYPE_6__ scc_gsmr; } ;
struct TYPE_26__ {TYPE_2__* tty; } ;
struct TYPE_21__ {int flags; int MCR; TYPE_12__* state; TYPE_3__ port; int line; } ;
typedef TYPE_13__ ser_info_t ;
struct TYPE_30__ {struct smc_uart_pram u; } ;
struct TYPE_31__ {TYPE_7__ psmc; } ;
struct TYPE_32__ {TYPE_8__ idma_smc; } ;
struct TYPE_27__ {struct uart_pram u; } ;
struct TYPE_25__ {int flags; TYPE_1__* termios; } ;
struct TYPE_24__ {int c_cflag; } ;
struct TYPE_23__ {TYPE_11__* pram; struct smc_regs* smc_regs; struct scc_regs* scc_regs; } ;
struct TYPE_22__ {int irq; int type; int port; } ;
struct TYPE_20__ {int smc_scc_num; size_t port; } ;
struct TYPE_18__ {TYPE_9__ pothers; TYPE_4__ pscc; } ;
struct TYPE_19__ {TYPE_10__ scc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (TYPE_13__*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 TYPE_16__* VAR_15 ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (int ,int *) ;
 TYPE_14__* VAR_16 ;

__attribute__((used)) static int FUNC_7(ser_info_t *VAR_17)
{
 unsigned long VAR_18;
 int VAR_19=0;
 int VAR_20;

 volatile struct smc_regs *VAR_21;
 volatile struct scc_regs *VAR_22;
 volatile struct smc_uart_pram *VAR_23;
 volatile struct uart_pram *VAR_24;


 FUNC_4(VAR_18);

 if (VAR_17->flags & VAR_0) {
  goto errout;
 }
 if (VAR_17->port.tty)
  FUNC_2(VAR_10, &VAR_17->port.tty->flags);




 FUNC_1(VAR_17);

 VAR_20 = FUNC_0(VAR_17->state->smc_scc_num);
 if (VAR_17->state->smc_scc_num & VAR_2) {
  VAR_22 = &VAR_15->scc_regs[VAR_20];
  VAR_24 = &VAR_15->pram[VAR_17->state->port].scc.pscc.u;

  VAR_24->mrblr = VAR_3;
  VAR_24->max_idl = VAR_3;

  VAR_22->scc_sccm |= (VAR_14 | VAR_13);
  VAR_22->scc_gsmr.w.low |= (VAR_4 | VAR_5);

 } else {
  VAR_21 = &VAR_15->smc_regs[VAR_20];



  VAR_21->smc_smcm |= (VAR_8 | VAR_9);
  VAR_21->smc_smcmr |= (VAR_6 | VAR_7);
  VAR_23 = &VAR_15->pram[VAR_17->state->port].scc.pothers.idma_smc.psmc.u;

  VAR_23->mrblr = VAR_3;
  VAR_23->max_idl = VAR_3;

  VAR_23->brkcr = 1;
 }

 VAR_17->flags |= VAR_0;
 FUNC_3(VAR_18);
 return 0;

errout:
 FUNC_3(VAR_18);
 return VAR_19;
}
