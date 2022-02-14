
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct atl1c_adapter {int hw; } ;


 int FUNC_0 (int *,int,int) ;
 struct atl1c_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0, int VAR_1,
        int VAR_2, int VAR_3)
{
 struct atl1c_adapter *VAR_4 = FUNC_1(VAR_0);

 FUNC_0(&VAR_4->hw, VAR_2, VAR_3);
}
