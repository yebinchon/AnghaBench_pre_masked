
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vid ;
typedef int uint8_t ;
typedef int uint16_t ;
struct qla_npiv_header {scalar_t__ version; scalar_t__ entries; scalar_t__ checksum; } ;
struct qla_npiv_entry {scalar_t__ flags; scalar_t__ vf_id; int f_qos; int q_qos; int node_name; int port_name; } ;
struct TYPE_9__ {scalar_t__ nic_core_reset_hdlr_active; } ;
struct qla_hw_data {int flt_region_npiv_conf; int * npiv_info; TYPE_2__* isp_ops; TYPE_1__ flags; } ;
struct fc_vport_identifiers {int disable; void* node_name; void* port_name; int vport_type; int roles; } ;
struct fc_vport {int dummy; } ;
struct TYPE_11__ {int host; struct qla_hw_data* hw; } ;
typedef TYPE_3__ scsi_qla_host_t ;
struct TYPE_10__ {int (* read_optrom ) (TYPE_3__*,int *,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct qla_hw_data*) ;
 int FUNC_1 (struct qla_hw_data*) ;
 int FUNC_2 (struct qla_hw_data*) ;
 int FUNC_3 (struct qla_hw_data*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (int) ;
 struct fc_vport* FUNC_5 (int ,int ,struct fc_vport_identifiers*) ;
 int FUNC_6 (void*) ;
 void* FUNC_7 (int,int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *,struct qla_npiv_entry*,int) ;
 int FUNC_10 (struct fc_vport_identifiers*,int ,int) ;
 int FUNC_11 (int ,TYPE_3__*,int,char*,int,unsigned long long,unsigned long long,...) ;
 int VAR_6 ;
 int FUNC_12 (int ,TYPE_3__*,int,char*,...) ;
 int VAR_7 ;
 int FUNC_13 (TYPE_3__*,int *,int,int) ;
 int FUNC_14 (TYPE_3__*,int *,int,int) ;
 void* FUNC_15 (int ) ;

void
FUNC_16(scsi_qla_host_t *VAR_8)
{

 void *VAR_9;
 uint16_t *VAR_10;
 uint16_t VAR_11, VAR_12;
 int VAR_13;
 struct qla_npiv_header VAR_14;
 struct qla_npiv_entry *VAR_15;
 struct qla_hw_data *VAR_16 = VAR_8->hw;

 if (!FUNC_2(VAR_16) && !FUNC_3(VAR_16) &&
     !FUNC_0(VAR_16) && !FUNC_1(VAR_16))
  return;

 if (VAR_16->flags.nic_core_reset_hdlr_active)
  return;

 VAR_16->isp_ops->read_optrom(VAR_8, (uint8_t *)&VAR_14,
     VAR_16->flt_region_npiv_conf << 2, sizeof(struct qla_npiv_header));
 if (VAR_14.version == FUNC_4(0xffff))
  return;
 if (VAR_14.version != FUNC_4(1)) {
  FUNC_11(VAR_6, VAR_8, 0x7090,
      "Unsupported NPIV-Config "
      "detected: version=0x%x entries=0x%x checksum=0x%x.\n",
      FUNC_8(VAR_14.version), FUNC_8(VAR_14.entries),
      FUNC_8(VAR_14.checksum));
  return;
 }

 VAR_9 = FUNC_7((16*1024), VAR_3);
 if (!VAR_9) {
  FUNC_12(VAR_7, VAR_8, 0x7091,
      "Unable to allocate memory for data.\n");
  return;
 }

 VAR_16->isp_ops->read_optrom(VAR_8, (uint8_t *)VAR_9,
     VAR_16->flt_region_npiv_conf << 2, (16*1024));

 VAR_11 = (sizeof(struct qla_npiv_header) + FUNC_8(VAR_14.entries) *
     sizeof(struct qla_npiv_entry)) >> 1;
 for (VAR_10 = VAR_9, VAR_12 = 0; VAR_11; VAR_11--)
  VAR_12 += FUNC_8(*VAR_10++);
 if (VAR_12) {
  FUNC_11(VAR_6, VAR_8, 0x7092,
      "Inconsistent NPIV-Config "
      "detected: version=0x%x entries=0x%x checksum=0x%x.\n",
      FUNC_8(VAR_14.version), FUNC_8(VAR_14.entries),
      FUNC_8(VAR_14.checksum));
  goto done;
 }

 VAR_15 = VAR_9 + sizeof(struct qla_npiv_header);
 VAR_11 = FUNC_8(VAR_14.entries);
 for (VAR_13 = 0; VAR_11; VAR_11--, VAR_15++, VAR_13++) {
  uint16_t VAR_17;
  struct fc_vport_identifiers VAR_18;
  struct fc_vport *VAR_19;

  FUNC_9(&VAR_16->npiv_info[VAR_13], VAR_15, sizeof(struct qla_npiv_entry));

  VAR_17 = FUNC_8(VAR_15->flags);
  if (VAR_17 == 0xffff)
   continue;
  if ((VAR_17 & VAR_0) == 0)
   continue;

  FUNC_10(&VAR_18, 0, sizeof(VAR_18));
  VAR_18.roles = VAR_2;
  VAR_18.vport_type = VAR_1;
  VAR_18.disable = 0;
  VAR_18.port_name = FUNC_15(VAR_15->port_name);
  VAR_18.node_name = FUNC_15(VAR_15->node_name);

  FUNC_11(VAR_6, VAR_8, 0x7093,
      "NPIV[%02x]: wwpn=%llx "
      "wwnn=%llx vf_id=0x%x Q_qos=0x%x F_qos=0x%x.\n", VAR_11,
      (unsigned long long)VAR_18.port_name,
      (unsigned long long)VAR_18.node_name,
      FUNC_8(VAR_15->vf_id),
      VAR_15->q_qos, VAR_15->f_qos);

  if (VAR_13 < VAR_5) {
   VAR_19 = FUNC_5(VAR_8->host, 0, &VAR_18);
   if (!VAR_19)
    FUNC_12(VAR_7, VAR_8, 0x7094,
        "NPIV-Config Failed to create vport [%02x]: "
        "wwpn=%llx wwnn=%llx.\n", VAR_11,
        (unsigned long long)VAR_18.port_name,
        (unsigned long long)VAR_18.node_name);
  }
 }
done:
 FUNC_6(VAR_9);
}
