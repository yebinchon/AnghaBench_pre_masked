
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mtd_info {struct efx_mtd* priv; } ;
struct falcon_nic_data {int spi_lock; } ;
struct efx_spi_device {int dummy; } ;
struct efx_nic {struct falcon_nic_data* nic_data; } ;
struct efx_mtd_partition {scalar_t__ offset; } ;
struct efx_mtd {struct efx_nic* efx; struct efx_spi_device* spi; } ;
typedef scalar_t__ loff_t ;


 int FUNC_0 (struct efx_nic*,struct efx_spi_device const*,scalar_t__,size_t,size_t*,int const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct efx_mtd_partition* FUNC_3 (struct mtd_info*) ;

__attribute__((used)) static int FUNC_4(struct mtd_info *VAR_0, loff_t VAR_1,
       size_t VAR_2, size_t *VAR_3, const u8 *VAR_4)
{
 struct efx_mtd_partition *VAR_5 = FUNC_3(VAR_0);
 struct efx_mtd *VAR_6 = VAR_0->priv;
 const struct efx_spi_device *VAR_7 = VAR_6->spi;
 struct efx_nic *VAR_8 = VAR_6->efx;
 struct falcon_nic_data *VAR_9 = VAR_8->nic_data;
 int VAR_10;

 VAR_10 = FUNC_1(&VAR_9->spi_lock);
 if (VAR_10)
  return VAR_10;
 VAR_10 = FUNC_0(VAR_8, VAR_7, VAR_5->offset + VAR_1, VAR_2,
         VAR_3, VAR_4);
 FUNC_2(&VAR_9->spi_lock);
 return VAR_10;
}
