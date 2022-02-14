
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


struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_hba {int dummy; } ;
struct TYPE_15__ {int a_Minor; int a_Major; } ;
struct get_mgmt_rev_reply {TYPE_7__ info; } ;
struct get_mgmt_rev {int dummy; } ;
struct fc_bsg_request {int dummy; } ;
struct fc_bsg_job {int request_len; int reply_len; int (* job_done ) (struct fc_bsg_job*) ;TYPE_8__* reply; TYPE_4__* request; TYPE_1__* shost; } ;
struct TYPE_13__ {scalar_t__ vendor_rsp; } ;
struct TYPE_14__ {TYPE_5__ vendor_reply; } ;
struct TYPE_16__ {int result; TYPE_6__ reply_data; } ;
struct TYPE_10__ {scalar_t__ vendor_cmd; } ;
struct TYPE_11__ {TYPE_2__ h_vendor; } ;
struct TYPE_12__ {TYPE_3__ rqst_data; } ;
struct TYPE_9__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct lpfc_hba*,int ,int ,char*) ;
 int FUNC_1 (struct fc_bsg_job*) ;

__attribute__((used)) static int
FUNC_2(struct fc_bsg_job *VAR_5)
{
 struct lpfc_vport *VAR_6 = (struct lpfc_vport *)VAR_5->shost->hostdata;
 struct lpfc_hba *VAR_7 = VAR_6->phba;
 struct get_mgmt_rev *VAR_8;
 struct get_mgmt_rev_reply *VAR_9;
 int VAR_10 = 0;

 if (VAR_5->request_len <
     sizeof(struct fc_bsg_request) + sizeof(struct get_mgmt_rev)) {
  FUNC_0(VAR_7, VAR_1, VAR_2,
    "2740 Received GET_DFC_REV request below "
    "minimum size\n");
  VAR_10 = -VAR_0;
  goto job_error;
 }

 VAR_8 = (struct get_mgmt_rev *)
  VAR_5->request->rqst_data.h_vendor.vendor_cmd;

 VAR_9 = (struct get_mgmt_rev_reply *)
  VAR_5->reply->reply_data.vendor_reply.vendor_rsp;

 if (VAR_5->reply_len <
     sizeof(struct fc_bsg_request) + sizeof(struct get_mgmt_rev_reply)) {
  FUNC_0(VAR_7, VAR_1, VAR_2,
    "2741 Received GET_DFC_REV reply below "
    "minimum size\n");
  VAR_10 = -VAR_0;
  goto job_error;
 }

 VAR_9->info.a_Major = VAR_3;
 VAR_9->info.a_Minor = VAR_4;
job_error:
 VAR_5->reply->result = VAR_10;
 if (VAR_10 == 0)
  VAR_5->job_done(VAR_5);
 return VAR_10;
}
