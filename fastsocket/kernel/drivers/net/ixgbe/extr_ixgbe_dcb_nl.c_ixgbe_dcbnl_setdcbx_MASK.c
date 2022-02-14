
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct ixgbe_adapter {int dcbx_cap; int dcb_set_bitmap; } ;
struct ieee_pfc {int pfc_cap; int member_0; } ;
struct ieee_ets {int ets_cap; int member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct net_device*,struct ieee_ets*) ;
 int FUNC_1 (struct net_device*,struct ieee_pfc*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int ) ;
 struct ixgbe_adapter* FUNC_4 (struct net_device*) ;

__attribute__((used)) static u8 FUNC_5(struct net_device *VAR_8, u8 VAR_9)
{
 struct ixgbe_adapter *VAR_10 = FUNC_4(VAR_8);
 struct ieee_ets VAR_11 = {0};
 struct ieee_pfc VAR_12 = {0};
 int VAR_13 = 0;


 if ((VAR_9 & VAR_5) ||
     ((VAR_9 & VAR_7) && (VAR_9 & VAR_6)) ||
     !(VAR_9 & VAR_4))
  return 1;

 if (VAR_9 == VAR_10->dcbx_cap)
  return 0;

 VAR_10->dcbx_cap = VAR_9;


 VAR_11.ets_cap = 8;
 VAR_12.pfc_cap = 8;

 if (VAR_9 & VAR_7) {
  FUNC_0(VAR_8, &VAR_11);
  FUNC_1(VAR_8, &VAR_12);
 } else if (VAR_9 & VAR_6) {
  u8 VAR_14 = VAR_1 | VAR_3 | VAR_2 | VAR_0;

  VAR_10->dcb_set_bitmap |= VAR_14;
  FUNC_2(VAR_8);
 } else {



  FUNC_0(VAR_8, &VAR_11);
  FUNC_1(VAR_8, &VAR_12);
  VAR_13 = FUNC_3(VAR_8, 0);
 }

 return VAR_13 ? 1 : 0;
}
