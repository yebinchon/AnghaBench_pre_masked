
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atl1c_hw {int dummy; } ;
struct atl1c_adapter {int mdio_lock; struct atl1c_hw hw; } ;


 int FUNC_0 (struct atl1c_hw*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_0)
{
 struct atl1c_adapter *VAR_1 = (struct atl1c_adapter *) VAR_0;
 struct atl1c_hw *VAR_2 = &VAR_1->hw;
 unsigned long VAR_3;

 FUNC_1(&VAR_1->mdio_lock, VAR_3);
 FUNC_0(VAR_2);
 FUNC_2(&VAR_1->mdio_lock, VAR_3);
}
