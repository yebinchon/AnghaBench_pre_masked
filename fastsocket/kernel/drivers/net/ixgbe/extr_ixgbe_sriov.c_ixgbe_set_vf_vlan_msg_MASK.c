
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef size_t u32 ;
struct ixgbe_hw {int dummy; } ;
struct ixgbe_adapter {int vlgrp; TYPE_2__* netdev; TYPE_1__* vfinfo; struct ixgbe_hw hw; } ;
typedef int s32 ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {scalar_t__ pf_vlan; } ;


 int VAR_0 ;
 size_t FUNC_0 (struct ixgbe_hw*,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (int ,char*,size_t) ;
 int FUNC_5 (struct ixgbe_hw*,int) ;
 int FUNC_6 (struct ixgbe_adapter*,int,int,int) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_8(struct ixgbe_adapter *VAR_6,
     u32 *VAR_7, u32 VAR_8)
{
 struct ixgbe_hw *VAR_9 = &VAR_6->hw;
 int VAR_10 = (VAR_7[0] & VAR_2) >> VAR_3;
 int VAR_11 = (VAR_7[1] & VAR_1);
 int VAR_12;
 s32 VAR_13;
 u32 VAR_14;
 u32 VAR_15;
 u8 VAR_16 = FUNC_7(VAR_6->netdev);

 if (VAR_6->vfinfo[VAR_8].pf_vlan || VAR_16) {
  FUNC_4(VAR_5,
         "VF %d attempted to override administratively set VLAN configuration\n"
         "Reload the VF driver to resume operations\n",
         VAR_8);
  return -1;
 }




 if (VAR_10 && VAR_6->netdev->flags & VAR_0)
  VAR_12 = FUNC_6(VAR_6, VAR_10, VAR_11, FUNC_3(0));

 VAR_12 = FUNC_6(VAR_6, VAR_10, VAR_11, VAR_8);




 if (!VAR_10 && VAR_6->netdev->flags & VAR_0) {
  VAR_13 = FUNC_5(VAR_9, VAR_11);
  if (VAR_13 < 0)
   goto out;
  VAR_14 = FUNC_0(VAR_9, FUNC_1(VAR_13));



  if (FUNC_3(0) < 32) {
   VAR_15 = FUNC_0(VAR_9, FUNC_2(VAR_13 * 2));
   VAR_15 &= ~(1 << FUNC_3(0));
   VAR_15 |= FUNC_0(VAR_9,
            FUNC_2(VAR_13 * 2) + 1);
  } else {
   VAR_15 = FUNC_0(VAR_9,
           FUNC_2(VAR_13 * 2) + 1);
   VAR_15 &= ~(1 << (FUNC_3(0) - 32));
   VAR_15 |= FUNC_0(VAR_9, FUNC_2(VAR_13 * 2));
  }





  if ((VAR_14 & VAR_4) == VAR_11 &&
      !VAR_6->vlgrp && !VAR_15)
   FUNC_6(VAR_6, VAR_10, VAR_11, FUNC_3(0));
 }

out:

 return VAR_12;
}
