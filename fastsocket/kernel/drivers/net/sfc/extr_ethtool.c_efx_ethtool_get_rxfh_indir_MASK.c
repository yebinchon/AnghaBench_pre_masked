
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct efx_nic {int rx_indir_table; } ;


 int FUNC_0 (int *,int ,int) ;
 struct efx_nic* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0, u32 *VAR_1)
{
 struct efx_nic *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_1, VAR_2->rx_indir_table, sizeof(VAR_2->rx_indir_table));
 return 0;
}
