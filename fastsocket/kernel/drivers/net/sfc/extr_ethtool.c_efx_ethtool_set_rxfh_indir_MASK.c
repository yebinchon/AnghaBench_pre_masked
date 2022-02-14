
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct efx_nic {int rx_indir_table; } ;


 int FUNC_0 (struct efx_nic*) ;
 int FUNC_1 (int ,int const*,int) ;
 struct efx_nic* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0,
          const u32 *VAR_1)
{
 struct efx_nic *VAR_2 = FUNC_2(VAR_0);

 FUNC_1(VAR_2->rx_indir_table, VAR_1, sizeof(VAR_2->rx_indir_table));
 FUNC_0(VAR_2);
 return 0;
}
