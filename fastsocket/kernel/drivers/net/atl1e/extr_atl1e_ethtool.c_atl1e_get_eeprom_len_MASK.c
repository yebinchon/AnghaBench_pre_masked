
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct atl1e_adapter {int hw; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct atl1e_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1)
{
 struct atl1e_adapter *VAR_2 = FUNC_1(VAR_1);

 if (!FUNC_0(&VAR_2->hw))
  return VAR_0;
 else
  return 0;
}
