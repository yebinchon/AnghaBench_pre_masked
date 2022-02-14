
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct qla_hw_data {int* bios_revision; int* efi_revision; int* fcode_revision; int* fw_revision; int flt_region_fw; int pio_address; } ;
struct TYPE_6__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (scalar_t__,TYPE_1__*,int,char*,...) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (scalar_t__,TYPE_1__*,int,int*,int) ;
 int FUNC_4 (int ,TYPE_1__*,int,char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct qla_hw_data*) ;
 int FUNC_6 (struct qla_hw_data*) ;
 int FUNC_7 (struct qla_hw_data*,int) ;
 int FUNC_8 (struct qla_hw_data*,int) ;
 int FUNC_9 (struct qla_hw_data*,int*,int,int) ;

int
FUNC_10(scsi_qla_host_t *VAR_7, void *VAR_8)
{
 int VAR_9 = VAR_2;
 uint8_t VAR_10, VAR_11;
 uint32_t VAR_12, VAR_13;
 uint8_t *VAR_14;
 uint16_t *VAR_15;
 struct qla_hw_data *VAR_16 = VAR_7->hw;

 if (!VAR_16->pio_address || !VAR_8)
  return VAR_1;

 FUNC_1(VAR_16->bios_revision, 0, sizeof(VAR_16->bios_revision));
 FUNC_1(VAR_16->efi_revision, 0, sizeof(VAR_16->efi_revision));
 FUNC_1(VAR_16->fcode_revision, 0, sizeof(VAR_16->fcode_revision));
 FUNC_1(VAR_16->fw_revision, 0, sizeof(VAR_16->fw_revision));

 FUNC_6(VAR_16);


 VAR_12 = 0;
 VAR_11 = 1;
 do {

  if (FUNC_8(VAR_16, VAR_12) != 0x55 ||
      FUNC_8(VAR_16, VAR_12 + 0x01) != 0xaa) {

   FUNC_4(VAR_5, VAR_7, 0x0050,
       "No matching ROM signature.\n");
   VAR_9 = VAR_1;
   break;
  }


  VAR_13 = VAR_12 +
      ((FUNC_8(VAR_16, VAR_12 + 0x19) << 8) |
   FUNC_8(VAR_16, VAR_12 + 0x18));


  if (FUNC_8(VAR_16, VAR_13) != 'P' ||
      FUNC_8(VAR_16, VAR_13 + 0x1) != 'C' ||
      FUNC_8(VAR_16, VAR_13 + 0x2) != 'I' ||
      FUNC_8(VAR_16, VAR_13 + 0x3) != 'R') {

   FUNC_4(VAR_5, VAR_7, 0x0051,
       "PCI data struct not found pcir_adr=%x.\n", VAR_13);
   VAR_9 = VAR_1;
   break;
  }


  VAR_10 = FUNC_8(VAR_16, VAR_13 + 0x14);
  switch (VAR_10) {
  case 130:

   VAR_16->bios_revision[0] =
       FUNC_8(VAR_16, VAR_13 + 0x12);
   VAR_16->bios_revision[1] =
       FUNC_8(VAR_16, VAR_13 + 0x13);
   FUNC_2(VAR_4, VAR_7, 0x0052,
       "Read BIOS %d.%d.\n",
       VAR_16->bios_revision[1], VAR_16->bios_revision[0]);
   break;
  case 128:


   FUNC_7(VAR_16, VAR_13);
   break;
  case 129:

   VAR_16->efi_revision[0] =
       FUNC_8(VAR_16, VAR_13 + 0x12);
   VAR_16->efi_revision[1] =
       FUNC_8(VAR_16, VAR_13 + 0x13);
   FUNC_2(VAR_4, VAR_7, 0x0053,
       "Read EFI %d.%d.\n",
       VAR_16->efi_revision[1], VAR_16->efi_revision[0]);
   break;
  default:
   FUNC_4(VAR_6, VAR_7, 0x0054,
       "Unrecognized code type %x at pcids %x.\n",
       VAR_10, VAR_13);
   break;
  }

  VAR_11 = FUNC_8(VAR_16, VAR_13 + 0x15) & VAR_0;


  VAR_12 += ((FUNC_8(VAR_16, VAR_13 + 0x11) << 8) |
      FUNC_8(VAR_16, VAR_13 + 0x10)) * 512;
 } while (!VAR_11);

 if (FUNC_0(VAR_16)) {

  FUNC_1(VAR_16->fw_revision, 0, sizeof(VAR_16->fw_revision));
  VAR_14 = VAR_8;
  FUNC_1(VAR_14, 0, 8);
  VAR_15 = (uint16_t *)VAR_14;

  FUNC_9(VAR_16, VAR_14, VAR_16->flt_region_fw * 4 + 10,
      8);
  FUNC_2(VAR_4 + VAR_3, VAR_7, 0x010a,
      "Dumping fw "
      "ver from flash:.\n");
  FUNC_3(VAR_4 + VAR_3, VAR_7, 0x010b,
      (uint8_t *)VAR_14, 8);

  if ((VAR_15[0] == 0xffff && VAR_15[1] == 0xffff &&
      VAR_15[2] == 0xffff && VAR_15[3] == 0xffff) ||
      (VAR_15[0] == 0 && VAR_15[1] == 0 && VAR_15[2] == 0 &&
      VAR_15[3] == 0)) {
   FUNC_4(VAR_6, VAR_7, 0x0057,
       "Unrecognized fw revision at %x.\n",
       VAR_16->flt_region_fw * 4);
  } else {

   VAR_16->fw_revision[0] = VAR_14[0] << 16 | VAR_14[1];
   VAR_16->fw_revision[1] = VAR_14[2] << 16 | VAR_14[3];
   VAR_16->fw_revision[2] = VAR_14[4] << 16 | VAR_14[5];
   FUNC_2(VAR_4, VAR_7, 0x0058,
       "FW Version: "
       "%d.%d.%d.\n", VAR_16->fw_revision[0],
       VAR_16->fw_revision[1], VAR_16->fw_revision[2]);
  }
 }

 FUNC_5(VAR_16);

 return VAR_9;
}
