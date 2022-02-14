
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct efx_nic {int rx_checksum_enabled; } ;


 struct efx_nic* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0, u32 VAR_1)
{
 struct efx_nic *VAR_2 = FUNC_0(VAR_0);




 VAR_2->rx_checksum_enabled = !!VAR_1;

 return 0;
}
