
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct zfcp_send_els {scalar_t__ status; } ;
struct zfcp_els_fc_job {struct fc_bsg_job* job; } ;
struct TYPE_5__ {int status; } ;
struct TYPE_6__ {TYPE_2__ ctels_reply; } ;
struct fc_bsg_reply {int result; TYPE_3__ reply_data; int reply_payload_rcv_len; } ;
struct TYPE_4__ {int payload_len; } ;
struct fc_bsg_job {int (* job_done ) (struct fc_bsg_job*) ;int state_flags; TYPE_1__ reply_payload; struct zfcp_send_els* dd_data; struct fc_bsg_reply* reply; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct zfcp_els_fc_job*) ;
 int FUNC_1 (struct fc_bsg_job*) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_3)
{
 struct zfcp_els_fc_job *VAR_4 = (struct zfcp_els_fc_job *) VAR_3;
 struct fc_bsg_job *VAR_5 = VAR_4->job;
 struct fc_bsg_reply *VAR_6 = VAR_5->reply;
 struct zfcp_send_els *VAR_7 = VAR_5->dd_data;

 VAR_6->reply_payload_rcv_len = VAR_5->reply_payload.payload_len;
 VAR_6->reply_data.ctels_reply.status = VAR_1;
 VAR_6->result = VAR_7->status ? -VAR_0 : 0;
 VAR_5->state_flags = VAR_2;
 VAR_5->job_done(VAR_5);

 FUNC_0(VAR_4);
}
