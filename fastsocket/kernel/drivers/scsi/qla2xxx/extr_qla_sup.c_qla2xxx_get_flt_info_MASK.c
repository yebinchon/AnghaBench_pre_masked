
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
typedef scalar_t__ uint16_t ;
struct req_que {scalar_t__ ring; } ;
struct TYPE_8__ {scalar_t__ port0; } ;
struct qla_hw_data {size_t flt_region_fcp_prio; size_t flt_region_flt; size_t flt_region_fw; size_t flt_region_boot; size_t flt_region_vpd_nvram; size_t flt_region_vpd; size_t flt_region_nvram; size_t flt_region_fdt; size_t flt_region_npiv_conf; size_t flt_region_gold_fw; size_t flt_region_bootload; TYPE_1__ flags; TYPE_2__* isp_ops; struct req_que** req_q_map; } ;
struct qla_flt_region {int code; int size; int end; int start; } ;
struct qla_flt_header {scalar_t__ version; scalar_t__ length; scalar_t__ checksum; } ;
struct TYPE_10__ {struct qla_hw_data* hw; } ;
typedef TYPE_3__ scsi_qla_host_t ;
struct TYPE_9__ {int (* read_optrom ) (TYPE_3__*,int *,size_t,int ) ;} ;


 size_t const VAR_0 ;
 size_t const VAR_1 ;
 size_t const VAR_2 ;
 size_t const VAR_3 ;
 size_t const VAR_4 ;
 size_t const VAR_5 ;
 size_t const VAR_6 ;
 size_t const VAR_7 ;
 size_t const VAR_8 ;
 size_t const VAR_9 ;
 size_t const VAR_10 ;
 size_t const VAR_11 ;
 size_t const VAR_12 ;
 size_t const VAR_13 ;
 size_t const VAR_14 ;
 size_t const VAR_15 ;
 size_t const VAR_16 ;
 size_t const VAR_17 ;
 size_t const VAR_18 ;
 size_t const VAR_19 ;
 size_t const VAR_20 ;
 size_t const VAR_21 ;
 size_t const VAR_22 ;
 int FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 int FUNC_2 (struct qla_hw_data*) ;
 scalar_t__ FUNC_3 (struct qla_hw_data*) ;
 int FUNC_4 (struct qla_hw_data*) ;
 int VAR_23 ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,TYPE_3__*,int,char*,...) ;
 int VAR_24 ;
 int FUNC_9 (int ,TYPE_3__*,int,char*,int,int,int) ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_10 (TYPE_3__*,int *,size_t,int ) ;

