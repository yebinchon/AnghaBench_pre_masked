
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct atl2_adapter {int dummy; } ;


 int FUNC_0 (struct atl2_adapter*) ;
 struct atl2_adapter* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0)
{
 struct atl2_adapter *VAR_1 = FUNC_1(VAR_0);
 if (FUNC_2(VAR_0))
  FUNC_0(VAR_1);
 return 0;
}
