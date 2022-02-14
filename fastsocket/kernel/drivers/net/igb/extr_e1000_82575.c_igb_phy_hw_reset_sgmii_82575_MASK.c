
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ (* write_reg ) (struct e1000_hw*,int,int) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int,int) ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_0)
{
 s32 VAR_1;





 FUNC_0("Soft resetting SGMII attached PHY...\n");




 VAR_1 = VAR_0->phy.ops.write_reg(VAR_0, 0x1B, 0x8084);
 if (VAR_1)
  goto out;

 VAR_1 = FUNC_1(VAR_0);

out:
 return VAR_1;
}
