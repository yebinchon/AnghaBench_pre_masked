
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct fc_seq {int dummy; } ;
struct fc_lport {int lp_mutex; } ;
struct fc_frame_header {int fh_f_ctl; int fh_seq_cnt; } ;
struct fc_frame {int dummy; } ;
struct fc_ct_hdr {int ct_cmd; } ;
struct TYPE_7__ {scalar_t__ payload_len; } ;
struct fc_bsg_job {int reply_len; int (* job_done ) (struct fc_bsg_job*) ;int state_flags; TYPE_4__* reply; TYPE_3__ reply_payload; } ;
struct fc_bsg_info {unsigned short rsp_code; int offset; int nents; int sg; struct fc_lport* lport; struct fc_bsg_job* job; } ;
struct TYPE_5__ {int status; } ;
struct TYPE_6__ {TYPE_1__ ctels_reply; } ;
struct TYPE_8__ {scalar_t__ reply_payload_rcv_len; scalar_t__ result; TYPE_2__ reply_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned short VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_0 (struct fc_frame*) ;
 int VAR_11 ;
 int FUNC_1 (struct fc_frame*) ;
 scalar_t__ FUNC_2 (void*,size_t,int ,int *,int *,int ,int *) ;
 int FUNC_3 (struct fc_frame*) ;
 struct fc_frame_header* FUNC_4 (struct fc_frame*) ;
 void* FUNC_5 (struct fc_frame*,int ) ;
 scalar_t__ FUNC_6 (struct fc_frame*) ;
 scalar_t__ FUNC_7 (struct fc_frame*) ;
 int FUNC_8 (struct fc_frame*) ;
 scalar_t__ FUNC_9 (struct fc_frame*) ;
 int FUNC_10 (struct fc_bsg_info*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 unsigned short FUNC_14 (int ) ;
 int FUNC_15 (struct fc_bsg_job*) ;
 int FUNC_16 (struct fc_bsg_job*) ;

__attribute__((used)) static void FUNC_17(struct fc_seq *VAR_12, struct fc_frame *VAR_13,
         void *VAR_14)
{
 struct fc_bsg_info *VAR_15 = VAR_14;
 struct fc_bsg_job *VAR_16 = VAR_15->job;
 struct fc_lport *VAR_17 = VAR_15->lport;
 struct fc_frame_header *VAR_18;
 size_t VAR_19;
 void *VAR_20;

 if (FUNC_0(VAR_13)) {
  VAR_16->reply->result = (FUNC_1(VAR_13) == -VAR_5) ?
   -VAR_0 : -VAR_1;
  VAR_16->reply_len = sizeof(uint32_t);
  VAR_16->state_flags |= VAR_9;
  VAR_16->job_done(VAR_16);
  FUNC_10(VAR_15);
  return;
 }

 FUNC_11(&VAR_17->lp_mutex);
 VAR_18 = FUNC_4(VAR_13);
 VAR_19 = FUNC_8(VAR_13) - sizeof(*VAR_18);
 VAR_20 = FUNC_5(VAR_13, 0);

 if (FUNC_9(VAR_13) == VAR_10 && !FUNC_14(VAR_18->fh_seq_cnt)) {

  unsigned short VAR_21 = (VAR_15->rsp_code == VAR_8) ?
   FUNC_14(((struct fc_ct_hdr *)VAR_20)->ct_cmd) :
   (unsigned short)FUNC_6(VAR_13);


  VAR_16->reply->reply_data.ctels_reply.status =
   (VAR_21 == VAR_15->rsp_code) ?
   VAR_2 : VAR_3;
 }

 VAR_16->reply->reply_payload_rcv_len +=
  FUNC_2(VAR_20, VAR_19, VAR_15->sg, &VAR_15->nents,
      &VAR_15->offset, VAR_11, ((void*)0));

 if (FUNC_7(VAR_13) == VAR_4 &&
     (FUNC_13(VAR_18->fh_f_ctl) & (VAR_7 | VAR_6)) ==
     (VAR_7 | VAR_6)) {
  if (VAR_16->reply->reply_payload_rcv_len >
      VAR_16->reply_payload.payload_len)
   VAR_16->reply->reply_payload_rcv_len =
    VAR_16->reply_payload.payload_len;
  VAR_16->reply->result = 0;
  VAR_16->state_flags |= VAR_9;
  VAR_16->job_done(VAR_16);
  FUNC_10(VAR_15);
 }
 FUNC_3(VAR_13);
 FUNC_12(&VAR_17->lp_mutex);
}
