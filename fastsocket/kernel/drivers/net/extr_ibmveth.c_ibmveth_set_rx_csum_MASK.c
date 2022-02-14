
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct ibmveth_adapter {scalar_t__ rx_csum; } ;


 int FUNC_0 (struct net_device*,scalar_t__,int ) ;
 int VAR_0 ;
 struct ibmveth_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, u32 VAR_2)
{
 struct ibmveth_adapter *VAR_3 = FUNC_1(VAR_1);

 if ((VAR_2 && VAR_3->rx_csum) || (!VAR_2 && !VAR_3->rx_csum))
  return 0;

 return FUNC_0(VAR_1, VAR_2, VAR_0);
}
