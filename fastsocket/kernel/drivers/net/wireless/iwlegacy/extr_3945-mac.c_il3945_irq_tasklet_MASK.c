
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int unhandled; int tx; int rx; int wakeup; int sw; int alive; int sch; int hw; } ;
struct il_priv {int inta_mask; int status; TYPE_1__ isr_stats; int * txq; int rxq; int lock; } ;


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
 int FUNC_0 (char*,...) ;
 int VAR_13 ;
 int FUNC_1 (int ) ;
 int VAR_14 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,int) ;
 int VAR_15 ;
 int FUNC_4 (struct il_priv*,int ) ;
 int FUNC_5 (struct il_priv*,int ,int) ;
 int FUNC_6 (struct il_priv*) ;
 int FUNC_7 (struct il_priv*) ;
 int FUNC_8 (struct il_priv*) ;
 int FUNC_9 (struct il_priv*) ;
 int FUNC_10 (struct il_priv*) ;
 int FUNC_11 (struct il_priv*,int *) ;
 int FUNC_12 (struct il_priv*,int *) ;
 int FUNC_13 (struct il_priv*,int ,int) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int *,unsigned long) ;
 scalar_t__ FUNC_16 (int ,int *) ;

__attribute__((used)) static void
FUNC_17(struct il_priv *VAR_16)
{
 u32 VAR_17, VAR_18 = 0;
 u32 VAR_19;
 unsigned long VAR_20;




 FUNC_14(&VAR_16->lock, VAR_20);




 VAR_17 = FUNC_4(VAR_16, VAR_3);
 FUNC_5(VAR_16, VAR_3, VAR_17);




 VAR_19 = FUNC_4(VAR_16, VAR_2);
 FUNC_5(VAR_16, VAR_2, VAR_19);
 FUNC_15(&VAR_16->lock, VAR_20);





 if (VAR_19 & VAR_0)
  VAR_17 |= VAR_5;
 if (VAR_19 & VAR_1)
  VAR_17 |= VAR_6;


 if (VAR_17 & VAR_7) {
  FUNC_2("Hardware error detected.  Restarting.\n");


  FUNC_7(VAR_16);

  VAR_16->isr_stats.hw++;
  FUNC_10(VAR_16);

  VAR_18 |= VAR_7;

  return;
 }
 VAR_17 &= ~(VAR_8 | VAR_4);


 if (VAR_17 & VAR_9) {
  FUNC_2("Microcode SW error detected. " "Restarting 0x%X.\n",
         VAR_17);
  VAR_16->isr_stats.sw++;
  FUNC_10(VAR_16);
  VAR_18 |= VAR_9;
 }


 if (VAR_17 & VAR_11) {
  FUNC_0("Wakeup interrupt\n");
  FUNC_11(VAR_16, &VAR_16->rxq);
  FUNC_12(VAR_16, &VAR_16->txq[0]);
  FUNC_12(VAR_16, &VAR_16->txq[1]);
  FUNC_12(VAR_16, &VAR_16->txq[2]);
  FUNC_12(VAR_16, &VAR_16->txq[3]);
  FUNC_12(VAR_16, &VAR_16->txq[4]);
  FUNC_12(VAR_16, &VAR_16->txq[5]);

  VAR_16->isr_stats.wakeup++;
  VAR_18 |= VAR_11;
 }




 if (VAR_17 & (VAR_5 | VAR_10)) {
  FUNC_6(VAR_16);
  VAR_16->isr_stats.rx++;
  VAR_18 |= (VAR_5 | VAR_10);
 }

 if (VAR_17 & VAR_6) {
  FUNC_0("Tx interrupt\n");
  VAR_16->isr_stats.tx++;

  FUNC_5(VAR_16, VAR_2, (1 << 6));
  FUNC_13(VAR_16, FUNC_1(VAR_13), 0x0);
  VAR_18 |= VAR_6;
 }

 if (VAR_17 & ~VAR_18) {
  FUNC_2("Unhandled INTA bits 0x%08x\n", VAR_17 & ~VAR_18);
  VAR_16->isr_stats.unhandled++;
 }

 if (VAR_17 & ~VAR_16->inta_mask) {
  FUNC_3("Disabled INTA bits 0x%08x were pending\n",
   VAR_17 & ~VAR_16->inta_mask);
  FUNC_3("   with inta_fh = 0x%08x\n", VAR_19);
 }



 if (FUNC_16(VAR_15, &VAR_16->status))
  FUNC_8(VAR_16);
}