__attribute__((used)) static void
FUNC_11(scsi_qla_host_t *VAR_27, uint32_t VAR_28)
{
 const char *VAR_29, *VAR_30[] = { "DEF", "FLT" };
 const uint32_t VAR_31[] =
  { VAR_17, VAR_17, VAR_18 };
 const uint32_t VAR_32[] =
  { VAR_0, VAR_0, VAR_1 };
 const uint32_t VAR_33[] =
  { VAR_21, VAR_21, VAR_22 };
 const uint32_t VAR_34[] =
  { 0, 0, VAR_19 };
 const uint32_t VAR_35[] =
  { 0, 0, VAR_20 };
 const uint32_t VAR_36[] =
  { 0, 0, VAR_15 };
 const uint32_t VAR_37[] =
  { 0, 0, VAR_16 };
 const uint32_t VAR_38[] =
  { VAR_7, VAR_6,
   VAR_8 };
 const uint32_t VAR_39[] =
  { VAR_10, VAR_9,
   VAR_11 };
 const uint32_t VAR_40[] =
  { VAR_13, VAR_12,
   VAR_14 };
 const uint32_t VAR_41[] =
  { VAR_2, VAR_3,
   0 };
 const uint32_t VAR_42[] =
  { VAR_4, VAR_5,
   0 };
 uint32_t VAR_43;
 uint16_t *VAR_44;
 uint16_t VAR_45, VAR_46;
 uint32_t VAR_47;
 struct qla_flt_header *VAR_48;
 struct qla_flt_region *VAR_49;
 struct qla_hw_data *VAR_50 = VAR_27->hw;
 struct req_que *VAR_51 = VAR_50->req_q_map[0];

 VAR_43 = 0;
 if (FUNC_1(VAR_50))
  VAR_43 = 1;
 else if (FUNC_3(VAR_50))
  VAR_43 = 2;




 VAR_50->flt_region_fcp_prio = VAR_50->flags.port0 ?
     VAR_41[VAR_43] : VAR_42[VAR_43];

 VAR_50->flt_region_flt = VAR_28;
 VAR_44 = (uint16_t *)VAR_51->ring;
 VAR_48 = (struct qla_flt_header *)VAR_51->ring;
 VAR_49 = (struct qla_flt_region *)&VAR_48[1];
 VAR_50->isp_ops->read_optrom(VAR_27, (uint8_t *)VAR_51->ring,
     VAR_28 << 2, VAR_23);
 if (*VAR_44 == FUNC_5(0xffff))
  goto no_flash_data;
 if (VAR_48->version != FUNC_5(1)) {
  FUNC_9(VAR_26, VAR_27, 0x0047,
      "Unsupported FLT detected: version=0x%x length=0x%x checksum=0x%x.\n",
      FUNC_6(VAR_48->version), FUNC_6(VAR_48->length),
      FUNC_6(VAR_48->checksum));
  goto no_flash_data;
 }

 VAR_45 = (sizeof(struct qla_flt_header) + FUNC_6(VAR_48->length)) >> 1;
 for (VAR_46 = 0; VAR_45; VAR_45--)
  VAR_46 += FUNC_6(*VAR_44++);
 if (VAR_46) {
  FUNC_9(VAR_25, VAR_27, 0x0048,
      "Inconsistent FLT detected: version=0x%x length=0x%x checksum=0x%x.\n",
      FUNC_6(VAR_48->version), FUNC_6(VAR_48->length),
      FUNC_6(VAR_48->checksum));
  goto no_flash_data;
 }

 VAR_29 = VAR_30[1];
 VAR_45 = FUNC_6(VAR_48->length) / sizeof(struct qla_flt_region);
 for ( ; VAR_45; VAR_45--, VAR_49++) {

  VAR_47 = FUNC_7(VAR_49->start) >> 2;
  FUNC_8(VAR_24, VAR_27, 0x0049,
      "FLT[%02x]: start=0x%x "
      "end=0x%x size=0x%x.\n", FUNC_7(VAR_49->code),
      VAR_47, FUNC_7(VAR_49->end) >> 2,
      FUNC_7(VAR_49->size));

  switch (FUNC_7(VAR_49->code) & 0xff) {
  case 144:
   if (!FUNC_2(VAR_50))
    break;
   VAR_50->flt_region_fw = VAR_47;
   break;
  case 138:
   if (FUNC_2(VAR_50))
    break;
   VAR_50->flt_region_fw = VAR_47;
   break;
  case 146:
   VAR_50->flt_region_boot = VAR_47;
   break;
  case 130:
   if (FUNC_2(VAR_50))
    break;
   VAR_50->flt_region_vpd_nvram = VAR_47;
   if (FUNC_4(VAR_50))
    break;
   if (VAR_50->flags.port0)
    VAR_50->flt_region_vpd = VAR_47;
   break;
  case 129:
   if (FUNC_4(VAR_50) || FUNC_2(VAR_50))
    break;
   if (!VAR_50->flags.port0)
    VAR_50->flt_region_vpd = VAR_47;
   break;
  case 132:
   if (FUNC_2(VAR_50))
    break;
   if (VAR_50->flags.port0)
    VAR_50->flt_region_nvram = VAR_47;
   break;
  case 131:
   if (FUNC_2(VAR_50))
    break;
   if (!VAR_50->flags.port0)
    VAR_50->flt_region_nvram = VAR_47;
   break;
  case 139:
   VAR_50->flt_region_fdt = VAR_47;
   break;
  case 134:
   if (VAR_50->flags.port0)
    VAR_50->flt_region_npiv_conf = VAR_47;
   break;
  case 133:
   if (!VAR_50->flags.port0)
    VAR_50->flt_region_npiv_conf = VAR_47;
   break;
  case 136:
   VAR_50->flt_region_gold_fw = VAR_47;
   break;
  case 141:
   if (VAR_50->flags.port0)
    VAR_50->flt_region_fcp_prio = VAR_47;
   break;
  case 140:
   if (!VAR_50->flags.port0)
    VAR_50->flt_region_fcp_prio = VAR_47;
   break;
  case 145:
   VAR_50->flt_region_boot = VAR_47;
   break;
  case 137:
   VAR_50->flt_region_fw = VAR_47;
   break;
  case 135:
   VAR_50->flt_region_gold_fw = VAR_47;
   break;
  case 147:
   VAR_50->flt_region_bootload = VAR_47;
   break;
  case 128:
   if (FUNC_0(VAR_50))
    VAR_50->flt_region_vpd = VAR_47;
   break;
  case 143:
   if (!FUNC_2(VAR_50))
    break;
   if (VAR_50->flags.port0)
    VAR_50->flt_region_nvram = VAR_47;
   break;
  case 142:
   if (!FUNC_2(VAR_50))
    break;
   if (!VAR_50->flags.port0)
    VAR_50->flt_region_nvram = VAR_47;
   break;
  }
 }
 goto done;

no_flash_data:

 VAR_29 = VAR_30[0];
 VAR_50->flt_region_fw = VAR_31[VAR_43];
 VAR_50->flt_region_boot = VAR_32[VAR_43];
 VAR_50->flt_region_vpd_nvram = VAR_33[VAR_43];
 VAR_50->flt_region_vpd = VAR_50->flags.port0 ?
     VAR_34[VAR_43] : VAR_35[VAR_43];
 VAR_50->flt_region_nvram = VAR_50->flags.port0 ?
     VAR_36[VAR_43] : VAR_37[VAR_43];
 VAR_50->flt_region_fdt = VAR_38[VAR_43];
 VAR_50->flt_region_npiv_conf = VAR_50->flags.port0 ?
     VAR_39[VAR_43] : VAR_40[VAR_43];
done:
 FUNC_8(VAR_24, VAR_27, 0x004a,
     "FLT[%s]: boot=0x%x fw=0x%x vpd_nvram=0x%x vpd=0x%x nvram=0x%x "
     "fdt=0x%x flt=0x%x npiv=0x%x fcp_prif_cfg=0x%x.\n",
     VAR_29, VAR_50->flt_region_boot, VAR_50->flt_region_fw,
     VAR_50->flt_region_vpd_nvram, VAR_50->flt_region_vpd, VAR_50->flt_region_nvram,
     VAR_50->flt_region_fdt, VAR_50->flt_region_flt, VAR_50->flt_region_npiv_conf,
     VAR_50->flt_region_fcp_prio);
}
