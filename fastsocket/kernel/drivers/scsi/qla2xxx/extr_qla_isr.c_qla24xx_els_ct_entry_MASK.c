
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct sts_entry_24xx {int comp_status; } ;
struct req_que {int dummy; } ;
struct fc_bsg_reply {int dummy; } ;
struct TYPE_16__ {void* payload_len; } ;
struct fc_bsg_job {int reply_len; TYPE_6__ reply_payload; TYPE_5__* reply; TYPE_4__* req; } ;
struct els_sts_entry_24xx {int error_subcode_2; int error_subcode_1; int total_byte_count; } ;
struct TYPE_11__ {struct fc_bsg_job* bsg_job; } ;
struct TYPE_17__ {int type; int (* done ) (int *,TYPE_7__*,int ) ;int handle; TYPE_1__ u; } ;
typedef TYPE_7__ srb_t ;
typedef int scsi_qla_host_t ;
typedef int fw_status ;
struct TYPE_12__ {int status; } ;
struct TYPE_13__ {TYPE_2__ ctels_reply; } ;
struct TYPE_15__ {void* reply_payload_rcv_len; TYPE_3__ reply_data; } ;
struct TYPE_14__ {scalar_t__ sense; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 void* FUNC_0 (int ) ;
 int FUNC_1 (int *,scalar_t__*,int) ;
 int FUNC_2 (scalar_t__,int *,int,char*,char const*,int ,scalar_t__,void*,void*,...) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (scalar_t__,int *,int,int *,int) ;
 int FUNC_4 (int ,int *,int,char*,TYPE_7__*,int) ;
 int VAR_7 ;
 TYPE_7__* FUNC_5 (int *,char const*,struct req_que*,struct sts_entry_24xx*) ;
 int FUNC_6 (int *,TYPE_7__*,int ) ;

__attribute__((used)) static void
FUNC_7(scsi_qla_host_t *VAR_8, struct req_que *VAR_9,
    struct sts_entry_24xx *VAR_10, int VAR_11)
{
 const char VAR_12[] = "ELS_CT_IOCB";
 const char *VAR_13;
 srb_t *VAR_14;
 struct fc_bsg_job *VAR_15;
 uint16_t VAR_16;
 uint32_t VAR_17[3];
 uint8_t* VAR_18;
 int VAR_19;

 VAR_14 = FUNC_5(VAR_8, VAR_12, VAR_9, VAR_10);
 if (!VAR_14)
  return;
 VAR_15 = VAR_14->u.bsg_job;

 VAR_13 = ((void*)0);
 switch (VAR_14->type) {
 case 128:
 case 129:
  VAR_13 = "els";
  break;
 case 130:
  VAR_13 = "ct pass-through";
  break;
 default:
  FUNC_4(VAR_7, VAR_8, 0x503e,
      "Unrecognized SRB: (%p) type=%d.\n", VAR_14, VAR_14->type);
  return;
 }

 VAR_16 = VAR_17[0] = FUNC_0(VAR_10->comp_status);
 VAR_17[1] = FUNC_0(((struct els_sts_entry_24xx*)VAR_10)->error_subcode_1);
 VAR_17[2] = FUNC_0(((struct els_sts_entry_24xx*)VAR_10)->error_subcode_2);




 VAR_15->reply->reply_data.ctels_reply.status = VAR_4;
 VAR_15->reply_len = sizeof(struct fc_bsg_reply) + sizeof(VAR_17);

 if (VAR_16 != VAR_0) {
  if (VAR_16 == VAR_1) {
   VAR_19 = VAR_3 << 16;
   VAR_15->reply->reply_payload_rcv_len =
       FUNC_0(((struct els_sts_entry_24xx*)VAR_10)->total_byte_count);

   FUNC_2(VAR_6, VAR_8, 0x503f,
       "ELS-CT pass-through-%s error hdl=%x comp_status-status=0x%x "
       "error subcode 1=0x%x error subcode 2=0x%x total_byte = 0x%x.\n",
       VAR_13, VAR_14->handle, VAR_16, VAR_17[1], VAR_17[2],
       FUNC_0(((struct els_sts_entry_24xx *)
    VAR_10)->total_byte_count));
   VAR_18 = ((uint8_t*)VAR_15->req->sense) + sizeof(struct fc_bsg_reply);
   FUNC_1( VAR_18, VAR_17, sizeof(VAR_17));
  }
  else {
   FUNC_2(VAR_6, VAR_8, 0x5040,
       "ELS-CT pass-through-%s error hdl=%x comp_status-status=0x%x "
       "error subcode 1=0x%x error subcode 2=0x%x.\n",
       VAR_13, VAR_14->handle, VAR_16,
       FUNC_0(((struct els_sts_entry_24xx *)
    VAR_10)->error_subcode_1),
       FUNC_0(((struct els_sts_entry_24xx *)
        VAR_10)->error_subcode_2));
   VAR_19 = VAR_2 << 16;
   VAR_15->reply->reply_payload_rcv_len = 0;
   VAR_18 = ((uint8_t*)VAR_15->req->sense) + sizeof(struct fc_bsg_reply);
   FUNC_1( VAR_18, VAR_17, sizeof(VAR_17));
  }
  FUNC_3(VAR_6 + VAR_5, VAR_8, 0x5056,
    (uint8_t *)VAR_10, sizeof(*VAR_10));
 }
 else {
  VAR_19 = VAR_3 << 16;
  VAR_15->reply->reply_payload_rcv_len = VAR_15->reply_payload.payload_len;
  VAR_15->reply_len = 0;
 }
 VAR_14->done(VAR_8, VAR_14, 0);
}
