
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ixgbe_adapter {int flags; int state; TYPE_1__* netdev; } ;
struct TYPE_2__ {int trans_start; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (struct ixgbe_adapter*) ;
 int FUNC_4 (struct ixgbe_adapter*) ;
 int VAR_2 ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (int,int) ;

void FUNC_8(struct ixgbe_adapter *VAR_3)
{
 FUNC_0(FUNC_2());

 VAR_3->netdev->trans_start = VAR_2;

 while (FUNC_6(VAR_1, &VAR_3->state))
  FUNC_7(1000, 2000);
 FUNC_3(VAR_3);






 if (VAR_3->flags & VAR_0)
  FUNC_5(2000);
 FUNC_4(VAR_3);
 FUNC_1(VAR_1, &VAR_3->state);
}
