
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {struct efx_mtd* priv; } ;
struct falcon_nic_data {int spi_lock; } ;
struct efx_nic {struct falcon_nic_data* nic_data; } ;
struct efx_mtd_partition {scalar_t__ offset; } ;
struct efx_mtd {struct efx_nic* efx; } ;
typedef scalar_t__ loff_t ;


 int FUNC_0 (struct efx_mtd_partition*,scalar_t__,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct efx_mtd_partition* FUNC_3 (struct mtd_info*) ;

__attribute__((used)) static int FUNC_4(struct mtd_info *VAR_0, loff_t VAR_1, size_t VAR_2)
{
 struct efx_mtd_partition *VAR_3 = FUNC_3(VAR_0);
 struct efx_mtd *VAR_4 = VAR_0->priv;
 struct efx_nic *VAR_5 = VAR_4->efx;
 struct falcon_nic_data *VAR_6 = VAR_5->nic_data;
 int VAR_7;

 VAR_7 = FUNC_1(&VAR_6->spi_lock);
 if (VAR_7)
  return VAR_7;
 VAR_7 = FUNC_0(VAR_3, VAR_3->offset + VAR_1, VAR_2);
 FUNC_2(&VAR_6->spi_lock);
 return VAR_7;
}
