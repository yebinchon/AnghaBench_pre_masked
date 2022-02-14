
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct velocity_info {int mac_regs; } ;
struct net_device {int dummy; } ;
struct ethtool_cmd {scalar_t__ speed; scalar_t__ duplex; scalar_t__ autoneg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 struct velocity_info* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct velocity_info*,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_9, struct ethtool_cmd *VAR_10)
{
 struct velocity_info *VAR_11 = FUNC_1(VAR_9);
 u32 VAR_12;
 u32 VAR_13 = 0;
 int VAR_14 = 0;

 VAR_12 = FUNC_0(VAR_11->mac_regs);
 VAR_12 &= (~VAR_6);

 VAR_13 |= ((VAR_10->autoneg) ? VAR_4 : 0);
 VAR_13 |= ((VAR_10->speed == VAR_3) ? VAR_8 : 0);
 VAR_13 |= ((VAR_10->speed == VAR_2) ? VAR_7 : 0);
 VAR_13 |= ((VAR_10->duplex == VAR_0) ? VAR_5 : 0);

 if ((VAR_13 & VAR_4) && (VAR_13 != (VAR_12 | VAR_4)))
  VAR_14 = -VAR_1;
 else
  FUNC_2(VAR_11, VAR_13);

 return VAR_14;
}
