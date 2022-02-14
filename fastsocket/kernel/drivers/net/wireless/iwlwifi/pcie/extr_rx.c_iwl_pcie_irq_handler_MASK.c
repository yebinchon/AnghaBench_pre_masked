
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct isr_statistics {int unhandled; int tx; int rx; int wakeup; int sw; int ctkill; int rfkill; int alive; int sch; int hw; } ;
struct iwl_trans_pcie {int inta; int inta_mask; int ucode_write_complete; int status; int ucode_write_waitq; int * txq; int rxq; int wait_command_queue; int irq_lock; struct isr_statistics isr_stats; } ;
struct iwl_trans {int sync_cmd_lockdep_map; TYPE_2__* cfg; int op_mode; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {TYPE_1__* base_params; } ;
struct TYPE_3__ {int num_of_queues; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct iwl_trans*,char*,...) ;
 int FUNC_1 (struct iwl_trans*,char*) ;
 int VAR_20 ;
 int FUNC_2 (struct iwl_trans*,char*,...) ;
 struct iwl_trans_pcie* FUNC_3 (struct iwl_trans*) ;
 int FUNC_4 (struct iwl_trans*,char*,...) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct iwl_trans*) ;
 int FUNC_7 (struct iwl_trans*) ;
 int FUNC_8 (struct iwl_trans*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct iwl_trans*) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (struct iwl_trans*) ;
 int FUNC_13 (struct iwl_trans*) ;
 int FUNC_14 (struct iwl_trans*,int *) ;
 int FUNC_15 (struct iwl_trans*,int *) ;
 int FUNC_16 (struct iwl_trans*,int ) ;
 int FUNC_17 (struct iwl_trans*,int ,int) ;
 int FUNC_18 (struct iwl_trans*,int ,int ) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int ,int *) ;
 int FUNC_22 (int *,unsigned long) ;
 int FUNC_23 (int *,unsigned long) ;
 scalar_t__ FUNC_24 (int ,int *) ;
 scalar_t__ FUNC_25 (int ,int *) ;
 int FUNC_26 (int *) ;

irqreturn_t FUNC_27(int VAR_24, void *VAR_25)
{
 struct iwl_trans *VAR_26 = VAR_25;
 struct iwl_trans_pcie *VAR_27 = FUNC_3(VAR_26);
 struct isr_statistics *VAR_28 = &VAR_27->isr_stats;
 u32 VAR_29 = 0;
 u32 VAR_30 = 0;
 unsigned long VAR_31;
 u32 VAR_32;




 FUNC_19(&VAR_26->sync_cmd_lockdep_map);

 FUNC_22(&VAR_27->irq_lock, VAR_31);
 FUNC_17(VAR_26, VAR_3,
      VAR_27->inta | ~VAR_27->inta_mask);

 VAR_29 = VAR_27->inta;
 VAR_27->inta = 0;

 FUNC_23(&VAR_27->irq_lock, VAR_31);


 if (VAR_29 & VAR_8) {
  FUNC_2(VAR_26, "Hardware error detected.  Restarting.\n");


  FUNC_6(VAR_26);

  VAR_28->hw++;
  FUNC_12(VAR_26);

  VAR_30 |= VAR_8;

  goto out;
 }
 VAR_29 &= ~(VAR_11 | VAR_4);


 if (VAR_29 & VAR_9) {
  bool VAR_33;

  VAR_33 = FUNC_10(VAR_26);
  FUNC_4(VAR_26, "RF_KILL bit toggled to %s.\n",
    VAR_33 ? "disable radio" : "enable radio");

  VAR_28->rfkill++;

  FUNC_11(VAR_26->op_mode, VAR_33);
  if (VAR_33) {
   FUNC_21(VAR_23, &VAR_27->status);
   if (FUNC_24(VAR_21,
            &VAR_27->status))
    FUNC_1(VAR_26,
        "Rfkill while SYNC HCMD in flight\n");
   FUNC_26(&VAR_27->wait_command_queue);
  } else {
   FUNC_5(VAR_23, &VAR_27->status);
  }

  VAR_30 |= VAR_9;
 }


 if (VAR_29 & VAR_5) {
  FUNC_2(VAR_26, "Microcode CT kill error detected.\n");
  VAR_28->ctkill++;
  VAR_30 |= VAR_5;
 }


 if (VAR_29 & VAR_12) {
  FUNC_2(VAR_26, "Microcode SW error detected. "
   " Restarting 0x%X.\n", VAR_29);
  VAR_28->sw++;
  FUNC_12(VAR_26);
  VAR_30 |= VAR_12;
 }


 if (VAR_29 & VAR_14) {
  FUNC_0(VAR_26, "Wakeup interrupt\n");
  FUNC_14(VAR_26, &VAR_27->rxq);
  for (VAR_32 = 0; VAR_32 < VAR_26->cfg->base_params->num_of_queues; VAR_32++)
   FUNC_15(VAR_26, &VAR_27->txq[VAR_32]);

  VAR_28->wakeup++;

  VAR_30 |= VAR_14;
 }




 if (VAR_29 & (VAR_6 | VAR_13 |
      VAR_10)) {
  FUNC_0(VAR_26, "Rx interrupt\n");
  if (VAR_29 & (VAR_6 | VAR_13)) {
   VAR_30 |= (VAR_6 | VAR_13);
   FUNC_17(VAR_26, VAR_1,
     VAR_0);
  }
  if (VAR_29 & VAR_10) {
   VAR_30 |= VAR_10;
   FUNC_17(VAR_26,
    VAR_3, VAR_10);
  }
  FUNC_18(VAR_26, VAR_18,
       VAR_16);

  FUNC_13(VAR_26);
  if (VAR_29 & (VAR_6 | VAR_13))
   FUNC_18(VAR_26, VAR_18,
       VAR_17);

  VAR_28->rx++;
 }


 if (VAR_29 & VAR_7) {
  FUNC_17(VAR_26, VAR_1, VAR_2);
  FUNC_0(VAR_26, "uCode load interrupt\n");
  VAR_28->tx++;
  VAR_30 |= VAR_7;

  VAR_27->ucode_write_complete = 1;
  FUNC_26(&VAR_27->ucode_write_waitq);
 }

 if (VAR_29 & ~VAR_30) {
  FUNC_2(VAR_26, "Unhandled INTA bits 0x%08x\n", VAR_29 & ~VAR_30);
  VAR_28->unhandled++;
 }

 if (VAR_29 & ~(VAR_27->inta_mask)) {
  FUNC_4(VAR_26, "Disabled INTA bits 0x%08x were pending\n",
    VAR_29 & ~VAR_27->inta_mask);
 }



 if (FUNC_25(VAR_22, &VAR_27->status))
  FUNC_7(VAR_26);

 else if (VAR_30 & VAR_9)
  FUNC_8(VAR_26);

out:
 FUNC_20(&VAR_26->sync_cmd_lockdep_map);
 return VAR_19;
}
