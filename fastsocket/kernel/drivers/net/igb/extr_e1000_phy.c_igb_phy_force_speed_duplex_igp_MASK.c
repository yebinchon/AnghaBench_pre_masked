
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ (* write_reg ) (struct e1000_hw*,int ,int ) ;scalar_t__ (* read_reg ) (struct e1000_hw*,int ,int *) ;} ;
struct e1000_phy_info {scalar_t__ autoneg_wait_to_complete; TYPE_1__ ops; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct e1000_hw*,int *) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int,int*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int ) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_6 (struct e1000_hw*,int ,int ) ;
 int FUNC_7 (int) ;

s32 FUNC_8(struct e1000_hw *VAR_5)
{
 struct e1000_phy_info *VAR_6 = &VAR_5->phy;
 s32 VAR_7;
 u16 VAR_8;
 bool VAR_9;

 VAR_7 = VAR_6->ops.read_reg(VAR_5, VAR_3, &VAR_8);
 if (VAR_7)
  goto out;

 FUNC_1(VAR_5, &VAR_8);

 VAR_7 = VAR_6->ops.write_reg(VAR_5, VAR_3, VAR_8);
 if (VAR_7)
  goto out;




 VAR_7 = VAR_6->ops.read_reg(VAR_5, VAR_0, &VAR_8);
 if (VAR_7)
  goto out;

 VAR_8 &= ~VAR_1;
 VAR_8 &= ~VAR_2;

 VAR_7 = VAR_6->ops.write_reg(VAR_5, VAR_0, VAR_8);
 if (VAR_7)
  goto out;

 FUNC_0("IGP PSCR: %X\n", VAR_8);

 FUNC_7(1);

 if (VAR_6->autoneg_wait_to_complete) {
  FUNC_0("Waiting for forced speed/duplex link on IGP phy.\n");

  VAR_7 = FUNC_2(VAR_5, VAR_4, 10000, &VAR_9);
  if (VAR_7)
   goto out;

  if (!VAR_9)
   FUNC_0("Link taking longer than expected.\n");


  VAR_7 = FUNC_2(VAR_5, VAR_4, 10000, &VAR_9);
  if (VAR_7)
   goto out;
 }

out:
 return VAR_7;
}
