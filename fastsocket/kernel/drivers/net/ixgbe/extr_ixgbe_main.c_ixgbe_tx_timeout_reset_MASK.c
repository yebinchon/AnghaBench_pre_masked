
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_adapter {int flags2; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ixgbe_adapter*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct ixgbe_adapter *VAR_3)
{


 if (!FUNC_2(VAR_1, &VAR_3->state)) {
  VAR_3->flags2 |= VAR_0;
  FUNC_0(VAR_2, "initiating reset due to tx timeout\n");
  FUNC_1(VAR_3);
 }
}
