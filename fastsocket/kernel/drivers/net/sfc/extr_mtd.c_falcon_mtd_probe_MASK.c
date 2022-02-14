
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct efx_spi_device {scalar_t__ size; int erase_size; } ;
struct falcon_nic_data {struct efx_spi_device spi_eeprom; struct efx_spi_device spi_flash; } ;
struct efx_nic {struct falcon_nic_data* nic_data; } ;
struct efx_mtd {char* name; int n_parts; TYPE_2__* part; int * ops; struct efx_spi_device* spi; } ;
struct TYPE_3__ {int erasesize; scalar_t__ size; int flags; int type; } ;
struct TYPE_4__ {char* type_name; scalar_t__ offset; TYPE_1__ mtd; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct efx_nic*,struct efx_mtd*) ;
 scalar_t__ FUNC_2 (struct efx_spi_device*) ;
 int VAR_10 ;
 int FUNC_3 (struct efx_mtd*) ;
 struct efx_mtd* FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_6(struct efx_nic *VAR_11)
{
 struct falcon_nic_data *VAR_12 = VAR_11->nic_data;
 struct efx_spi_device *VAR_13;
 struct efx_mtd *VAR_14;
 int VAR_15 = -VAR_2;

 FUNC_0();

 VAR_13 = &VAR_12->spi_flash;
 if (FUNC_2(VAR_13) && VAR_13->size > VAR_4) {
  VAR_14 = FUNC_4(sizeof(*VAR_14) + sizeof(VAR_14->part[0]),
      VAR_5);
  if (!VAR_14)
   return -VAR_3;

  VAR_14->spi = VAR_13;
  VAR_14->name = "flash";
  VAR_14->ops = &VAR_10;

  VAR_14->n_parts = 1;
  VAR_14->part[0].mtd.type = VAR_8;
  VAR_14->part[0].mtd.flags = VAR_6;
  VAR_14->part[0].mtd.size = VAR_13->size - VAR_4;
  VAR_14->part[0].mtd.erasesize = VAR_13->erase_size;
  VAR_14->part[0].offset = VAR_4;
  VAR_14->part[0].type_name = "sfc_flash_bootrom";

  VAR_15 = FUNC_1(VAR_11, VAR_14);
  if (VAR_15) {
   FUNC_3(VAR_14);
   return VAR_15;
  }
 }

 VAR_13 = &VAR_12->spi_eeprom;
 if (FUNC_2(VAR_13) && VAR_13->size > VAR_1) {
  VAR_14 = FUNC_4(sizeof(*VAR_14) + sizeof(VAR_14->part[0]),
      VAR_5);
  if (!VAR_14)
   return -VAR_3;

  VAR_14->spi = VAR_13;
  VAR_14->name = "EEPROM";
  VAR_14->ops = &VAR_10;

  VAR_14->n_parts = 1;
  VAR_14->part[0].mtd.type = VAR_9;
  VAR_14->part[0].mtd.flags = VAR_7;
  VAR_14->part[0].mtd.size =
   FUNC_5(VAR_13->size, VAR_0) -
   VAR_1;
  VAR_14->part[0].mtd.erasesize = VAR_13->erase_size;
  VAR_14->part[0].offset = VAR_1;
  VAR_14->part[0].type_name = "sfc_bootconfig";

  VAR_15 = FUNC_1(VAR_11, VAR_14);
  if (VAR_15) {
   FUNC_3(VAR_14);
   return VAR_15;
  }
 }

 return VAR_15;
}
