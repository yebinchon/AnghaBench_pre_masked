
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct qla_hw_data {int* bios_revision; int* efi_revision; int* fcode_revision; int* fw_revision; int flt_region_boot; int flt_region_fw; int* gold_fw_version; int flt_region_gold_fw; TYPE_1__* isp_ops; } ;
struct TYPE_9__ {struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;
struct TYPE_8__ {int (* read_optrom ) (TYPE_2__*,int*,int,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 int VAR_1 ;
 int VAR_2 ;



 void* FUNC_2 (int) ;
 int FUNC_3 (int*,int ,int) ;
 int FUNC_4 (int ,TYPE_2__*,int,char*,int,int,...) ;
 int VAR_3 ;
 int FUNC_5 (int ,TYPE_2__*,int,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (TYPE_2__*,int*,int,int) ;
 int FUNC_7 (TYPE_2__*,int*,int,int) ;

int
FUNC_8(scsi_qla_host_t *VAR_6, void *VAR_7)
{
 int VAR_8 = VAR_2;
 uint32_t VAR_9, VAR_10;
 uint32_t *VAR_11;
 uint8_t *VAR_12;
 uint8_t VAR_13, VAR_14;
 int VAR_15;
 struct qla_hw_data *VAR_16 = VAR_6->hw;

 if (FUNC_1(VAR_16))
  return VAR_8;

 if (!VAR_7)
  return VAR_1;

 FUNC_3(VAR_16->bios_revision, 0, sizeof(VAR_16->bios_revision));
 FUNC_3(VAR_16->efi_revision, 0, sizeof(VAR_16->efi_revision));
 FUNC_3(VAR_16->fcode_revision, 0, sizeof(VAR_16->fcode_revision));
 FUNC_3(VAR_16->fw_revision, 0, sizeof(VAR_16->fw_revision));

 VAR_11 = VAR_7;


 VAR_9 = VAR_16->flt_region_boot << 2;
 VAR_14 = 1;
 do {

  FUNC_6(VAR_6, VAR_11, VAR_9 >> 2, 0x20);
  VAR_12 = VAR_7 + (VAR_9 % 4);
  if (VAR_12[0x0] != 0x55 || VAR_12[0x1] != 0xaa) {

   FUNC_5(VAR_4, VAR_6, 0x0059,
       "No matching ROM signature.\n");
   VAR_8 = VAR_1;
   break;
  }


  VAR_10 = VAR_9 + ((VAR_12[0x19] << 8) | VAR_12[0x18]);

  FUNC_6(VAR_6, VAR_11, VAR_10 >> 2, 0x20);
  VAR_12 = VAR_7 + (VAR_9 % 4);


  if (VAR_12[0x0] != 'P' || VAR_12[0x1] != 'C' ||
      VAR_12[0x2] != 'I' || VAR_12[0x3] != 'R') {

   FUNC_5(VAR_4, VAR_6, 0x005a,
       "PCI data struct not found pcir_adr=%x.\n", VAR_10);
   VAR_8 = VAR_1;
   break;
  }


  VAR_13 = VAR_12[0x14];
  switch (VAR_13) {
  case 130:

   VAR_16->bios_revision[0] = VAR_12[0x12];
   VAR_16->bios_revision[1] = VAR_12[0x13];
   FUNC_4(VAR_3, VAR_6, 0x005b,
       "Read BIOS %d.%d.\n",
       VAR_16->bios_revision[1], VAR_16->bios_revision[0]);
   break;
  case 128:

   VAR_16->fcode_revision[0] = VAR_12[0x12];
   VAR_16->fcode_revision[1] = VAR_12[0x13];
   FUNC_4(VAR_3, VAR_6, 0x005c,
       "Read FCODE %d.%d.\n",
       VAR_16->fcode_revision[1], VAR_16->fcode_revision[0]);
   break;
  case 129:

   VAR_16->efi_revision[0] = VAR_12[0x12];
   VAR_16->efi_revision[1] = VAR_12[0x13];
   FUNC_4(VAR_3, VAR_6, 0x005d,
       "Read EFI %d.%d.\n",
       VAR_16->efi_revision[1], VAR_16->efi_revision[0]);
   break;
  default:
   FUNC_5(VAR_5, VAR_6, 0x005e,
       "Unrecognized code type %x at pcids %x.\n",
       VAR_13, VAR_10);
   break;
  }

  VAR_14 = VAR_12[0x15] & VAR_0;


  VAR_9 += ((VAR_12[0x11] << 8) | VAR_12[0x10]) * 512;
 } while (!VAR_14);


 FUNC_3(VAR_16->fw_revision, 0, sizeof(VAR_16->fw_revision));
 VAR_11 = VAR_7;

 FUNC_6(VAR_6, VAR_11, VAR_16->flt_region_fw + 4, 4);
 for (VAR_15 = 0; VAR_15 < 4; VAR_15++)
  VAR_11[VAR_15] = FUNC_2(VAR_11[VAR_15]);

 if ((VAR_11[0] == 0xffffffff && VAR_11[1] == 0xffffffff &&
     VAR_11[2] == 0xffffffff && VAR_11[3] == 0xffffffff) ||
     (VAR_11[0] == 0 && VAR_11[1] == 0 && VAR_11[2] == 0 &&
     VAR_11[3] == 0)) {
  FUNC_5(VAR_5, VAR_6, 0x005f,
      "Unrecognized fw revision at %x.\n",
      VAR_16->flt_region_fw * 4);
 } else {
  VAR_16->fw_revision[0] = VAR_11[0];
  VAR_16->fw_revision[1] = VAR_11[1];
  VAR_16->fw_revision[2] = VAR_11[2];
  VAR_16->fw_revision[3] = VAR_11[3];
  FUNC_4(VAR_3, VAR_6, 0x0060,
      "Firmware revision %d.%d.%d.%d.\n",
      VAR_16->fw_revision[0], VAR_16->fw_revision[1],
      VAR_16->fw_revision[2], VAR_16->fw_revision[3]);
 }


 if (!FUNC_0(VAR_16)) {

  return VAR_8;
 }

 FUNC_3(VAR_16->gold_fw_version, 0, sizeof(VAR_16->gold_fw_version));
 VAR_11 = VAR_7;
 VAR_16->isp_ops->read_optrom(VAR_6, (uint8_t *)VAR_11,
     VAR_16->flt_region_gold_fw << 2, 32);

 if (VAR_11[4] == 0xFFFFFFFF && VAR_11[5] == 0xFFFFFFFF &&
     VAR_11[6] == 0xFFFFFFFF && VAR_11[7] == 0xFFFFFFFF) {
  FUNC_5(VAR_5, VAR_6, 0x0056,
      "Unrecognized golden fw at 0x%x.\n",
      VAR_16->flt_region_gold_fw * 4);
  return VAR_8;
 }

 for (VAR_15 = 4; VAR_15 < 8; VAR_15++)
  VAR_16->gold_fw_version[VAR_15-4] = FUNC_2(VAR_11[VAR_15]);

 return VAR_8;
}
