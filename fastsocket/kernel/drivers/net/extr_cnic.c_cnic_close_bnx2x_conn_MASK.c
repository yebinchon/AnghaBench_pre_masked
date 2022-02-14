
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union l5cm_specific_data {int dummy; } l5cm_specific_data ;
typedef int u32 ;
struct cnic_sock {size_t l5_cid; int state; int cid; int flags; struct cnic_dev* dev; } ;
struct cnic_local {struct cnic_context* ctx_tbl; } ;
struct cnic_dev {struct cnic_local* cnic_priv; } ;
struct cnic_context {int timestamp; } ;
typedef int l5_data ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cnic_sock*) ;
 int FUNC_1 (struct cnic_local*,struct cnic_sock*,int ) ;
 int FUNC_2 (struct cnic_sock*,int) ;
 int FUNC_3 (struct cnic_dev*,int,int ,int ,union l5cm_specific_data*) ;
 int VAR_3 ;
 int FUNC_4 (union l5cm_specific_data*,int ,int) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct cnic_sock *VAR_4, u32 VAR_5)
{
 struct cnic_dev *VAR_6 = VAR_4->dev;
 struct cnic_local *VAR_7 = VAR_6->cnic_priv;
 struct cnic_context *VAR_8 = &VAR_7->ctx_tbl[VAR_4->l5_cid];
 union l5cm_specific_data VAR_9;
 u32 VAR_10 = 0;
 int VAR_11 = 0;

 switch (VAR_5) {
 case 130:
 case 132:
 case 131:
  if (FUNC_2(VAR_4, VAR_5)) {
   if (FUNC_5(VAR_1, &VAR_4->flags))
    VAR_11 = 1;
   else if (FUNC_5(VAR_2, &VAR_4->flags))
    VAR_10 = 129;
   else
    VAR_11 = 1;
  }
  break;
 case 129:
  VAR_10 = 128;
  break;
 case 128:
  VAR_11 = 1;
  break;
 }
 if (VAR_10) {
  FUNC_4(&VAR_9, 0, sizeof(VAR_9));

  FUNC_3(VAR_6, VAR_10, VAR_4->cid, VAR_0,
        &VAR_9);
 } else if (VAR_11) {
  VAR_8->timestamp = VAR_3;
  FUNC_0(VAR_4);
  FUNC_1(VAR_7, VAR_4, VAR_4->state);
 }
}
