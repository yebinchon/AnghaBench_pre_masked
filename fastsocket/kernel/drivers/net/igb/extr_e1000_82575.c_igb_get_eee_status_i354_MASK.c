
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct e1000_phy_info {scalar_t__ media_type; scalar_t__ id; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int ,int ,int*) ;

s32 FUNC_1(struct e1000_hw *VAR_6, bool *VAR_7)
{
 struct e1000_phy_info *VAR_8 = &VAR_6->phy;
 s32 VAR_9 = 0;
 u16 VAR_10;


 if ((VAR_6->phy.media_type != VAR_5) ||
     (VAR_8->id != VAR_4))
  goto out;

 VAR_9 = FUNC_0(VAR_6, VAR_0,
         VAR_1,
         &VAR_10);
 if (VAR_9)
  goto out;

 *VAR_7 = VAR_10 & (VAR_3 |
         VAR_2) ? 1 : 0;

out:
 return VAR_9;
}
