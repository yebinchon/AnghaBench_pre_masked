
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_ud_param {int qkey; int qp_num; int ah_attr; scalar_t__ private_data_len; int private_data; } ;
struct rdma_ucm_ud_param {int qkey; int qp_num; int ah_attr; scalar_t__ private_data_len; int private_data; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct rdma_ucm_ud_param *VAR_0,
          struct rdma_ud_param *VAR_1)
{
 if (VAR_1->private_data_len)
  FUNC_1(VAR_0->private_data, VAR_1->private_data,
         VAR_1->private_data_len);
 VAR_0->private_data_len = VAR_1->private_data_len;
 FUNC_0(&VAR_0->ah_attr, &VAR_1->ah_attr);
 VAR_0->qp_num = VAR_1->qp_num;
 VAR_0->qkey = VAR_1->qkey;
}
