
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct request_queue {int dummy; } ;
struct fc_internal {TYPE_7__* f; } ;
struct TYPE_10__ {int payload_len; } ;
struct TYPE_9__ {int payload_len; } ;
struct fc_bsg_job {int request_len; int reply_len; TYPE_8__* reply; TYPE_5__* request; TYPE_2__ reply_payload; TYPE_1__ request_payload; } ;
struct fc_bsg_host_vendor {int dummy; } ;
struct fc_bsg_host_els {int dummy; } ;
struct fc_bsg_host_del_rport {int dummy; } ;
struct fc_bsg_host_ct {int dummy; } ;
struct fc_bsg_host_add_rport {int dummy; } ;
struct Scsi_Host {TYPE_6__* hostt; int transportt; } ;
typedef enum fc_dispatch_result { ____Placeholder_fc_dispatch_result } fc_dispatch_result ;
struct TYPE_16__ {int result; scalar_t__ reply_payload_rcv_len; } ;
struct TYPE_15__ {int (* bsg_request ) (struct fc_bsg_job*) ;} ;
struct TYPE_14__ {long vendor_id; } ;
struct TYPE_11__ {long vendor_id; } ;
struct TYPE_12__ {TYPE_3__ h_vendor; } ;
struct TYPE_13__ {int msgcode; TYPE_4__ rqst_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 int VAR_4 ;
 int FUNC_1 (struct fc_bsg_job*) ;
 int FUNC_2 (struct fc_bsg_job*) ;
 struct fc_internal* FUNC_3 (int ) ;

__attribute__((used)) static enum fc_dispatch_result
FUNC_4(struct request_queue *VAR_5, struct Scsi_Host *VAR_6,
    struct fc_bsg_job *VAR_7)
{
 struct fc_internal *VAR_8 = FUNC_3(VAR_6->transportt);
 int VAR_9 = sizeof(uint32_t);
 int VAR_10;


 switch (VAR_7->request->msgcode) {
 case 132:
  VAR_9 += sizeof(struct fc_bsg_host_add_rport);
  break;

 case 130:
  VAR_9 += sizeof(struct fc_bsg_host_del_rport);
  break;

 case 129:
  VAR_9 += sizeof(struct fc_bsg_host_els);

  if ((!VAR_7->request_payload.payload_len) ||
      (!VAR_7->reply_payload.payload_len)) {
   VAR_10 = -VAR_1;
   goto fail_host_msg;
  }
  break;

 case 131:
  VAR_9 += sizeof(struct fc_bsg_host_ct);

  if ((!VAR_7->request_payload.payload_len) ||
      (!VAR_7->reply_payload.payload_len)) {
   VAR_10 = -VAR_1;
   goto fail_host_msg;
  }
  break;

 case 128:
  VAR_9 += sizeof(struct fc_bsg_host_vendor);
  if ((VAR_6->hostt->vendor_id == 0L) ||
      (VAR_7->request->rqst_data.h_vendor.vendor_id !=
   VAR_6->hostt->vendor_id)) {
   VAR_10 = -VAR_3;
   goto fail_host_msg;
  }
  break;

 default:
  VAR_10 = -VAR_0;
  goto fail_host_msg;
 }


 if (VAR_7->request_len < VAR_9) {
  VAR_10 = -VAR_2;
  goto fail_host_msg;
 }

 VAR_10 = VAR_8->f->bsg_request(VAR_7);
 if (!VAR_10)
  return VAR_4;

fail_host_msg:

 FUNC_0(VAR_7->reply_len < sizeof(uint32_t));
 VAR_7->reply->reply_payload_rcv_len = 0;
 VAR_7->reply->result = VAR_10;
 VAR_7->reply_len = sizeof(uint32_t);
 FUNC_1(VAR_7);
 return VAR_4;
}
