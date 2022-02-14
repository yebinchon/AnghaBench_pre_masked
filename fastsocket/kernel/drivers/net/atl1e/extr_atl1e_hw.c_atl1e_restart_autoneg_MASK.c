
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atl1e_hw {int mii_autoneg_adv_reg; scalar_t__ nic_type; int mii_1000t_ctrl_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct atl1e_hw*,int ,int) ;

int FUNC_1(struct atl1e_hw *VAR_8)
{
 int VAR_9 = 0;

 VAR_9 = FUNC_0(VAR_8, VAR_0, VAR_8->mii_autoneg_adv_reg);
 if (VAR_9)
  return VAR_9;

 if (VAR_8->nic_type == VAR_6 || VAR_8->nic_type == VAR_7) {
  VAR_9 = FUNC_0(VAR_8, VAR_1,
           VAR_8->mii_1000t_ctrl_reg);
  if (VAR_9)
   return VAR_9;
 }

 VAR_9 = FUNC_0(VAR_8, VAR_2,
   VAR_4 | VAR_3 |
   VAR_5);
 return VAR_9;
}
