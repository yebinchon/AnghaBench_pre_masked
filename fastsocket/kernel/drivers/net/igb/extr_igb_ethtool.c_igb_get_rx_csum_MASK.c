
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct igb_adapter {TYPE_1__** rx_ring; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 struct igb_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static u32 FUNC_2(struct net_device *VAR_1)
{
 struct igb_adapter *VAR_2 = FUNC_0(VAR_1);
 return FUNC_1(VAR_0, &VAR_2->rx_ring[0]->flags);
}
