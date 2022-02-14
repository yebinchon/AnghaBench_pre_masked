
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_adapter {scalar_t__ link_up; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ixgbe_adapter*) ;
 int FUNC_1 (struct ixgbe_adapter*) ;
 int FUNC_2 (struct ixgbe_adapter*) ;
 int FUNC_3 (struct ixgbe_adapter*) ;
 int FUNC_4 (struct ixgbe_adapter*) ;
 int FUNC_5 (struct ixgbe_adapter*) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct ixgbe_adapter *VAR_2)
{

 if (FUNC_6(VAR_0, &VAR_2->state) ||
     FUNC_6(VAR_1, &VAR_2->state))
  return;

 FUNC_5(VAR_2);

 if (VAR_2->link_up)
  FUNC_4(VAR_2);
 else
  FUNC_3(VAR_2);

 FUNC_0(VAR_2);
 FUNC_1(VAR_2);

 FUNC_2(VAR_2);
}
