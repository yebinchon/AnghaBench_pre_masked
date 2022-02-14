
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct efx_spi_device {int dummy; } ;
struct efx_nic {int dummy; } ;
struct TYPE_2__ {struct efx_mtd* priv; } ;
struct efx_mtd_partition {int name; TYPE_1__ mtd; } ;
struct efx_mtd {int name; struct efx_nic* efx; struct efx_spi_device* spi; } ;
typedef int status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int FUNC_1 (struct efx_nic*,struct efx_spi_device const*,int ,int,int *,int*,int) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct efx_mtd_partition *VAR_8, bool VAR_9)
{
 struct efx_mtd *VAR_10 = VAR_8->mtd.priv;
 const struct efx_spi_device *VAR_11 = VAR_10->spi;
 struct efx_nic *VAR_12 = VAR_10->efx;
 u8 VAR_13;
 int VAR_14, VAR_15;


 for (VAR_15 = 0; VAR_15 < 40; VAR_15++) {
  FUNC_0(VAR_9 ?
        VAR_6 : VAR_5);
  FUNC_3(VAR_2 / 10);
  VAR_14 = FUNC_1(VAR_12, VAR_11, VAR_3, -1, ((void*)0),
        &VAR_13, sizeof(VAR_13));
  if (VAR_14)
   return VAR_14;
  if (!(VAR_13 & VAR_4))
   return 0;
  if (FUNC_4(VAR_7))
   return -VAR_0;
 }
 FUNC_2("%s: timed out waiting for %s\n", VAR_8->name, VAR_10->name);
 return -VAR_1;
}
