
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct ipath_devdata {scalar_t__ ipath_int_counter; int ipath_flags; int ipath_i_bitsextant; scalar_t__ ipath_gpio_mask; unsigned long long ipath_i_rcvavail_shift; unsigned long long ipath_i_rcvurg_shift; int ipath_i_rcvavail_mask; int ipath_i_rcvurg_mask; int ipath_sendctrl; int ipath_sendctrl_lock; TYPE_2__* ipath_kregs; int * ipath_pd; int ipath_lli_errs; int ipath_overrun_thresh_errs; int ipath_rxfc_unsupvl_errs; TYPE_1__* pcidev; } ;
typedef int irqreturn_t ;
typedef long long ipath_err_t ;
struct TYPE_6__ {int sps_errints; int sps_nullintr; int sps_ints; } ;
struct TYPE_5__ {int kr_scratch; int kr_sendctrl; int kr_intclear; int kr_gpio_clear; int kr_gpio_mask; int kr_gpio_status; int kr_errorstatus; int kr_intstatus; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
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
 int FUNC_0 (int *,char*,unsigned long long) ;
 int FUNC_1 (struct ipath_devdata*,long long) ;
 int FUNC_2 (struct ipath_devdata*) ;
 int FUNC_3 (struct ipath_devdata*,int) ;
 int FUNC_4 (struct ipath_devdata*,int) ;
 int FUNC_5 (struct ipath_devdata*,unsigned int*) ;
 int FUNC_6 (struct ipath_devdata*) ;
 int FUNC_7 (int ,char*,unsigned long long) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (struct ipath_devdata*,char*,...) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct ipath_devdata*,int ) ;
 scalar_t__ FUNC_12 (struct ipath_devdata*,int ) ;
 long long FUNC_13 (struct ipath_devdata*,int ) ;
 TYPE_3__ VAR_18 ;
 int FUNC_14 (struct ipath_devdata*,int ,int) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int *,unsigned long) ;
 scalar_t__ FUNC_17 (int) ;

