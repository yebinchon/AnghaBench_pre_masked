
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_17__ {int rsp_info_len; int comp_status; } ;
typedef TYPE_6__ sts_entry_t ;
struct req_que {int dummy; } ;
struct fc_bsg_reply {int dummy; } ;
struct TYPE_16__ {void* payload_len; } ;
struct fc_bsg_job {int reply_len; TYPE_5__ reply_payload; TYPE_4__* reply; } ;
struct TYPE_12__ {struct fc_bsg_job* bsg_job; } ;
struct TYPE_18__ {int (* done ) (int *,TYPE_7__*,int) ;TYPE_1__ u; } ;
typedef TYPE_7__ srb_t ;
typedef int scsi_qla_host_t ;
struct TYPE_13__ {int status; } ;
struct TYPE_14__ {TYPE_2__ ctels_reply; } ;
struct TYPE_15__ {void* reply_payload_rcv_len; TYPE_3__ reply_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (scalar_t__,int *,int,int *,int) ;
 int FUNC_2 (int ,int *,int,char*,char const*,scalar_t__,...) ;
 int VAR_7 ;
 TYPE_7__* FUNC_3 (int *,char const*,struct req_que*,TYPE_6__*) ;
 int FUNC_4 (int *,TYPE_7__*,int) ;

__attribute__((used)) static void
FUNC_5(scsi_qla_host_t *VAR_8, struct req_que *VAR_9,
    sts_entry_t *VAR_10, int VAR_11)
{
 const char VAR_12[] = "CT_IOCB";
 const char *VAR_13;
 srb_t *VAR_14;
 struct fc_bsg_job *VAR_15;
 uint16_t VAR_16;
 int VAR_17;

 VAR_14 = FUNC_3(VAR_8, VAR_12, VAR_9, VAR_10);
 if (!VAR_14)
  return;

 VAR_15 = VAR_14->u.bsg_job;

 VAR_13 = "ct pass-through";

 VAR_16 = FUNC_0(VAR_10->comp_status);




 VAR_15->reply->reply_data.ctels_reply.status = VAR_4;
 VAR_15->reply_len = sizeof(struct fc_bsg_reply);

 if (VAR_16 != VAR_0) {
  if (VAR_16 == VAR_1) {
   VAR_17 = VAR_3 << 16;
   VAR_15->reply->reply_payload_rcv_len =
       FUNC_0(((sts_entry_t *)VAR_10)->rsp_info_len);

   FUNC_2(VAR_7, VAR_8, 0x5048,
       "CT pass-through-%s error "
       "comp_status-status=0x%x total_byte = 0x%x.\n",
       VAR_13, VAR_16,
       VAR_15->reply->reply_payload_rcv_len);
  } else {
   FUNC_2(VAR_7, VAR_8, 0x5049,
       "CT pass-through-%s error "
       "comp_status-status=0x%x.\n", VAR_13, VAR_16);
   VAR_17 = VAR_2 << 16;
   VAR_15->reply->reply_payload_rcv_len = 0;
  }
  FUNC_1(VAR_5 + VAR_6, VAR_8, 0x5035,
      (uint8_t *)VAR_10, sizeof(*VAR_10));
 } else {
  VAR_17 = VAR_3 << 16;
  VAR_15->reply->reply_payload_rcv_len =
      VAR_15->reply_payload.payload_len;
  VAR_15->reply_len = 0;
 }
 VAR_14->done(VAR_8, VAR_14, VAR_17);
}
