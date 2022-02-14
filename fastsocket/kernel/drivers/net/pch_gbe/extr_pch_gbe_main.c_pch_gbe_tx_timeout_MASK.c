
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_timeout_count; } ;
struct pch_gbe_adapter {int reset_task; TYPE_1__ stats; } ;
struct net_device {int dummy; } ;


 struct pch_gbe_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0)
{
 struct pch_gbe_adapter *VAR_1 = FUNC_0(VAR_0);


 VAR_1->stats.tx_timeout_count++;
 FUNC_1(&VAR_1->reset_task);
}
