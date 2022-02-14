
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ (* get_cfg_done ) (struct e1000_hw*) ;int (* release ) (struct e1000_hw*) ;scalar_t__ (* acquire ) (struct e1000_hw*) ;scalar_t__ (* check_reset_block ) (struct e1000_hw*) ;} ;
struct e1000_phy_info {TYPE_1__ ops; int reset_delay_us; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (struct e1000_hw*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*) ;
 int FUNC_5 (struct e1000_hw*) ;
 scalar_t__ FUNC_6 (struct e1000_hw*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int) ;

s32 FUNC_9(struct e1000_hw *VAR_2)
{
 struct e1000_phy_info *VAR_3 = &VAR_2->phy;
 s32 VAR_4;
 u32 VAR_5;

 if (VAR_3->ops.check_reset_block) {
  VAR_4 = VAR_3->ops.check_reset_block(VAR_2);
  if (VAR_4)
   return 0;
 }

 VAR_4 = VAR_3->ops.acquire(VAR_2);
 if (VAR_4)
  return VAR_4;

 VAR_5 = FUNC_1(VAR_0);
 FUNC_2(VAR_0, VAR_5 | VAR_1);
 FUNC_0();

 FUNC_7(VAR_3->reset_delay_us);

 FUNC_2(VAR_0, VAR_5);
 FUNC_0();

 FUNC_8(150, 300);

 VAR_3->ops.release(VAR_2);

 return VAR_3->ops.get_cfg_done(VAR_2);
}
