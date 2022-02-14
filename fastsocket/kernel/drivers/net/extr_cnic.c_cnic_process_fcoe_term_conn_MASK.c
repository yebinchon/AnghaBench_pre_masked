
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct kcqe {int dummy; } ;
struct fcoe_kcqe {size_t fcoe_conn_id; } ;
struct cnic_local {struct cnic_context* ctx_tbl; } ;
struct cnic_dev {struct cnic_local* cnic_priv; } ;
struct cnic_context {int wait_cond; int waitq; int timestamp; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct cnic_dev *VAR_2, struct kcqe *VAR_3)
{
 struct cnic_local *VAR_4 = VAR_2->cnic_priv;
 struct fcoe_kcqe *VAR_5 = (struct fcoe_kcqe *) VAR_3;
 u32 VAR_6 = VAR_5->fcoe_conn_id + VAR_0;
 struct cnic_context *VAR_7 = &VAR_4->ctx_tbl[VAR_6];

 VAR_7->timestamp = VAR_1;
 VAR_7->wait_cond = 1;
 FUNC_0(&VAR_7->waitq);
}
