
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tty_struct {int name; scalar_t__ driver_data; } ;
struct smc_regs {int smc_smcm; } ;
struct scc_regs {int scc_sccm; } ;
struct TYPE_6__ {TYPE_1__* state; } ;
typedef TYPE_2__ ser_info_t ;
struct TYPE_7__ {struct smc_regs* smc_regs; struct scc_regs* scc_regs; } ;
struct TYPE_5__ {int smc_scc_num; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 TYPE_4__* VAR_3 ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ,char*) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_4)
{
 ser_info_t *VAR_5 = (ser_info_t *)VAR_4->driver_data;
 int VAR_6;
 unsigned long VAR_7;
  volatile struct scc_regs *VAR_8;
  volatile struct smc_regs *VAR_9;

 if (FUNC_3(VAR_5, VAR_4->name, "rs_stop"))
  return;

 FUNC_2(VAR_7);
 VAR_6 = FUNC_0(VAR_5->state->smc_scc_num);
 if (VAR_5->state->smc_scc_num & VAR_0) {
  VAR_8 = &VAR_3->scc_regs[VAR_6];
  VAR_8->scc_sccm &= ~VAR_2;
 } else {

  VAR_9 = &VAR_3->smc_regs[VAR_6];
  VAR_9->smc_smcm &= ~VAR_1;
 }
 FUNC_1(VAR_7);
}
