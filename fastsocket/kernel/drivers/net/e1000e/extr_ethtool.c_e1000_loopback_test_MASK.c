
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {scalar_t__ (* check_reset_block ) (struct e1000_hw*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ phy; } ;
struct e1000_adapter {struct e1000_hw hw; } ;


 int FUNC_0 (struct e1000_adapter*) ;
 int FUNC_1 (struct e1000_adapter*) ;
 int FUNC_2 (struct e1000_adapter*) ;
 int FUNC_3 (struct e1000_adapter*) ;
 int FUNC_4 (struct e1000_adapter*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (struct e1000_hw*) ;

__attribute__((used)) static int FUNC_7(struct e1000_adapter *VAR_0, u64 *VAR_1)
{
 struct e1000_hw *VAR_2 = &VAR_0->hw;


 if (VAR_2->phy.ops.check_reset_block &&
     VAR_2->phy.ops.check_reset_block(VAR_2)) {
  FUNC_5("Cannot do PHY loopback test when SoL/IDER is active.\n");
  *VAR_1 = 0;
  goto out;
 }

 *VAR_1 = FUNC_3(VAR_0);
 if (*VAR_1)
  goto out;

 *VAR_1 = FUNC_4(VAR_0);
 if (*VAR_1)
  goto err_loopback;

 *VAR_1 = FUNC_2(VAR_0);
 FUNC_1(VAR_0);

err_loopback:
 FUNC_0(VAR_0);
out:
 return *VAR_1;
}
