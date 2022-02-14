
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {struct efx_mtd* priv; } ;
struct falcon_nic_data {int spi_lock; } ;
struct efx_nic {struct falcon_nic_data* nic_data; } ;
struct efx_mtd_partition {int dummy; } ;
struct efx_mtd {struct efx_nic* efx; } ;


 int FUNC_0 (struct efx_mtd_partition*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct efx_mtd_partition* FUNC_3 (struct mtd_info*) ;

__attribute__((used)) static int FUNC_4(struct mtd_info *VAR_0)
{
 struct efx_mtd_partition *VAR_1 = FUNC_3(VAR_0);
 struct efx_mtd *VAR_2 = VAR_0->priv;
 struct efx_nic *VAR_3 = VAR_2->efx;
 struct falcon_nic_data *VAR_4 = VAR_3->nic_data;
 int VAR_5;

 FUNC_1(&VAR_4->spi_lock);
 VAR_5 = FUNC_0(VAR_1, 1);
 FUNC_2(&VAR_4->spi_lock);
 return VAR_5;
}
