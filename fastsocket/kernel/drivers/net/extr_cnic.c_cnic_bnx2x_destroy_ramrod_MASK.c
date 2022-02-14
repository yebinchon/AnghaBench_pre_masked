
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union l5cm_specific_data {int dummy; } l5cm_specific_data ;
typedef size_t u32 ;
struct cnic_local {struct cnic_context* ctx_tbl; } ;
struct cnic_dev {struct cnic_local* cnic_priv; } ;
struct cnic_context {int ctx_flags; scalar_t__ wait_cond; int waitq; int cid; } ;
typedef int l5_data ;


 size_t FUNC_0 (struct cnic_local*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct cnic_dev*,int ,size_t,int ,union l5cm_specific_data*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (union l5cm_specific_data*,int ,int) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_7(struct cnic_dev *VAR_5, u32 VAR_6)
{
 struct cnic_local *VAR_7 = VAR_5->cnic_priv;
 struct cnic_context *VAR_8 = &VAR_7->ctx_tbl[VAR_6];
 union l5cm_specific_data VAR_9;
 int VAR_10;
 u32 VAR_11;

 FUNC_2(&VAR_8->waitq);
 VAR_8->wait_cond = 0;
 FUNC_3(&VAR_9, 0, sizeof(VAR_9));
 VAR_11 = FUNC_0(VAR_7, VAR_8->cid);

 VAR_10 = FUNC_1(VAR_5, VAR_4,
      VAR_11, VAR_3, &VAR_9);

 if (VAR_10 == 0) {
  FUNC_6(VAR_8->waitq, VAR_8->wait_cond, VAR_0);
  if (FUNC_5(FUNC_4(VAR_1, &VAR_8->ctx_flags)))
   return -VAR_2;
 }

 return 0;
}
