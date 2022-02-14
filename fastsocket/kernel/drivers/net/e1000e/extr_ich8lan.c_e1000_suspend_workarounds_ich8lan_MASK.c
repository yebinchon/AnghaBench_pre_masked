
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_11__ {int (* release ) (struct e1000_hw*) ;scalar_t__ (* acquire ) (struct e1000_hw*) ;} ;
struct TYPE_12__ {scalar_t__ type; int autoneg_advertised; TYPE_5__ ops; } ;
struct TYPE_10__ {scalar_t__ type; } ;
struct e1000_dev_spec_ich8lan {scalar_t__ eee_lp_ability; int eee_disable; } ;
struct TYPE_7__ {struct e1000_dev_spec_ich8lan ich8lan; } ;
struct e1000_hw {TYPE_6__ phy; TYPE_4__ mac; TYPE_3__* adapter; TYPE_1__ dev_spec; } ;
typedef scalar_t__ s32 ;
struct TYPE_9__ {TYPE_2__* pdev; } ;
struct TYPE_8__ {scalar_t__ device; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_0 (struct e1000_hw*,int) ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,scalar_t__*) ;
 int FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (struct e1000_hw*) ;
 int FUNC_5 (struct e1000_hw*,int ,scalar_t__*) ;
 int FUNC_6 (struct e1000_hw*,int ,scalar_t__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;
 scalar_t__ FUNC_9 (struct e1000_hw*) ;
 int FUNC_10 (struct e1000_hw*) ;
 scalar_t__ FUNC_11 (struct e1000_hw*) ;
 int FUNC_12 (struct e1000_hw*) ;

void FUNC_13(struct e1000_hw *VAR_26)
{
 struct e1000_dev_spec_ich8lan *VAR_27 = &VAR_26->dev_spec.ich8lan;
 u32 VAR_28;
 s32 VAR_29;

 VAR_28 = FUNC_7(VAR_22);
 VAR_28 |= VAR_8;

 if (VAR_26->phy.type == VAR_25) {
  u16 VAR_30, VAR_31 = VAR_26->adapter->pdev->device;

  if ((VAR_31 == VAR_3) ||
      (VAR_31 == VAR_4) ||
      (VAR_31 == VAR_1) ||
      (VAR_31 == VAR_2)) {
   u32 VAR_32 = FUNC_7(VAR_10);

   FUNC_8(VAR_10, VAR_32 & ~VAR_5);
  }

  VAR_29 = VAR_26->phy.ops.acquire(VAR_26);
  if (VAR_29)
   goto out;

  if (!VAR_27->eee_disable) {
   u16 VAR_33;

   VAR_29 =
       FUNC_1(VAR_26,
            VAR_14,
            &VAR_33);
   if (VAR_29)
    goto release;





   if ((VAR_33 & VAR_21) &&
       (VAR_27->eee_lp_ability &
        VAR_21) &&
       (VAR_26->phy.autoneg_advertised & VAR_0))
    VAR_28 &= ~(VAR_7 |
           VAR_9);
  }
  if (!(FUNC_7(VAR_11) & VAR_6)) {

   FUNC_5(VAR_26, VAR_17, &VAR_30);
   VAR_30 |= VAR_18;
   FUNC_6(VAR_26, VAR_17, VAR_30);




   FUNC_5(VAR_26, VAR_19, &VAR_30);
   VAR_30 |= VAR_20;
   FUNC_6(VAR_26, VAR_19, VAR_30);


   FUNC_5(VAR_26, VAR_15, &VAR_30);
   VAR_30 &= ~VAR_16;
   FUNC_6(VAR_26, VAR_15, VAR_30);
  }




  FUNC_5(VAR_26, VAR_12, &VAR_30);
  VAR_30 |= VAR_13;
  FUNC_6(VAR_26, VAR_12, VAR_30);

release:
  VAR_26->phy.ops.release(VAR_26);
 }
out:
 FUNC_8(VAR_22, VAR_28);

 if (VAR_26->mac.type == VAR_23)
  FUNC_3(VAR_26);

 if (VAR_26->mac.type >= VAR_24) {
  FUNC_0(VAR_26, 0);


  if (VAR_26->mac.type == VAR_24)
   FUNC_4(VAR_26);

  VAR_29 = VAR_26->phy.ops.acquire(VAR_26);
  if (VAR_29)
   return;
  FUNC_2(VAR_26);
  VAR_26->phy.ops.release(VAR_26);
 }
}
