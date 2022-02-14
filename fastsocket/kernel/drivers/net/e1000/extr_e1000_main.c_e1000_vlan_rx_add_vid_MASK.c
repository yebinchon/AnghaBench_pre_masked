
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int status; } ;
struct e1000_hw {TYPE_1__ mng_cookie; } ;
struct e1000_adapter {int mng_vlan_id; struct e1000_hw hw; } ;


 int VAR_0 ;
 int FUNC_0 (struct e1000_hw*,int ,int) ;
 int VAR_1 ;
 int FUNC_1 (struct e1000_hw*,int,int) ;
 struct e1000_adapter* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2, u16 VAR_3)
{
 struct e1000_adapter *VAR_4 = FUNC_2(VAR_2);
 struct e1000_hw *VAR_5 = &VAR_4->hw;
 u32 VAR_6, VAR_7;

 if ((VAR_5->mng_cookie.status &
      VAR_0) &&
     (VAR_3 == VAR_4->mng_vlan_id))
  return;

 VAR_7 = (VAR_3 >> 5) & 0x7F;
 VAR_6 = FUNC_0(VAR_5, VAR_1, VAR_7);
 VAR_6 |= (1 << (VAR_3 & 0x1F));
 FUNC_1(VAR_5, VAR_7, VAR_6);
}
