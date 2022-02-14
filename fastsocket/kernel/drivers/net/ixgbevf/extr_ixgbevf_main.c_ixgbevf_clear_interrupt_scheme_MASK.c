
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbevf_adapter {scalar_t__ num_rx_queues; scalar_t__ num_tx_queues; } ;


 int FUNC_0 (struct ixgbevf_adapter*) ;
 int FUNC_1 (struct ixgbevf_adapter*) ;

__attribute__((used)) static void FUNC_2(struct ixgbevf_adapter *VAR_0)
{
 VAR_0->num_tx_queues = 0;
 VAR_0->num_rx_queues = 0;

 FUNC_0(VAR_0);
 FUNC_1(VAR_0);
}
