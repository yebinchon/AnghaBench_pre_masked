
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct net_device {int features; } ;
struct ibmveth_adapter {int rx_csum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,scalar_t__,int (*) (struct net_device*,scalar_t__)) ;
 int FUNC_1 (struct net_device*,scalar_t__) ;
 struct ibmveth_adapter* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2, u32 VAR_3)
{
 struct ibmveth_adapter *VAR_4 = FUNC_2(VAR_2);
 int VAR_5 = 0;

 if (VAR_3 && (VAR_2->features & (VAR_1 | VAR_0)))
  return 0;
 if (!VAR_3 && !(VAR_2->features & (VAR_1 | VAR_0)))
  return 0;

 if (VAR_3 && !VAR_4->rx_csum)
  VAR_5 = FUNC_0(VAR_2, VAR_3,
           FUNC_1);
 else
  FUNC_1(VAR_2, VAR_3);

 return VAR_5;
}
