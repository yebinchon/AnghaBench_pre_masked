
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request {scalar_t__ bio; int sense; int cmd_len; scalar_t__ cmd; struct fc_bsg_job* special; struct request* next_rq; } ;
struct fc_rport {int dev; } ;
struct fc_internal {TYPE_1__* f; } ;
struct fc_bsg_request {int dummy; } ;
struct TYPE_4__ {struct fc_bsg_job* sg_list; } ;
struct fc_bsg_job {int ref_cnt; TYPE_2__ request_payload; int * dev; int job_done; TYPE_2__ reply_payload; int reply_len; int reply; int request_len; struct fc_bsg_request* request; int job_lock; void* dd_data; struct request* req; struct fc_rport* rport; struct Scsi_Host* shost; } ;
struct Scsi_Host {int shost_gendev; int transportt; } ;
struct TYPE_3__ {scalar_t__ dd_bsg_size; } ;


 int FUNC_0 (struct fc_bsg_job*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,struct request*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct fc_bsg_job*) ;
 struct fc_bsg_job* FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int *) ;
 struct fc_internal* FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct Scsi_Host *VAR_4, struct fc_rport *VAR_5,
 struct request *VAR_6)
{
 struct fc_internal *VAR_7 = FUNC_6(VAR_4->transportt);
 struct request *VAR_8 = VAR_6->next_rq;
 struct fc_bsg_job *VAR_9;
 int VAR_10;

 FUNC_0(VAR_6->special);

 VAR_9 = FUNC_4(sizeof(struct fc_bsg_job) + VAR_7->f->dd_bsg_size,
   VAR_1);
 if (!VAR_9)
  return -VAR_0;
 VAR_6->special = VAR_9;
 VAR_9->shost = VAR_4;
 VAR_9->rport = VAR_5;
 VAR_9->req = VAR_6;
 if (VAR_7->f->dd_bsg_size)
  VAR_9->dd_data = (void *)&VAR_9[1];
 FUNC_5(&VAR_9->job_lock);
 VAR_9->request = (struct fc_bsg_request *)VAR_6->cmd;
 VAR_9->request_len = VAR_6->cmd_len;
 VAR_9->reply = VAR_6->sense;
 VAR_9->reply_len = VAR_2;

 if (VAR_6->bio) {
  VAR_10 = FUNC_1(&VAR_9->request_payload, VAR_6);
  if (VAR_10)
   goto failjob_rls_job;
 }
 if (VAR_8 && VAR_8->bio) {
  VAR_10 = FUNC_1(&VAR_9->reply_payload, VAR_8);
  if (VAR_10)
   goto failjob_rls_rqst_payload;
 }
 VAR_9->job_done = VAR_3;
 if (VAR_5)
  VAR_9->dev = &VAR_5->dev;
 else
  VAR_9->dev = &VAR_4->shost_gendev;
 FUNC_2(VAR_9->dev);

 VAR_9->ref_cnt = 1;

 return 0;


failjob_rls_rqst_payload:
 FUNC_3(VAR_9->request_payload.sg_list);
failjob_rls_job:
 FUNC_3(VAR_9);
 return -VAR_0;
}
