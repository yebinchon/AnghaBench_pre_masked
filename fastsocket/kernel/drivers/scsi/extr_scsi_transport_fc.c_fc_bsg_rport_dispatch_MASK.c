
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct request_queue {int dummy; } ;
struct fc_rport {int dummy; } ;
struct fc_internal {TYPE_4__* f; } ;
struct fc_bsg_rport_els {int dummy; } ;
struct fc_bsg_rport_ct {int dummy; } ;
struct TYPE_8__ {int payload_len; } ;
struct TYPE_7__ {int payload_len; } ;
struct fc_bsg_job {int request_len; int reply_len; TYPE_5__* reply; TYPE_3__ reply_payload; TYPE_2__ request_payload; TYPE_1__* request; } ;
struct Scsi_Host {int transportt; } ;
typedef enum fc_dispatch_result { ____Placeholder_fc_dispatch_result } fc_dispatch_result ;
struct TYPE_10__ {int result; scalar_t__ reply_payload_rcv_len; } ;
struct TYPE_9__ {int (* bsg_request ) (struct fc_bsg_job*) ;} ;
struct TYPE_6__ {int msgcode; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_1 (struct fc_bsg_job*) ;
 int FUNC_2 (struct fc_bsg_job*) ;
 struct fc_internal* FUNC_3 (int ) ;

__attribute__((used)) static enum fc_dispatch_result
FUNC_4(struct request_queue *VAR_4, struct Scsi_Host *VAR_5,
    struct fc_rport *VAR_6, struct fc_bsg_job *VAR_7)
{
 struct fc_internal *VAR_8 = FUNC_3(VAR_5->transportt);
 int VAR_9 = sizeof(uint32_t);
 int VAR_10;


 switch (VAR_7->request->msgcode) {
 case 128:
  VAR_9 += sizeof(struct fc_bsg_rport_els);
  goto check_bidi;

 case 129:
  VAR_9 += sizeof(struct fc_bsg_rport_ct);
check_bidi:

  if ((!VAR_7->request_payload.payload_len) ||
      (!VAR_7->reply_payload.payload_len)) {
   VAR_10 = -VAR_1;
   goto fail_rport_msg;
  }
  break;
 default:
  VAR_10 = -VAR_0;
  goto fail_rport_msg;
 }


 if (VAR_7->request_len < VAR_9) {
  VAR_10 = -VAR_2;
  goto fail_rport_msg;
 }

 VAR_10 = VAR_8->f->bsg_request(VAR_7);
 if (!VAR_10)
  return VAR_3;

fail_rport_msg:

 FUNC_0(VAR_7->reply_len < sizeof(uint32_t));
 VAR_7->reply->reply_payload_rcv_len = 0;
 VAR_7->reply->result = VAR_10;
 VAR_7->reply_len = sizeof(uint32_t);
 FUNC_1(VAR_7);
 return VAR_3;
}
