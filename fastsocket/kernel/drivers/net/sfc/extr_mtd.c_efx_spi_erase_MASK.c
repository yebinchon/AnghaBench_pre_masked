
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct efx_spi_device {size_t erase_size; scalar_t__ erase_command; } ;
struct efx_nic {int dummy; } ;
struct TYPE_2__ {struct efx_mtd* priv; } ;
struct efx_mtd_partition {TYPE_1__ mtd; } ;
struct efx_mtd {struct efx_nic* efx; struct efx_spi_device* spi; } ;
typedef unsigned int loff_t ;
typedef int empty ;
typedef int buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 () ;
 int VAR_6 ;
 int FUNC_1 (struct efx_mtd_partition*,int) ;
 int FUNC_2 (struct efx_nic*,struct efx_spi_device const*) ;
 int FUNC_3 (struct efx_nic*,struct efx_spi_device const*,scalar_t__,unsigned int,int *,int *,int ) ;
 int FUNC_4 (struct efx_nic*,struct efx_spi_device const*,unsigned int,unsigned int,int *,int *) ;
 scalar_t__ FUNC_5 (int *,int *,unsigned int) ;
 int FUNC_6 (int *,int,int) ;
 unsigned int FUNC_7 (size_t,int) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(struct efx_mtd_partition *VAR_7, loff_t VAR_8, size_t VAR_9)
{
 struct efx_mtd *VAR_10 = VAR_7->mtd.priv;
 const struct efx_spi_device *VAR_11 = VAR_10->spi;
 struct efx_nic *VAR_12 = VAR_10->efx;
 unsigned VAR_13, VAR_14;
 u8 VAR_15[VAR_0];
 u8 VAR_16[VAR_0];
 int VAR_17;

 if (VAR_9 != VAR_11->erase_size)
  return -VAR_2;

 if (VAR_11->erase_command == 0)
  return -VAR_4;

 VAR_17 = FUNC_2(VAR_12, VAR_11);
 if (VAR_17)
  return VAR_17;
 VAR_17 = FUNC_3(VAR_12, VAR_11, VAR_5, -1, ((void*)0), ((void*)0), 0);
 if (VAR_17)
  return VAR_17;
 VAR_17 = FUNC_3(VAR_12, VAR_11, VAR_11->erase_command, VAR_8, ((void*)0),
       ((void*)0), 0);
 if (VAR_17)
  return VAR_17;
 VAR_17 = FUNC_1(VAR_7, 0);


 FUNC_6(VAR_15, 0xff, sizeof(VAR_15));
 for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13 += VAR_14) {
  VAR_14 = FUNC_7(VAR_9 - VAR_13, sizeof(VAR_16));
  VAR_17 = FUNC_4(VAR_12, VAR_11, VAR_8 + VAR_13, VAR_14,
         ((void*)0), VAR_16);
  if (VAR_17)
   return VAR_17;
  if (FUNC_5(VAR_15, VAR_16, VAR_14))
   return -VAR_3;


  FUNC_0();
  if (FUNC_8(VAR_6))
   return -VAR_1;
 }

 return VAR_17;
}
