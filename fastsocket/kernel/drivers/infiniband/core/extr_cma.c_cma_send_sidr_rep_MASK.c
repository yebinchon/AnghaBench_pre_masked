
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ib; } ;
struct rdma_id_private {TYPE_1__ cm_id; int qkey; int qp_num; } ;
struct ib_cm_sidr_rep_param {int status; int private_data_len; void const* private_data; int qkey; int qp_num; } ;
typedef enum ib_cm_sidr_status { ____Placeholder_ib_cm_sidr_status } ib_cm_sidr_status ;


 int VAR_0 ;
 int FUNC_0 (struct rdma_id_private*,int ) ;
 int FUNC_1 (int ,struct ib_cm_sidr_rep_param*) ;
 int FUNC_2 (struct ib_cm_sidr_rep_param*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct rdma_id_private *VAR_1,
        enum ib_cm_sidr_status VAR_2, u32 VAR_3,
        const void *VAR_4, int VAR_5)
{
 struct ib_cm_sidr_rep_param VAR_6;
 int VAR_7;

 FUNC_2(&VAR_6, 0, sizeof VAR_6);
 VAR_6.status = VAR_2;
 if (VAR_2 == VAR_0) {
  VAR_7 = FUNC_0(VAR_1, VAR_3);
  if (VAR_7)
   return VAR_7;
  VAR_6.qp_num = VAR_1->qp_num;
  VAR_6.qkey = VAR_1->qkey;
 }
 VAR_6.private_data = VAR_4;
 VAR_6.private_data_len = VAR_5;

 return FUNC_1(VAR_1->cm_id.ib, &VAR_6);
}
