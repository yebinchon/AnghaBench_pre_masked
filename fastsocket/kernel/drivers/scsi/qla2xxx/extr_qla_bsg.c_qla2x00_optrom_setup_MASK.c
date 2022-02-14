
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct qla_hw_data {int optrom_size; scalar_t__ optrom_state; int optrom_region_start; int flt_region_boot; int flt_region_fw; scalar_t__ optrom_region_size; int optrom_buffer; int pdev; } ;
struct TYPE_14__ {scalar_t__ payload_len; } ;
struct TYPE_13__ {scalar_t__ payload_len; } ;
struct fc_bsg_job {TYPE_5__ reply_payload; TYPE_4__ request_payload; TYPE_3__* request; } ;
struct TYPE_15__ {struct qla_hw_data* hw; } ;
typedef TYPE_6__ scsi_qla_host_t ;
struct TYPE_10__ {int* vendor_cmd; } ;
struct TYPE_11__ {TYPE_1__ h_vendor; } ;
struct TYPE_12__ {TYPE_2__ rqst_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 scalar_t__ FUNC_2 (struct qla_hw_data*) ;
 scalar_t__ FUNC_3 (struct qla_hw_data*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,TYPE_6__*,int,char*,scalar_t__) ;
 int VAR_7 ;
 int FUNC_7 (int ,TYPE_6__*,int,char*,scalar_t__,...) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__) ;

__attribute__((used)) static int
FUNC_10(struct fc_bsg_job *VAR_10, scsi_qla_host_t *VAR_11,
 uint8_t VAR_12)
{
 uint32_t VAR_13 = 0;
 int VAR_14 = 0;
 struct qla_hw_data *VAR_15 = VAR_11->hw;

 if (FUNC_8(FUNC_5(VAR_15->pdev)))
  return -VAR_1;

 VAR_13 = VAR_10->request->rqst_data.h_vendor.vendor_cmd[1];
 if (VAR_13 > VAR_15->optrom_size) {
  FUNC_7(VAR_9, VAR_11, 0x7055,
      "start %d > optrom_size %d.\n", VAR_13, VAR_15->optrom_size);
  return -VAR_1;
 }

 if (VAR_15->optrom_state != VAR_5) {
  FUNC_7(VAR_8, VAR_11, 0x7056,
      "optrom_state %d.\n", VAR_15->optrom_state);
  return -VAR_0;
 }

 VAR_15->optrom_region_start = VAR_13;
 FUNC_6(VAR_7, VAR_11, 0x7057, "is_update=%d.\n", VAR_12);
 if (VAR_12) {
  if (VAR_15->optrom_size == VAR_3 && VAR_13 == 0)
   VAR_14 = 1;
  else if (VAR_13 == (VAR_15->flt_region_boot * 4) ||
      VAR_13 == (VAR_15->flt_region_fw * 4))
   VAR_14 = 1;
  else if (FUNC_2(VAR_15) || FUNC_3(VAR_15) ||
      FUNC_0(VAR_15) || FUNC_1(VAR_15))
   VAR_14 = 1;
  if (!VAR_14) {
   FUNC_7(VAR_9, VAR_11, 0x7058,
       "Invalid start region 0x%x/0x%x.\n", VAR_13,
       VAR_10->request_payload.payload_len);
   return -VAR_1;
  }

  VAR_15->optrom_region_size = VAR_13 +
      VAR_10->request_payload.payload_len > VAR_15->optrom_size ?
      VAR_15->optrom_size - VAR_13 :
      VAR_10->request_payload.payload_len;
  VAR_15->optrom_state = VAR_6;
 } else {
  VAR_15->optrom_region_size = VAR_13 +
      VAR_10->reply_payload.payload_len > VAR_15->optrom_size ?
      VAR_15->optrom_size - VAR_13 :
      VAR_10->reply_payload.payload_len;
  VAR_15->optrom_state = VAR_4;
 }

 VAR_15->optrom_buffer = FUNC_9(VAR_15->optrom_region_size);
 if (!VAR_15->optrom_buffer) {
  FUNC_7(VAR_9, VAR_11, 0x7059,
      "Read: Unable to allocate memory for optrom retrieval "
      "(%x)\n", VAR_15->optrom_region_size);

  VAR_15->optrom_state = VAR_5;
  return -VAR_2;
 }

 FUNC_4(VAR_15->optrom_buffer, 0, VAR_15->optrom_region_size);
 return 0;
}
