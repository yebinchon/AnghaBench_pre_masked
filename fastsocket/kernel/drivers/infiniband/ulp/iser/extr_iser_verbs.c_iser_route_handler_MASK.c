
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_conn_param {int responder_resources; int initiator_depth; int retry_count; int rnr_retry_count; int flags; int private_data_len; void* private_data; } ;
struct rdma_cm_id {scalar_t__ context; } ;
struct iser_conn {int dummy; } ;
struct iser_cm_hdr {int responder_resources; int initiator_depth; int retry_count; int rnr_retry_count; int flags; int private_data_len; void* private_data; } ;
typedef int req_hdr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rdma_cm_id*) ;
 int FUNC_1 (struct iser_conn*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct rdma_conn_param*,int ,int) ;
 int FUNC_4 (struct rdma_cm_id*,struct rdma_conn_param*) ;

__attribute__((used)) static int FUNC_5(struct rdma_cm_id *VAR_2)
{
 struct rdma_conn_param VAR_3;
 int VAR_4;
 struct iser_cm_hdr VAR_5;

 VAR_4 = FUNC_1((struct iser_conn *)VAR_2->context);
 if (VAR_4)
  goto failure;

 FUNC_3(&VAR_3, 0, sizeof VAR_3);
 VAR_3.responder_resources = 4;
 VAR_3.initiator_depth = 1;
 VAR_3.retry_count = 7;
 VAR_3.rnr_retry_count = 6;

 FUNC_3(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.flags = (VAR_1 |
   VAR_0);
 VAR_3.private_data = (void *)&VAR_5;
 VAR_3.private_data_len = sizeof(struct iser_cm_hdr);

 VAR_4 = FUNC_4(VAR_2, &VAR_3);
 if (VAR_4) {
  FUNC_2("failure connecting: %d\n", VAR_4);
  goto failure;
 }

 return 0;
failure:
 return FUNC_0(VAR_2);
}
