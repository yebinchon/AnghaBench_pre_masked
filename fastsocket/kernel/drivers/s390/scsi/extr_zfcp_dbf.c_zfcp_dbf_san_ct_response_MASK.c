
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zfcp_wka_port {int d_id; struct zfcp_adapter* adapter; } ;
struct zfcp_send_ct {TYPE_2__* resp; struct zfcp_wka_port* wka_port; } ;
struct zfcp_fsf_req {int seq_no; int req_id; scalar_t__ data; } ;
struct zfcp_dbf_san_record_ct_response {int len; int max_res_size; int vendor_unique; int expl; int reason_code; int revision; int cmd_rsp_code; } ;
struct TYPE_3__ {struct zfcp_dbf_san_record_ct_response ct_resp; } ;
struct zfcp_dbf_san_record {int d_id; int s_id; int fsf_seqno; int fsf_reqid; int tag; TYPE_1__ u; } ;
struct zfcp_dbf {int san_lock; int san; struct zfcp_dbf_san_record san_buf; } ;
struct zfcp_adapter {int scsi_host; struct zfcp_dbf* dbf; } ;
struct ct_hdr {int max_res_size; int vendor_unique; int reason_code_expl; int reason_code; int revision; int cmd_rsp_code; } ;
struct TYPE_4__ {scalar_t__ length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,struct zfcp_dbf_san_record*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct zfcp_dbf_san_record*,int ,int) ;
 int FUNC_3 (int,int ) ;
 struct ct_hdr* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (int ,struct zfcp_dbf_san_record*,int,int,void*,int ) ;

void FUNC_9(struct zfcp_fsf_req *VAR_2)
{
 struct zfcp_send_ct *VAR_3 = (struct zfcp_send_ct *)VAR_2->data;
 struct zfcp_wka_port *VAR_4 = VAR_3->wka_port;
 struct zfcp_adapter *VAR_5 = VAR_4->adapter;
 struct ct_hdr *VAR_6 = FUNC_4(VAR_3->resp);
 struct zfcp_dbf *VAR_7 = VAR_5->dbf;
 struct zfcp_dbf_san_record *VAR_8 = &VAR_7->san_buf;
 struct zfcp_dbf_san_record_ct_response *VAR_9 = &VAR_8->u.ct_resp;
 int VAR_10 = 3;
 unsigned long VAR_11;

 FUNC_5(&VAR_7->san_lock, VAR_11);
 FUNC_2(VAR_8, 0, sizeof(*VAR_8));
 FUNC_7(VAR_8->tag, "rctc", VAR_1);
 VAR_8->fsf_reqid = VAR_2->req_id;
 VAR_8->fsf_seqno = VAR_2->seq_no;
 VAR_8->s_id = VAR_4->d_id;
 VAR_8->d_id = FUNC_1(VAR_5->scsi_host);
 VAR_9->cmd_rsp_code = VAR_6->cmd_rsp_code;
 VAR_9->revision = VAR_6->revision;
 VAR_9->reason_code = VAR_6->reason_code;
 VAR_9->expl = VAR_6->reason_code_expl;
 VAR_9->vendor_unique = VAR_6->vendor_unique;
 VAR_9->max_res_size = VAR_6->max_res_size;
 VAR_9->len = FUNC_3((int)VAR_3->resp->length - (int)sizeof(struct ct_hdr),
         VAR_0);
 FUNC_0(VAR_7->san, VAR_10, VAR_8, sizeof(*VAR_8));
 FUNC_8(VAR_7->san, VAR_8, sizeof(*VAR_8), VAR_10,
    (void *)VAR_6 + sizeof(struct ct_hdr), VAR_9->len);
 FUNC_6(&VAR_7->san_lock, VAR_11);
}
