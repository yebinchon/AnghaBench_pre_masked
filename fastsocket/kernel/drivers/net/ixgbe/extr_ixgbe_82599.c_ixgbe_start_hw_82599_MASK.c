
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int autotry_restart; int rx_pb_size; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*) ;

__attribute__((used)) static s32 FUNC_3(struct ixgbe_hw *VAR_1)
{
 s32 VAR_2 = 0;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 != 0)
  goto out;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 != 0)
  goto out;


 VAR_1->mac.autotry_restart = 1;
 VAR_1->mac.rx_pb_size = VAR_0;

 if (VAR_2 == 0)
  VAR_2 = FUNC_2(VAR_1);
out:
 return VAR_2;
}
