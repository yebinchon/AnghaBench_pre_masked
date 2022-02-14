
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct ixgbe_adapter {int dcbx_cap; } ;
struct dcb_app {int protocol; int selector; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,struct dcb_app*) ;
 struct ixgbe_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static u8 FUNC_2(struct net_device *VAR_1, u8 VAR_2, u16 VAR_3)
{
 struct ixgbe_adapter *VAR_4 = FUNC_1(VAR_1);
 struct dcb_app VAR_5 = {
    .selector = VAR_2,
    .protocol = VAR_3,
        };

 if (!(VAR_4->dcbx_cap & VAR_0))
  return 0;

 return FUNC_0(VAR_1, &VAR_5);
}
