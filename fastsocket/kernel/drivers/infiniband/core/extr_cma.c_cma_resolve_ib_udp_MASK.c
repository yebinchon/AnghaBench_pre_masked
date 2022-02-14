
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct ib_cm_id* ib; } ;
struct TYPE_4__ {int path_rec; } ;
struct TYPE_6__ {TYPE_1__ route; int device; } ;
struct rdma_id_private {TYPE_2__ cm_id; TYPE_3__ id; } ;
struct rdma_conn_param {scalar_t__ private_data_len; int private_data; } ;
struct ib_cm_sidr_req_param {scalar_t__ private_data_len; int timeout_ms; int * private_data; int max_cm_retries; int service_id; int path; } ;
struct ib_cm_id {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct ib_cm_id*) ;
 int FUNC_1 (struct ib_cm_id*) ;
 int FUNC_2 (struct rdma_id_private*) ;
 int FUNC_3 (void*,struct rdma_id_private*) ;
 int VAR_5 ;
 int FUNC_4 (struct rdma_id_private*) ;
 struct ib_cm_id* FUNC_5 (int ,int ,struct rdma_id_private*) ;
 int FUNC_6 (struct ib_cm_id*) ;
 int FUNC_7 (struct ib_cm_id*,struct ib_cm_sidr_req_param*) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (scalar_t__,int ) ;
 int FUNC_10 (void*,int ,scalar_t__) ;
 int FUNC_11 (TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_12(struct rdma_id_private *VAR_6,
         struct rdma_conn_param *VAR_7)
{
 struct ib_cm_sidr_req_param VAR_8;
 struct ib_cm_id *VAR_9;
 int VAR_10, VAR_11;

 VAR_10 = FUNC_4(VAR_6);
 VAR_8.private_data_len = VAR_10 + VAR_7->private_data_len;
 if (VAR_8.private_data_len < VAR_7->private_data_len)
  return -VAR_2;

 if (VAR_8.private_data_len) {
  VAR_8.private_data = FUNC_9(VAR_8.private_data_len, VAR_4);
  if (!VAR_8.private_data)
   return -VAR_3;
 } else {
  VAR_8.private_data = ((void*)0);
 }

 if (VAR_7->private_data && VAR_7->private_data_len)
  FUNC_10((void *) VAR_8.private_data + VAR_10,
         VAR_7->private_data, VAR_7->private_data_len);

 if (VAR_8.private_data) {
  VAR_11 = FUNC_3((void *) VAR_8.private_data, VAR_6);
  if (VAR_11)
   goto out;
 }

 VAR_9 = FUNC_5(VAR_6->id.device, VAR_5,
        VAR_6);
 if (FUNC_0(VAR_9)) {
  VAR_11 = FUNC_1(VAR_9);
  goto out;
 }
 VAR_6->cm_id.ib = VAR_9;

 VAR_8.path = VAR_6->id.route.path_rec;
 VAR_8.service_id = FUNC_11(&VAR_6->id, FUNC_2(VAR_6));
 VAR_8.timeout_ms = 1 << (VAR_0 - 8);
 VAR_8.max_cm_retries = VAR_1;

 VAR_11 = FUNC_7(VAR_6->cm_id.ib, &VAR_8);
 if (VAR_11) {
  FUNC_6(VAR_6->cm_id.ib);
  VAR_6->cm_id.ib = ((void*)0);
 }
out:
 FUNC_8(VAR_8.private_data);
 return VAR_11;
}
