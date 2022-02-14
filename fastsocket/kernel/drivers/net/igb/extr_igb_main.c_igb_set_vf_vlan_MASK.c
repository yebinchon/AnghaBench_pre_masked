
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct e1000_hw {int dummy; } ;
struct igb_adapter {int vfs_allocated_count; int vlgrp; TYPE_1__* netdev; struct e1000_hw hw; } ;
struct TYPE_2__ {int flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct igb_adapter*,int) ;
 int FUNC_2 (struct igb_adapter*,int,int,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct igb_adapter *VAR_6, u32 *VAR_7, u32 VAR_8)
{
 struct e1000_hw *VAR_9 = &VAR_6->hw;
 int VAR_10 = (VAR_7[0] & VAR_2) >> VAR_3;
 int VAR_11 = (VAR_7[1] & VAR_1);
 int VAR_12 = 0;




 if (VAR_10 && (VAR_6->netdev->flags & VAR_4))
  VAR_12 = FUNC_2(VAR_6, VAR_11, VAR_10,
       VAR_6->vfs_allocated_count);
 if (VAR_12)
  goto out;

 VAR_12 = FUNC_2(VAR_6, VAR_11, VAR_10, VAR_8);

 if (VAR_12)
  goto out;




 if (!VAR_10 && (VAR_6->netdev->flags & VAR_4)) {
  u32 VAR_13, VAR_14;

  int VAR_15 = FUNC_1(VAR_6, VAR_11);
  if (VAR_15 < 0)
   goto out;



  VAR_13 = VAR_14 = FUNC_3(FUNC_0(VAR_15));
  VAR_14 &= 1 << (VAR_0 +
         VAR_6->vfs_allocated_count);




  if ((VAR_13 & VAR_5) == VAR_11 &&
      !VAR_6->vlgrp &&
      !VAR_14)
   FUNC_2(VAR_6, VAR_11, VAR_10,
         VAR_6->vfs_allocated_count);
 }

out:
 return VAR_12;
}
