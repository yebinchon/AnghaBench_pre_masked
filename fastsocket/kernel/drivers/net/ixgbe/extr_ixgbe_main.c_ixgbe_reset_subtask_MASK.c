
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_adapter {int flags2; int tx_timeout_count; int netdev; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ixgbe_adapter*) ;
 int FUNC_1 (struct ixgbe_adapter*) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct ixgbe_adapter *VAR_3)
{
 if (!(VAR_3->flags2 & VAR_0))
  return;

 VAR_3->flags2 &= ~VAR_0;


 if (FUNC_3(VAR_1, &VAR_3->state) ||
     FUNC_3(VAR_2, &VAR_3->state))
  return;

 FUNC_0(VAR_3);
 FUNC_2(VAR_3->netdev, "Reset adapter\n");
 VAR_3->tx_timeout_count++;

 FUNC_1(VAR_3);
}
