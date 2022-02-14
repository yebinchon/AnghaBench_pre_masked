
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_info {struct efx_mtd* priv; } ;
struct efx_nic {int dummy; } ;
struct TYPE_2__ {int updating; int nvram_type; } ;
struct efx_mtd_partition {TYPE_1__ mcdi; } ;
struct efx_mtd {struct efx_nic* efx; } ;


 int FUNC_0 (struct efx_nic*,int ) ;
 struct efx_mtd_partition* FUNC_1 (struct mtd_info*) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_0)
{
 struct efx_mtd_partition *VAR_1 = FUNC_1(VAR_0);
 struct efx_mtd *VAR_2 = VAR_0->priv;
 struct efx_nic *VAR_3 = VAR_2->efx;
 int VAR_4 = 0;

 if (VAR_1->mcdi.updating) {
  VAR_1->mcdi.updating = 0;
  VAR_4 = FUNC_0(VAR_3, VAR_1->mcdi.nvram_type);
 }

 return VAR_4;
}
