
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
struct smc_regs {int smc_smce; } ;
struct scc_regs {int scc_scce; } ;
struct TYPE_9__ {int last_active; TYPE_1__* state; } ;
typedef TYPE_2__ ser_info_t ;
struct TYPE_10__ {struct smc_regs* smc_regs; struct scc_regs* scc_regs; } ;
struct TYPE_8__ {int smc_scc_num; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_6 ;
 TYPE_6__* VAR_7 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(int VAR_8, void *VAR_9)
{
 u_char VAR_10;
 int VAR_11;
 ser_info_t *VAR_12;
 volatile struct smc_regs *VAR_13;
 volatile struct scc_regs *VAR_14;

 VAR_12 = VAR_9;

 VAR_11 = FUNC_0(VAR_12->state->smc_scc_num);
 if (VAR_12->state->smc_scc_num & VAR_0) {
  VAR_14 = &VAR_7->scc_regs[VAR_11];
  VAR_10 = VAR_14->scc_scce;
  if (VAR_10 & VAR_1)
   FUNC_4(VAR_12);
  if (VAR_10 & VAR_2)
   FUNC_5(VAR_12);
  VAR_14->scc_scce = VAR_10;
 } else {
  VAR_13 = &VAR_7->smc_regs[VAR_11];
  VAR_10 = VAR_13->smc_smce;
  if (VAR_10 & VAR_3)
   FUNC_3(VAR_12);
  if (VAR_10 & VAR_4)
   FUNC_4(VAR_12);
  if (VAR_10 & VAR_5)
   FUNC_5(VAR_12);
  VAR_13->smc_smce = VAR_10;
 }
 VAR_12->last_active = VAR_6;



}
