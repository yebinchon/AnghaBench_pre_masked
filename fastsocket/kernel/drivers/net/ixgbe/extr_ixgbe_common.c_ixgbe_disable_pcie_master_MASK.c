
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_2__ {int flags; } ;
struct ixgbe_hw {TYPE_1__ mac; struct ixgbe_adapter* back; } ;
struct ixgbe_adapter {int pdev; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct ixgbe_hw*,int ,int ) ;
 int FUNC_2 (struct ixgbe_hw*,char*) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static s32 FUNC_5(struct ixgbe_hw *VAR_9)
{
 struct ixgbe_adapter *VAR_10 = VAR_9->back;
 s32 VAR_11 = 0;
 u32 VAR_12;
 u16 VAR_13;


 FUNC_1(VAR_9, VAR_0, VAR_1);


 if (!(FUNC_0(VAR_9, VAR_7) & VAR_8))
  goto out;


 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
  FUNC_4(100);
  if (!(FUNC_0(VAR_9, VAR_7) & VAR_8))
   goto out;
 }
 FUNC_2(VAR_9, "GIO Master Disable bit didn't clear - requesting resets\n");
 VAR_9->mac.flags |= VAR_3;





 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
  FUNC_4(100);
  FUNC_3(VAR_10->pdev, VAR_4,
        &VAR_13);
  if (!(VAR_13 & VAR_5))
   goto out;
 }

 FUNC_2(VAR_9, "PCIe transaction pending bit also did not clear.\n");
 VAR_11 = VAR_2;

out:
 return VAR_11;
}
