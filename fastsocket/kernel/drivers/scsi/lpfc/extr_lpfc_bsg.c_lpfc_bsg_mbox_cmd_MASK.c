
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_hba {int dummy; } ;
struct fc_bsg_request {int dummy; } ;
struct fc_bsg_job {int request_len; int * dd_data; TYPE_5__* reply; int (* job_done ) (struct fc_bsg_job*) ;TYPE_4__* request; TYPE_1__* shost; } ;
struct dfc_mbox_req {scalar_t__ extSeqNum; scalar_t__ extMboxTag; } ;
struct TYPE_10__ {int result; scalar_t__ reply_payload_rcv_len; } ;
struct TYPE_7__ {scalar_t__ vendor_cmd; } ;
struct TYPE_8__ {TYPE_2__ h_vendor; } ;
struct TYPE_9__ {TYPE_3__ rqst_data; } ;
struct TYPE_6__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lpfc_hba*,struct fc_bsg_job*,struct lpfc_vport*) ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*,int,int) ;
 int FUNC_2 (struct fc_bsg_job*) ;

__attribute__((used)) static int
FUNC_3(struct fc_bsg_job *VAR_2)
{
 struct lpfc_vport *VAR_3 = (struct lpfc_vport *)VAR_2->shost->hostdata;
 struct lpfc_hba *VAR_4 = VAR_3->phba;
 struct dfc_mbox_req *VAR_5;
 int VAR_6 = 0;


 VAR_2->reply->reply_payload_rcv_len = 0;
 if (VAR_2->request_len <
     sizeof(struct fc_bsg_request) + sizeof(struct dfc_mbox_req)) {
  FUNC_1(VAR_4, VAR_0, VAR_1,
    "2737 Mix-and-match backward compatibility "
    "between MBOX_REQ old size:%d and "
    "new request size:%d\n",
    (int)(VAR_2->request_len -
          sizeof(struct fc_bsg_request)),
    (int)sizeof(struct dfc_mbox_req));
  VAR_5 = (struct dfc_mbox_req *)
    VAR_2->request->rqst_data.h_vendor.vendor_cmd;
  VAR_5->extMboxTag = 0;
  VAR_5->extSeqNum = 0;
 }

 VAR_6 = FUNC_0(VAR_4, VAR_2, VAR_3);

 if (VAR_6 == 0) {

  VAR_2->reply->result = 0;
  VAR_2->dd_data = ((void*)0);
  VAR_2->job_done(VAR_2);
 } else if (VAR_6 == 1)

  VAR_6 = 0;
 else {

  VAR_2->reply->result = VAR_6;
  VAR_2->dd_data = ((void*)0);
 }

 return VAR_6;
}
