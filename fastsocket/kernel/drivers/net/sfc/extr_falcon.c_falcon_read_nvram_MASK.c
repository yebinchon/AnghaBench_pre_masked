
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct falcon_nvconfig {int board_magic_num; int board_struct_ver; } ;
struct efx_spi_device {int dummy; } ;
struct falcon_nic_data {struct efx_spi_device spi_flash; int spi_lock; struct efx_spi_device spi_eeprom; } ;
struct efx_nic {int net_dev; struct falcon_nic_data* nic_data; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct efx_spi_device*) ;
 int FUNC_1 (struct efx_nic*,struct efx_spi_device*,int ,int,int *,void*) ;
 int VAR_7 ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct falcon_nvconfig*,struct falcon_nvconfig*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct efx_nic*,int ,int ,char*,...) ;

__attribute__((used)) static int
FUNC_9(struct efx_nic *VAR_8, struct falcon_nvconfig *VAR_9)
{
 struct falcon_nic_data *VAR_10 = VAR_8->nic_data;
 struct falcon_nvconfig *VAR_11;
 struct efx_spi_device *VAR_12;
 void *VAR_13;
 int VAR_14, VAR_15, VAR_16;
 __le16 *VAR_17, *VAR_18;
 u32 VAR_19;

 if (FUNC_0(&VAR_10->spi_flash))
  VAR_12 = &VAR_10->spi_flash;
 else if (FUNC_0(&VAR_10->spi_eeprom))
  VAR_12 = &VAR_10->spi_eeprom;
 else
  return -VAR_0;

 VAR_13 = FUNC_3(VAR_4, VAR_6);
 if (!VAR_13)
  return -VAR_2;
 VAR_11 = VAR_13 + VAR_5;

 FUNC_6(&VAR_10->spi_lock);
 VAR_14 = FUNC_1(VAR_8, VAR_12, 0, VAR_4, ((void*)0), VAR_13);
 FUNC_7(&VAR_10->spi_lock);
 if (VAR_14) {
  FUNC_8(VAR_8, VAR_7, VAR_8->net_dev, "Failed to read %s\n",
     FUNC_0(&VAR_10->spi_flash) ?
     "flash" : "EEPROM");
  VAR_14 = -VAR_1;
  goto out;
 }

 VAR_15 = FUNC_4(VAR_11->board_magic_num);
 VAR_16 = FUNC_4(VAR_11->board_struct_ver);

 VAR_14 = -VAR_0;
 if (VAR_15 != VAR_3) {
  FUNC_8(VAR_8, VAR_7, VAR_8->net_dev,
     "NVRAM bad magic 0x%x\n", VAR_15);
  goto out;
 }
 if (VAR_16 < 2) {
  FUNC_8(VAR_8, VAR_7, VAR_8->net_dev,
     "NVRAM has ancient version 0x%x\n", VAR_16);
  goto out;
 } else if (VAR_16 < 4) {
  VAR_17 = &VAR_11->board_magic_num;
  VAR_18 = (__le16 *) (VAR_11 + 1);
 } else {
  VAR_17 = VAR_13;
  VAR_18 = VAR_13 + VAR_4;
 }
 for (VAR_19 = 0; VAR_17 < VAR_18; ++VAR_17)
  VAR_19 += FUNC_4(*VAR_17);

 if (~VAR_19 & 0xffff) {
  FUNC_8(VAR_8, VAR_7, VAR_8->net_dev,
     "NVRAM has incorrect checksum\n");
  goto out;
 }

 VAR_14 = 0;
 if (VAR_9)
  FUNC_5(VAR_9, VAR_11, sizeof(*VAR_11));

 out:
 FUNC_2(VAR_13);
 return VAR_14;
}
