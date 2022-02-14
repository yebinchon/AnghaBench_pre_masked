
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int toggleq; } ;
struct TYPE_3__ {int mib_intr; int rxeol_intr; int rxorn_intr; } ;
struct ath5k_hw {scalar_t__ ah_mac_srev; scalar_t__ tx_pending; scalar_t__ rx_pending; TYPE_2__ rf_kill; TYPE_1__ stats; int beacontq; int reset_work; int hw; int imask; int status; } ;
typedef int irqreturn_t ;
typedef enum ath5k_int { ____Placeholder_ath5k_int } ath5k_int ;


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
 scalar_t__ VAR_13 ;
 int FUNC_0 (struct ath5k_hw*,int ,char*,...) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct ath5k_hw*,char*) ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (struct ath5k_hw*) ;
 scalar_t__ FUNC_3 (struct ath5k_hw*) ;
 int FUNC_4 (struct ath5k_hw*,int*) ;
 scalar_t__ FUNC_5 (struct ath5k_hw*) ;
 int FUNC_6 (struct ath5k_hw*) ;
 int FUNC_7 (struct ath5k_hw*,int) ;
 int FUNC_8 (struct ath5k_hw*) ;
 int FUNC_9 (struct ath5k_hw*) ;
 int FUNC_10 (struct ath5k_hw*) ;
 int FUNC_11 (struct ath5k_hw*) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int ,int ) ;
 scalar_t__ FUNC_16 (int) ;

__attribute__((used)) static irqreturn_t
FUNC_17(int VAR_20, void *VAR_21)
{
 struct ath5k_hw *VAR_22 = VAR_21;
 enum ath5k_int VAR_23;
 unsigned int VAR_24 = 1000;
 if (FUNC_16(FUNC_15(VAR_17, VAR_22->status) ||
   ((FUNC_3(VAR_22) != VAR_16) &&
   !FUNC_5(VAR_22))))
  return VAR_19;


 do {
  FUNC_4(VAR_22, &VAR_23);

  FUNC_0(VAR_22, VAR_14, "status 0x%x/0x%x\n",
    VAR_23, VAR_22->imask);
  if (FUNC_16(VAR_23 & VAR_0)) {

   FUNC_0(VAR_22, VAR_15,
      "fatal int, resetting\n");
   FUNC_12(VAR_22->hw, &VAR_22->reset_work);
  } else if (FUNC_16(VAR_23 & VAR_6)) {







   VAR_22->stats.rxorn_intr++;

   if (VAR_22->ah_mac_srev < VAR_13) {
    FUNC_0(VAR_22, VAR_15,
       "rx overrun, resetting\n");
    FUNC_12(VAR_22->hw, &VAR_22->reset_work);
   } else
    FUNC_9(VAR_22);

  } else {


   if (VAR_23 & VAR_7)
    FUNC_13(&VAR_22->beacontq);
   if (VAR_23 & VAR_3)
    VAR_22->stats.rxeol_intr++;



   if (VAR_23 & VAR_12)
    FUNC_7(VAR_22, 1);


   if (VAR_23 & (VAR_5 | VAR_4))
    FUNC_9(VAR_22);


   if (VAR_23 & (VAR_11
     | VAR_8
     | VAR_10
     | VAR_9))
    FUNC_10(VAR_22);






   if (VAR_23 & VAR_2) {
    VAR_22->stats.mib_intr++;
    FUNC_6(VAR_22);
    FUNC_2(VAR_22);
   }


   if (VAR_23 & VAR_1)
    FUNC_14(&VAR_22->rf_kill.toggleq);

  }

  if (FUNC_3(VAR_22) == VAR_16)
   break;

 } while (FUNC_5(VAR_22) && --VAR_24 > 0);







 if (VAR_22->rx_pending || VAR_22->tx_pending)
  FUNC_11(VAR_22);

 if (FUNC_16(!VAR_24))
  FUNC_1(VAR_22, "too many interrupts, giving up for now\n");


 FUNC_8(VAR_22);

 return VAR_18;
}
