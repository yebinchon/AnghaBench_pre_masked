
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
struct atl1c_adapter {int hw; } ;


 int FUNC_0 (int *,int,int*) ;
 struct atl1c_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0, int VAR_1, int VAR_2)
{
 struct atl1c_adapter *VAR_3 = FUNC_1(VAR_0);
 u16 VAR_4;

 FUNC_0(&VAR_3->hw, VAR_2, &VAR_4);
 return VAR_4;
}
