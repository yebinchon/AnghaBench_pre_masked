
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_14__ {int (* config_collision_dist ) (struct e1000_hw*) ;} ;
struct e1000_mac_info {int get_link_status; int type; TYPE_7__ ops; int autoneg; } ;
struct TYPE_8__ {int (* release ) (struct e1000_hw*) ;scalar_t__ (* acquire ) (struct e1000_hw*) ;} ;
struct TYPE_13__ {int type; TYPE_1__ ops; } ;
struct TYPE_11__ {scalar_t__ eee_lp_ability; } ;
struct TYPE_12__ {TYPE_4__ ich8lan; } ;
struct e1000_hw {TYPE_6__ phy; struct e1000_mac_info mac; TYPE_5__ dev_spec; TYPE_3__* adapter; } ;
typedef scalar_t__ s32 ;
struct TYPE_10__ {TYPE_2__* pdev; } ;
struct TYPE_9__ {scalar_t__ device; } ;


 scalar_t__ VAR_0 ;
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
 int VAR_13 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int) ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*) ;

 int VAR_14 ;

 int VAR_15 ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int) ;
 scalar_t__ FUNC_5 (struct e1000_hw*) ;
 scalar_t__ FUNC_6 (struct e1000_hw*,int ,int ) ;
 int FUNC_7 (struct e1000_hw*) ;
 scalar_t__ FUNC_8 (struct e1000_hw*) ;
 scalar_t__ FUNC_9 (struct e1000_hw*,int,int ,int*) ;
 int FUNC_10 (struct e1000_hw*,int ,int*) ;
 int FUNC_11 (struct e1000_hw*,int ,int) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int) ;
 scalar_t__ FUNC_15 (struct e1000_hw*) ;
 int FUNC_16 (struct e1000_hw*) ;
 int FUNC_17 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_18(struct e1000_hw *VAR_16)
{
 struct e1000_mac_info *VAR_17 = &VAR_16->mac;
 s32 VAR_18;
 bool VAR_19;
 u16 VAR_20;






 if (!VAR_17->get_link_status)
  return 0;





 VAR_18 = FUNC_9(VAR_16, 1, 0, &VAR_19);
 if (VAR_18)
  return VAR_18;

 if (VAR_16->mac.type == 128) {
  VAR_18 = FUNC_0(VAR_16, VAR_19);
  if (VAR_18)
   return VAR_18;
 }





 if ((VAR_16->mac.type == 129) && VAR_19) {
  u32 VAR_21;
  VAR_21 = FUNC_13(VAR_12);
  if (!(VAR_21 & (VAR_5 | VAR_6))) {
   VAR_21 = FUNC_13(VAR_13);
   VAR_21 &= ~VAR_7;
   VAR_21 |= 0xFF;
   FUNC_14(VAR_13, VAR_21);


   VAR_18 = VAR_16->phy.ops.acquire(VAR_16);
   if (VAR_18)
    return VAR_18;

   VAR_18 =
       FUNC_6(VAR_16, VAR_11, 0);

   VAR_16->phy.ops.release(VAR_16);

   if (VAR_18)
    return VAR_18;
  }
 }


 if ((VAR_16->adapter->pdev->device == VAR_2) ||
     (VAR_16->adapter->pdev->device == VAR_3) ||
     (VAR_16->adapter->pdev->device == VAR_0) ||
     (VAR_16->adapter->pdev->device == VAR_1)) {
  VAR_18 = FUNC_1(VAR_16, VAR_19);
  if (VAR_18)
   return VAR_18;
 }

 if (VAR_16->mac.type == VAR_14) {



  VAR_18 = FUNC_4(VAR_16, VAR_19);
  if (VAR_18)
   return VAR_18;
 }


 VAR_16->dev_spec.ich8lan.eee_lp_ability = 0;

 if (!VAR_19)
  return 0;

 VAR_17->get_link_status = 0;

 switch (VAR_16->mac.type) {
 case 129:
  VAR_18 = FUNC_2(VAR_16);
  if (VAR_18)
   return VAR_18;

 case 128:
  if (VAR_16->phy.type == VAR_15) {
   VAR_18 = FUNC_3(VAR_16);
   if (VAR_18)
    return VAR_18;
  }






  FUNC_10(VAR_16, VAR_8, &VAR_20);
  VAR_20 &= ~VAR_9;

  if ((FUNC_13(VAR_12) & VAR_5) != VAR_5)
   VAR_20 |= (1 << VAR_10);

  FUNC_11(VAR_16, VAR_8, VAR_20);
  break;
 default:
  break;
 }




 FUNC_7(VAR_16);


 VAR_18 = FUNC_5(VAR_16);
 if (VAR_18)
  return VAR_18;




 if (!VAR_17->autoneg)
  return -VAR_4;





 VAR_17->ops.config_collision_dist(VAR_16);






 VAR_18 = FUNC_8(VAR_16);
 if (VAR_18)
  FUNC_12("Error configuring flow control\n");

 return VAR_18;
}
