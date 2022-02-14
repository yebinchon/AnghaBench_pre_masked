
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ql_adapter {int rx_csum; } ;
struct net_device {int dummy; } ;


 struct ql_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0, uint32_t VAR_1)
{
 struct ql_adapter *VAR_2 = FUNC_0(VAR_0);
 VAR_2->rx_csum = VAR_1;
 return 0;
}
