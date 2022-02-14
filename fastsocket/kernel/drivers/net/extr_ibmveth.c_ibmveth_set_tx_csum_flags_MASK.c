
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct net_device {int features; } ;
struct ibmveth_adapter {int rx_csum; scalar_t__ fw_ipv6_csum_support; scalar_t__ fw_ipv4_csum_support; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ibmveth_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_2, u32 VAR_3)
{
 struct ibmveth_adapter *VAR_4 = FUNC_0(VAR_2);

 if (VAR_3) {
  if (VAR_4->fw_ipv4_csum_support)
   VAR_2->features |= VAR_1;
  if (VAR_4->fw_ipv6_csum_support)
   VAR_2->features |= VAR_0;
  VAR_4->rx_csum = 1;
 } else {
  VAR_2->features &= ~VAR_1;
  VAR_2->features &= ~VAR_0;
 }
}
