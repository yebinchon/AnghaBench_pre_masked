
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iser_regd_buf {int dummy; } ;
struct iscsi_iser_task {int * rdma_regd; TYPE_1__* data; scalar_t__* dir; int status; } ;
struct TYPE_2__ {scalar_t__ data_len; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int) ;

void FUNC_1(struct iscsi_iser_task *VAR_3)

{
 VAR_3->status = VAR_2;

 VAR_3->dir[VAR_0] = 0;
 VAR_3->dir[VAR_1] = 0;

 VAR_3->data[VAR_0].data_len = 0;
 VAR_3->data[VAR_1].data_len = 0;

 FUNC_0(&VAR_3->rdma_regd[VAR_0], 0,
        sizeof(struct iser_regd_buf));
 FUNC_0(&VAR_3->rdma_regd[VAR_1], 0,
        sizeof(struct iser_regd_buf));
}
