
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qlcnic_adapter {int dummy; } ;
struct ethtool_cmd {scalar_t__ autoneg; scalar_t__ duplex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (struct ethtool_cmd*) ;
 int FUNC_1 (struct qlcnic_adapter*,int) ;

__attribute__((used)) static int FUNC_2(struct qlcnic_adapter *VAR_3,
      struct ethtool_cmd *VAR_4)
{
 u32 VAR_5 = 0, VAR_6 = 0;

 if (VAR_4->duplex)
  VAR_6 |= 0x1;

 if (VAR_4->autoneg)
  VAR_6 |= 0x2;

 switch (FUNC_0(VAR_4)) {
 case 130:
  VAR_6 |= (0 << 8);
  break;
 case 129:
  VAR_6 |= (1 << 8);
  break;
 case 128:
  VAR_6 |= (10 << 8);
  break;
 default:
  return -VAR_0;
 }

 VAR_5 = FUNC_1(VAR_3, VAR_6);

 if (VAR_5 == VAR_2)
  return -VAR_1;
 else if (VAR_5)
  return -VAR_0;
 return VAR_5;
}
