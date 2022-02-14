
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct smc_regs {int smc_smcm; int smc_smcmr; } ;
struct serial_state {int smc_scc_num; int irq; } ;
struct TYPE_8__ {int low; } ;
struct TYPE_9__ {TYPE_1__ w; } ;
struct scc_regs {int scc_sccm; TYPE_2__ scc_gsmr; } ;
struct TYPE_11__ {TYPE_3__* tty; } ;
struct TYPE_12__ {int flags; TYPE_4__ port; int line; struct serial_state* state; } ;
typedef TYPE_5__ ser_info_t ;
struct TYPE_13__ {struct smc_regs* smc_regs; struct scc_regs* scc_regs; } ;
struct TYPE_10__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 TYPE_7__* VAR_12 ;
 int FUNC_3 (char*,int ,int ) ;
 struct serial_state* VAR_13 ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(ser_info_t *VAR_14)
{
 unsigned long VAR_15;
 struct serial_state *VAR_16;
 int VAR_17;
 volatile struct smc_regs *VAR_18;
 volatile struct scc_regs *VAR_19;

 if (!(VAR_14->flags & VAR_0))
  return;

 VAR_16 = VAR_14->state;






 FUNC_2(VAR_15);

 VAR_17 = FUNC_0(VAR_16->smc_scc_num);
 if (VAR_16->smc_scc_num & VAR_2) {
  VAR_19 = &VAR_12->scc_regs[VAR_17];
  VAR_19->scc_gsmr.w.low &= ~(VAR_3 | VAR_4);






  VAR_19->scc_sccm &= ~(VAR_11 | VAR_10);
 } else {
  VAR_18 = &VAR_12->smc_regs[VAR_17];



  VAR_18->smc_smcm &= ~(VAR_7 | VAR_8);






   VAR_18->smc_smcmr &= ~(VAR_5 | VAR_6);
 }

 if (VAR_14->port.tty)
  FUNC_4(VAR_9, &VAR_14->port.tty->flags);

 VAR_14->flags &= ~VAR_0;
 FUNC_1(VAR_15);
}
