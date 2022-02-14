
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct e1000_adapter {int rx_csum; } ;


 int FUNC_0 (struct e1000_adapter*) ;
 int FUNC_1 (struct e1000_adapter*) ;
 struct e1000_adapter* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0, u32 VAR_1)
{
 struct e1000_adapter *VAR_2 = FUNC_2(VAR_0);
 VAR_2->rx_csum = VAR_1;

 if (FUNC_3(VAR_0))
  FUNC_0(VAR_2);
 else
  FUNC_1(VAR_2);
 return 0;
}
