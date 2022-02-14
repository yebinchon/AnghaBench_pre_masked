
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int (* exch_seq_send ) (struct fc_lport*,struct fc_frame*,int ,int *,struct fc_bsg_info*,int ) ;} ;
struct fc_lport {TYPE_3__ tt; int port_id; } ;
struct fc_frame_header {scalar_t__ fh_parm_offset; scalar_t__ fh_df_ctl; scalar_t__ fh_cs_ctl; int fh_f_ctl; int fh_type; int fh_s_id; int fh_d_id; int fh_r_ctl; } ;
struct fc_frame {int dummy; } ;
struct TYPE_5__ {int sg_list; int sg_cnt; } ;
struct TYPE_4__ {int payload_len; int sg_cnt; int sg_list; } ;
struct fc_bsg_job {TYPE_2__ reply_payload; TYPE_1__ request_payload; } ;
struct fc_bsg_info {int sg; int nents; int rsp_code; struct fc_lport* lport; struct fc_bsg_job* job; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct fc_frame* FUNC_0 (struct fc_lport*,int) ;
 int FUNC_1 (struct fc_frame*) ;
 struct fc_frame_header* FUNC_2 (struct fc_frame*) ;
 char* FUNC_3 (struct fc_frame*,int) ;
 int VAR_7 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct fc_bsg_info*) ;
 struct fc_bsg_info* FUNC_6 (int,int ) ;
 int FUNC_7 (int ,int ,char*,int) ;
 int FUNC_8 (struct fc_lport*,struct fc_frame*,int ,int *,struct fc_bsg_info*,int ) ;

__attribute__((used)) static int FUNC_9(struct fc_bsg_job *VAR_8,
    struct fc_lport *VAR_9,
    u32 VAR_10, u32 VAR_11)
{
 struct fc_bsg_info *VAR_12;
 struct fc_frame *VAR_13;
 struct fc_frame_header *VAR_14;
 char *VAR_15;
 int VAR_16;

 VAR_13 = FUNC_0(VAR_9, VAR_8->request_payload.payload_len);
 if (!VAR_13)
  return -VAR_2;

 VAR_16 = VAR_8->request_payload.payload_len;
 VAR_15 = FUNC_3(VAR_13, VAR_16);

 FUNC_7(VAR_8->request_payload.sg_list,
     VAR_8->request_payload.sg_cnt,
     VAR_15, VAR_16);

 VAR_14 = FUNC_2(VAR_13);
 VAR_14->fh_r_ctl = VAR_4;
 FUNC_4(VAR_14->fh_d_id, VAR_10);
 FUNC_4(VAR_14->fh_s_id, VAR_9->port_id);
 VAR_14->fh_type = VAR_5;
 FUNC_4(VAR_14->fh_f_ctl, VAR_3);
 VAR_14->fh_cs_ctl = 0;
 VAR_14->fh_df_ctl = 0;
 VAR_14->fh_parm_offset = 0;

 VAR_12 = FUNC_6(sizeof(struct fc_bsg_info), VAR_6);
 if (!VAR_12) {
  FUNC_1(VAR_13);
  return -VAR_2;
 }

 VAR_12->job = VAR_8;
 VAR_12->lport = VAR_9;
 VAR_12->rsp_code = VAR_1;
 VAR_12->nents = VAR_8->reply_payload.sg_cnt;
 VAR_12->sg = VAR_8->reply_payload.sg_list;

 if (!VAR_9->tt.exch_seq_send(VAR_9, VAR_13, VAR_7,
         ((void*)0), VAR_12, VAR_11)) {
  FUNC_5(VAR_12);
  return -VAR_0;
 }
 return 0;
}