irqreturn_t FUNC_18(int VAR_19, void *VAR_20)
{
 struct ipath_devdata *VAR_21 = VAR_20;
 u64 VAR_22, VAR_23 = 0;
 ipath_err_t VAR_24 = 0;
 irqreturn_t VAR_25;
 static unsigned VAR_26 = 0;
 u64 VAR_27;

 VAR_18.sps_ints++;

 if (VAR_21->ipath_int_counter != (u32) -1)
  VAR_21->ipath_int_counter++;

 if (!(VAR_21->ipath_flags & VAR_14)) {






  return VAR_15;
 }
 if (!(VAR_21->ipath_flags & VAR_13)) {
  FUNC_5(VAR_21, &VAR_26);
  VAR_25 = VAR_16;
  goto bail;
 }

 VAR_22 = FUNC_11(VAR_21, VAR_21->ipath_kregs->kr_intstatus);

 if (FUNC_17(!VAR_22)) {
  VAR_18.sps_nullintr++;
  VAR_25 = VAR_16;
  goto bail;
 }
 if (FUNC_17(VAR_22 == -1)) {
  FUNC_6(VAR_21);

  VAR_25 = VAR_16;
  goto bail;
 }

 if (VAR_26)
  VAR_26 = 0;

 if (FUNC_17(VAR_22 & ~VAR_21->ipath_i_bitsextant))
  FUNC_9(VAR_21,
         "interrupt with unknown interrupts %Lx set\n",
         (unsigned long long)
         VAR_22 & ~VAR_21->ipath_i_bitsextant);
 else if (VAR_22 & ~VAR_0)
  FUNC_7(VAR_17, "intr stat=0x%Lx\n",
   (unsigned long long) VAR_22);

 if (VAR_22 & VAR_0) {
  VAR_18.sps_errints++;
  VAR_24 = FUNC_13(VAR_21,
       VAR_21->ipath_kregs->kr_errorstatus);
  if (!VAR_24)
   FUNC_0(&VAR_21->pcidev->dev, "error interrupt (%Lx), "
     "but no error bits set!\n",
     (unsigned long long) VAR_22);
  else if (VAR_24 == -1LL)




   FUNC_9(VAR_21, "Read of error status failed "
          "(all bits set); ignoring\n");
  else
   VAR_23 |= FUNC_1(VAR_21, VAR_24);
 }

 if (VAR_22 & VAR_1) {
  u32 VAR_28;
  u32 VAR_29 = 0;

  VAR_28 = FUNC_12(
   VAR_21, VAR_21->ipath_kregs->kr_gpio_status);

  if ((VAR_28 & VAR_7) &&
      (VAR_21->ipath_flags & VAR_6)) {

   VAR_29 |= (VAR_28 & VAR_7);





   if (VAR_28 & (1 << VAR_12)) {
    FUNC_8("FlowCtl on UnsupVL\n");
    VAR_21->ipath_rxfc_unsupvl_errs++;
   }
   if (VAR_28 & (1 << VAR_10)) {
    FUNC_8("Overrun Threshold exceeded\n");
    VAR_21->ipath_overrun_thresh_errs++;
   }
   if (VAR_28 & (1 << VAR_9)) {
    FUNC_8("Local Link Integrity error\n");
    VAR_21->ipath_lli_errs++;
   }
   VAR_28 &= ~VAR_7;
  }

  if ((VAR_28 & (1 << VAR_11)) &&
      (VAR_21->ipath_flags & VAR_8)) {







   VAR_29 |= (1 << VAR_11);
   VAR_28 &= ~(1 << VAR_11);
   VAR_23 = 1;
  }
  if (VAR_28) {






   const u32 VAR_30 = (u32) VAR_21->ipath_gpio_mask;

   if (VAR_30 & VAR_28) {
    FUNC_8("Unexpected GPIO IRQ bits %x\n",
      VAR_28 & VAR_30);
    VAR_29 |= (VAR_28 & VAR_30);
    VAR_21->ipath_gpio_mask &= ~(VAR_28 & VAR_30);
    FUNC_14(VAR_21,
     VAR_21->ipath_kregs->kr_gpio_mask,
     VAR_21->ipath_gpio_mask);
   }
  }
  if (VAR_29) {
   FUNC_14(VAR_21, VAR_21->ipath_kregs->kr_gpio_clear,
     (u64) VAR_29);
  }
 }
 FUNC_14(VAR_21, VAR_21->ipath_kregs->kr_intclear, VAR_22);







 VAR_27 = (1ULL << VAR_21->ipath_i_rcvavail_shift) |
  (1ULL << VAR_21->ipath_i_rcvurg_shift);
 if (VAR_23 || (VAR_22 & VAR_27)) {
  VAR_22 &= ~VAR_27;
  FUNC_10(VAR_21->ipath_pd[0]);
 }

 if (VAR_22 & ((VAR_21->ipath_i_rcvavail_mask << VAR_21->ipath_i_rcvavail_shift) |
       (VAR_21->ipath_i_rcvurg_mask << VAR_21->ipath_i_rcvurg_shift)))
  FUNC_4(VAR_21, VAR_22);

 if (VAR_22 & (VAR_3 | VAR_2))
  FUNC_3(VAR_21, VAR_22);

 if (VAR_22 & VAR_4) {
  unsigned long VAR_31;

  FUNC_15(&VAR_21->ipath_sendctrl_lock, VAR_31);
  VAR_21->ipath_sendctrl &= ~VAR_5;
  FUNC_14(VAR_21, VAR_21->ipath_kregs->kr_sendctrl,
     VAR_21->ipath_sendctrl);
  FUNC_13(VAR_21, VAR_21->ipath_kregs->kr_scratch);
  FUNC_16(&VAR_21->ipath_sendctrl_lock, VAR_31);


  FUNC_2(VAR_21);
 }

 VAR_25 = VAR_15;

bail:
 return VAR_25;
}
