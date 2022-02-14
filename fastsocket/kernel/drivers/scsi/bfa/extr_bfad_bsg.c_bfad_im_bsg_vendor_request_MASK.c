
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
struct TYPE_15__ {int payload_len; int sg_cnt; int sg_list; } ;
struct TYPE_14__ {int payload_len; int sg_cnt; int sg_list; } ;
struct fc_bsg_job {int reply_len; TYPE_8__* reply; int (* job_done ) (struct fc_bsg_job*) ;TYPE_7__ reply_payload; TYPE_6__ request_payload; TYPE_5__* req; TYPE_4__* shost; TYPE_3__* request; } ;
struct bfad_s {int dummy; } ;
struct bfad_im_port_s {struct bfad_s* bfad; } ;
struct TYPE_16__ {int reply_payload_rcv_len; int result; } ;
struct TYPE_13__ {struct request_queue* q; } ;
struct TYPE_12__ {scalar_t__* hostdata; } ;
struct TYPE_9__ {int * vendor_cmd; } ;
struct TYPE_10__ {TYPE_1__ h_vendor; } ;
struct TYPE_11__ {TYPE_2__ rqst_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bfad_s*,int ,void*,int ) ;
 int FUNC_1 (struct request_queue*,int) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,void*,int) ;
 int FUNC_5 (int ,int ,void*,int ) ;
 int FUNC_6 (struct fc_bsg_job*) ;

__attribute__((used)) static int
FUNC_7(struct fc_bsg_job *VAR_4)
{
 uint32_t VAR_5 = VAR_4->request->rqst_data.h_vendor.vendor_cmd[0];
 struct bfad_im_port_s *VAR_6 =
   (struct bfad_im_port_s *) VAR_4->shost->hostdata[0];
 struct bfad_s *VAR_7 = VAR_6->bfad;
 struct request_queue *VAR_8 = VAR_4->req->q;
 void *VAR_9;
 int VAR_10 = -VAR_1;





 FUNC_1(VAR_8, 256);


 VAR_9 = FUNC_3(VAR_4->request_payload.payload_len, VAR_3);
 if (!VAR_9) {
  VAR_10 = -VAR_2;
  goto out;
 }


 FUNC_5(VAR_4->request_payload.sg_list,
     VAR_4->request_payload.sg_cnt, VAR_9,
     VAR_4->request_payload.payload_len);


 VAR_10 = FUNC_0(VAR_7, VAR_5, VAR_9,
    VAR_4->request_payload.payload_len);
 if (VAR_10 != VAR_0)
  goto error;


 FUNC_4(VAR_4->reply_payload.sg_list,
       VAR_4->reply_payload.sg_cnt,
       VAR_9,
       VAR_4->reply_payload.payload_len);


 FUNC_2(VAR_9);


 VAR_4->reply_len = VAR_4->reply_payload.payload_len;
 VAR_4->reply->reply_payload_rcv_len = VAR_4->reply_payload.payload_len;
 VAR_4->reply->result = VAR_10;

 VAR_4->job_done(VAR_4);
 return VAR_10;
error:

 FUNC_2(VAR_9);
out:
 VAR_4->reply->result = VAR_10;
 VAR_4->reply_len = sizeof(uint32_t);
 VAR_4->reply->reply_payload_rcv_len = 0;
 return VAR_10;
}
