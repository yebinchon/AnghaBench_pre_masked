
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ low_water; scalar_t__* high_water; } ;
struct ixgbe_hw {TYPE_1__ fc; } ;
struct ixgbe_adapter {int netdev; struct ixgbe_hw hw; } ;


 scalar_t__ FUNC_0 (struct ixgbe_adapter*,int) ;
 scalar_t__ FUNC_1 (struct ixgbe_adapter*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ixgbe_adapter *VAR_0)
{
 struct ixgbe_hw *VAR_1 = &VAR_0->hw;
 int VAR_2 = FUNC_2(VAR_0->netdev);
 int VAR_3;

 if (!VAR_2)
  VAR_2 = 1;

 VAR_1->fc.low_water = FUNC_1(VAR_0);

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_1->fc.high_water[VAR_3] = FUNC_0(VAR_0, VAR_3);


  if (VAR_1->fc.low_water > VAR_1->fc.high_water[VAR_3])
   VAR_1->fc.low_water = 0;
 }
}
