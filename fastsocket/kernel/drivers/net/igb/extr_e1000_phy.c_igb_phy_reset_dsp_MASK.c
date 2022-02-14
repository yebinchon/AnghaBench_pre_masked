
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ (* write_reg ) (struct e1000_hw*,int ,int) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int) ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_1)
{
 s32 VAR_2 = 0;

 if (!(VAR_1->phy.ops.write_reg))
  goto out;

 VAR_2 = VAR_1->phy.ops.write_reg(VAR_1, VAR_0, 0xC1);
 if (VAR_2)
  goto out;

 VAR_2 = VAR_1->phy.ops.write_reg(VAR_1, VAR_0, 0);

out:
 return VAR_2;
}
