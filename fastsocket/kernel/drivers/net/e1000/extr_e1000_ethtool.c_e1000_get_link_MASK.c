
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int get_link_status; } ;
struct e1000_adapter {TYPE_1__ hw; } ;


 int FUNC_0 (struct e1000_adapter*) ;
 struct e1000_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static u32 FUNC_3(struct net_device *VAR_0)
{
 struct e1000_adapter *VAR_1 = FUNC_1(VAR_0);
 if (!FUNC_2(VAR_0))
  VAR_1->hw.get_link_status = 1;

 return FUNC_0(VAR_1);
}
