
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct ulp_bde64 {int dummy; } ;
struct send_mgmt_resp {int tag; } ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_hba {int dummy; } ;
struct lpfc_dmabuf {int phys; scalar_t__ virt; int list; } ;
struct TYPE_12__ {scalar_t__ payload_len; } ;
struct fc_bsg_job {int * dd_data; TYPE_5__* reply; TYPE_6__ request_payload; TYPE_4__* request; TYPE_1__* shost; } ;
struct TYPE_11__ {int result; scalar_t__ reply_payload_rcv_len; } ;
struct TYPE_8__ {scalar_t__ vendor_cmd; } ;
struct TYPE_9__ {TYPE_2__ h_vendor; } ;
struct TYPE_10__ {TYPE_3__ rqst_data; } ;
struct TYPE_7__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct lpfc_dmabuf*) ;
 struct lpfc_dmabuf* FUNC_2 (int,int ) ;
 struct lpfc_dmabuf* FUNC_3 (struct lpfc_hba*,scalar_t__,int,struct ulp_bde64*,int*) ;
 int FUNC_4 (struct lpfc_dmabuf*,TYPE_6__*,scalar_t__,int) ;
 int FUNC_5 (struct lpfc_hba*,struct lpfc_dmabuf*) ;
 int FUNC_6 (struct lpfc_hba*,struct fc_bsg_job*,int ,struct lpfc_dmabuf*,struct lpfc_dmabuf*,int) ;
 scalar_t__ FUNC_7 (struct lpfc_hba*,int ,int *) ;
 int FUNC_8 (struct lpfc_hba*,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_9(struct fc_bsg_job *VAR_7)
{
 struct lpfc_vport *VAR_8 = (struct lpfc_vport *)VAR_7->shost->hostdata;
 struct lpfc_hba *VAR_9 = VAR_8->phba;
 struct send_mgmt_resp *VAR_10 = (struct send_mgmt_resp *)
  VAR_7->request->rqst_data.h_vendor.vendor_cmd;
 struct ulp_bde64 *VAR_11;
 struct lpfc_dmabuf *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
 int VAR_14;
 uint32_t VAR_15 = VAR_10->tag;
 unsigned long VAR_16 =
   (unsigned long)VAR_7->request_payload.payload_len;
 int VAR_17 = 0;


 VAR_7->reply->reply_payload_rcv_len = 0;

 if (!VAR_16 || (VAR_16 > (80 * VAR_0))) {
  VAR_17 = -VAR_3;
  goto send_mgmt_rsp_exit;
 }

 VAR_12 = FUNC_2(sizeof(struct lpfc_dmabuf), VAR_4);
 if (!VAR_12) {
  VAR_17 = -VAR_2;
  goto send_mgmt_rsp_exit;
 }

 VAR_12->virt = FUNC_7(VAR_9, 0, &VAR_12->phys);
 if (!VAR_12->virt) {
  VAR_17 = -VAR_2;
  goto send_mgmt_rsp_free_bmp;
 }

 FUNC_0(&VAR_12->list);
 VAR_11 = (struct ulp_bde64 *) VAR_12->virt;
 VAR_14 = (VAR_6/sizeof(struct ulp_bde64));
 VAR_13 = FUNC_3(VAR_9, VAR_7->request_payload.payload_len,
         1, VAR_11, &VAR_14);
 if (!VAR_13) {
  VAR_17 = -VAR_2;
  goto send_mgmt_rsp_free_bmp;
 }
 FUNC_4(VAR_13, &VAR_7->request_payload,
      VAR_7->request_payload.payload_len, 1);

 VAR_17 = FUNC_6(VAR_9, VAR_7, VAR_15, VAR_13, VAR_12, VAR_14);

 if (VAR_17 == VAR_5)
  return 0;

 VAR_17 = -VAR_1;

 FUNC_5(VAR_9, VAR_13);

send_mgmt_rsp_free_bmp:
 if (VAR_12->virt)
  FUNC_8(VAR_9, VAR_12->virt, VAR_12->phys);
 FUNC_1(VAR_12);
send_mgmt_rsp_exit:

 VAR_7->reply->result = VAR_17;
 VAR_7->dd_data = ((void*)0);
 return VAR_17;
}
