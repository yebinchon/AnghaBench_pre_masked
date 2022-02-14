
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int unhandled; int tx; int rx; int wakeup; int sw; int ctkill; int rfkill; int alive; int sch; int hw; } ;
struct TYPE_5__ {int max_txq_num; } ;
struct il_priv {int ucode_write_complete; int inta_mask; int status; TYPE_3__ isr_stats; int wait_command_queue; int * txq; TYPE_2__ hw_params; int rxq; TYPE_1__* hw; int lock; } ;
struct TYPE_4__ {int wiphy; } ;


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
 int FUNC_0 (char*,...) ;
 int VAR_17 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,...) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_3 (struct il_priv*,int ) ;
 int FUNC_4 (struct il_priv*,int ,int) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct il_priv*) ;
 int FUNC_7 (struct il_priv*) ;
 int FUNC_8 (struct il_priv*) ;
 int FUNC_9 (struct il_priv*) ;
 int FUNC_10 (struct il_priv*,int) ;
 int FUNC_11 (struct il_priv*) ;
 int FUNC_12 (struct il_priv*) ;
 int FUNC_13 (struct il_priv*,int *) ;
 int FUNC_14 (struct il_priv*,int *) ;
 int FUNC_15 (int ,int *) ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (int *,unsigned long) ;
 scalar_t__ FUNC_18 (int ,int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ,int) ;

__attribute__((used)) static void
FUNC_21(struct il_priv *VAR_20)
{
 u32 VAR_21, VAR_22 = 0;
 u32 VAR_23;
 unsigned long VAR_24;
 u32 VAR_25;




 FUNC_16(&VAR_20->lock, VAR_24);




 VAR_21 = FUNC_3(VAR_20, VAR_5);
 FUNC_4(VAR_20, VAR_5, VAR_21);




 VAR_23 = FUNC_3(VAR_20, VAR_2);
 FUNC_4(VAR_20, VAR_2, VAR_23);
 FUNC_17(&VAR_20->lock, VAR_24);





 if (VAR_23 & VAR_0)
  VAR_21 |= VAR_8;
 if (VAR_23 & VAR_1)
  VAR_21 |= VAR_9;


 if (VAR_21 & VAR_10) {
  FUNC_1("Hardware error detected.  Restarting.\n");


  FUNC_7(VAR_20);

  VAR_20->isr_stats.hw++;
  FUNC_12(VAR_20);

  VAR_22 |= VAR_10;

  return;
 }
 VAR_21 &= ~(VAR_12 | VAR_6);


 if (VAR_21 & VAR_11) {
  int VAR_26 = 0;

  if (!(FUNC_3(VAR_20, VAR_3) & VAR_4))
   VAR_26 = 1;

  FUNC_2("RF_KILL bit toggled to %s.\n",
   VAR_26 ? "disable radio" : "enable radio");

  VAR_20->isr_stats.rfkill++;






  if (VAR_26) {
   FUNC_15(VAR_19, &VAR_20->status);
  } else {
   FUNC_5(VAR_19, &VAR_20->status);
   FUNC_10(VAR_20, 1);
  }
  FUNC_20(VAR_20->hw->wiphy, VAR_26);

  VAR_22 |= VAR_11;
 }


 if (VAR_21 & VAR_7) {
  FUNC_1("Microcode CT kill error detected.\n");
  VAR_20->isr_stats.ctkill++;
  VAR_22 |= VAR_7;
 }


 if (VAR_21 & VAR_13) {
  FUNC_1("Microcode SW error detected. " " Restarting 0x%X.\n",
         VAR_21);
  VAR_20->isr_stats.sw++;
  FUNC_12(VAR_20);
  VAR_22 |= VAR_13;
 }






 if (VAR_21 & VAR_15) {
  FUNC_0("Wakeup interrupt\n");
  FUNC_13(VAR_20, &VAR_20->rxq);
  for (VAR_25 = 0; VAR_25 < VAR_20->hw_params.max_txq_num; VAR_25++)
   FUNC_14(VAR_20, &VAR_20->txq[VAR_25]);
  VAR_20->isr_stats.wakeup++;
  VAR_22 |= VAR_15;
 }




 if (VAR_21 & (VAR_8 | VAR_14)) {
  FUNC_6(VAR_20);
  VAR_20->isr_stats.rx++;
  VAR_22 |= (VAR_8 | VAR_14);
 }


 if (VAR_21 & VAR_9) {
  FUNC_0("uCode load interrupt\n");
  VAR_20->isr_stats.tx++;
  VAR_22 |= VAR_9;

  VAR_20->ucode_write_complete = 1;
  FUNC_19(&VAR_20->wait_command_queue);
 }

 if (VAR_21 & ~VAR_22) {
  FUNC_1("Unhandled INTA bits 0x%08x\n", VAR_21 & ~VAR_22);
  VAR_20->isr_stats.unhandled++;
 }

 if (VAR_21 & ~(VAR_20->inta_mask)) {
  FUNC_2("Disabled INTA bits 0x%08x were pending\n",
   VAR_21 & ~VAR_20->inta_mask);
  FUNC_2("   with FH49_INT = 0x%08x\n", VAR_23);
 }



 if (FUNC_18(VAR_18, &VAR_20->status))
  FUNC_8(VAR_20);

 else if (VAR_22 & VAR_11)
  FUNC_9(VAR_20);
}
