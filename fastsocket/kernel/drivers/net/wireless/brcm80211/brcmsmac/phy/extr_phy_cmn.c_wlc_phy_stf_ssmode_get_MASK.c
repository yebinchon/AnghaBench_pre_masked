
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u16 ;
struct brcms_phy_pub {int dummy; } ;
struct brcms_phy {scalar_t__* tx_power_target; } ;
typedef int s8 ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;

s8 FUNC_1(struct brcms_phy_pub *VAR_6, u16 VAR_7)
{
 struct brcms_phy *VAR_8 = (struct brcms_phy *) VAR_6;
 u8 VAR_9, VAR_10;

 VAR_9 =
  (FUNC_0(VAR_7)) ? VAR_5 :
  VAR_3;
 VAR_10 =
  (FUNC_0(VAR_7)) ? VAR_4 :
  VAR_2;

 if (VAR_8->tx_power_target[VAR_9] >
     (VAR_8->tx_power_target[VAR_10] + 12))
  return VAR_1;
 else
  return VAR_0;
}
