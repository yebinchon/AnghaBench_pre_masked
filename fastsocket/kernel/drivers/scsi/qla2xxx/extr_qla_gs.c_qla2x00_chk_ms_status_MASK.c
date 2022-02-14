
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct qla_hw_data {int dummy; } ;
struct TYPE_10__ {int response; } ;
struct ct_sns_rsp {TYPE_1__ header; } ;
struct ct_rsp_hdr {int dummy; } ;
struct ct_entry_24xx {int comp_status; } ;
struct TYPE_11__ {int al_pa; int area; int domain; } ;
struct TYPE_12__ {TYPE_2__ b; } ;
struct TYPE_13__ {TYPE_3__ d_id; struct qla_hw_data* hw; } ;
typedef TYPE_4__ scsi_qla_host_t ;
struct TYPE_14__ {scalar_t__ entry_status; int status; } ;
typedef TYPE_5__ ms_iocb_entry_t ;





 int VAR_0 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,TYPE_4__*,int,char*,char const*,int,int ,int ,...) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (scalar_t__,TYPE_4__*,int,int *,int) ;

__attribute__((used)) static int
FUNC_5(scsi_qla_host_t *VAR_6, ms_iocb_entry_t *VAR_7,
    struct ct_sns_rsp *VAR_8, const char *VAR_9)
{
 int VAR_10;
 uint16_t VAR_11;
 struct qla_hw_data *VAR_12 = VAR_6->hw;

 VAR_10 = VAR_1;
 if (VAR_7->entry_status != 0) {
  FUNC_3(VAR_5, VAR_6, 0x2031,
      "%s failed, error status (%x) on port_id: %02x%02x%02x.\n",
      VAR_9, VAR_7->entry_status, VAR_6->d_id.b.domain,
      VAR_6->d_id.b.area, VAR_6->d_id.b.al_pa);
 } else {
  if (FUNC_0(VAR_12))
   VAR_11 = FUNC_2(
       ((struct ct_entry_24xx *)VAR_7)->comp_status);
  else
   VAR_11 = FUNC_2(VAR_7->status);
  switch (VAR_11) {
  case 130:
  case 128:
  case 129:
   if (VAR_8->header.response !=
       FUNC_1(VAR_0)) {
    FUNC_3(VAR_5 + VAR_4, VAR_6, 0x2077,
        "%s failed rejected request on port_id: "
        "%02x%02x%02x.\n", VAR_9,
        VAR_6->d_id.b.domain, VAR_6->d_id.b.area,
        VAR_6->d_id.b.al_pa);
    FUNC_4(VAR_5 + VAR_4, VAR_6,
        0x2078, (uint8_t *)&VAR_8->header,
        sizeof(struct ct_rsp_hdr));
    VAR_10 = VAR_2;
   } else
    VAR_10 = VAR_3;
   break;
  default:
   FUNC_3(VAR_5, VAR_6, 0x2033,
       "%s failed, completion status (%x) on port_id: "
       "%02x%02x%02x.\n", VAR_9, VAR_11,
       VAR_6->d_id.b.domain, VAR_6->d_id.b.area,
       VAR_6->d_id.b.al_pa);
   break;
  }
 }
 return VAR_10;
}
