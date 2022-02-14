
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct cnic_local {struct cnic_context* ctx_tbl; int delete_task; int cnic_local_flags; } ;
struct cnic_dev {int netdev; int flags; struct cnic_local* cnic_priv; } ;
struct cnic_ctl_completion {int error; int cid; } ;
struct TYPE_2__ {struct cnic_ctl_completion comp; } ;
struct cnic_ctl_info {int cmd; TYPE_1__ data; } ;
struct cnic_context {int wait_cond; int waitq; int ctx_flags; } ;


 size_t FUNC_0 (int ) ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct cnic_dev*,int) ;
 int FUNC_2 (struct cnic_local*,size_t,size_t*) ;
 int FUNC_3 (struct cnic_dev*) ;
 int FUNC_4 (struct cnic_dev*) ;
 int FUNC_5 (struct cnic_dev*) ;
 int FUNC_6 (struct cnic_dev*) ;
 int FUNC_7 (struct cnic_dev*) ;
 int FUNC_8 (struct cnic_dev*) ;
 int VAR_6 ;
 int FUNC_9 (int ,char*,size_t,int ) ;
 int FUNC_10 (int ,int *,int ) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(void *VAR_7, struct cnic_ctl_info *VAR_8)
{
 struct cnic_dev *VAR_9 = VAR_7;
 int VAR_10 = VAR_3;

 switch (VAR_8->cmd) {
 case 129:
  FUNC_3(VAR_9);

  FUNC_8(VAR_9);
  FUNC_6(VAR_9);

  FUNC_4(VAR_9);
  break;
 case 130:
  FUNC_3(VAR_9);

  if (!FUNC_5(VAR_9))
   FUNC_7(VAR_9);

  FUNC_4(VAR_9);
  break;
 case 128: {
  struct cnic_local *VAR_11 = VAR_9->cnic_priv;
  FUNC_11(VAR_1, &VAR_11->cnic_local_flags);
  FUNC_10(VAR_6, &VAR_11->delete_task, 0);
  break;
 }
 case 133: {
  struct cnic_ctl_completion *VAR_12 = &VAR_8->data.comp;
  u32 VAR_13 = FUNC_0(VAR_12->cid);
  u32 VAR_14;
  struct cnic_local *VAR_15 = VAR_9->cnic_priv;

  if (!FUNC_12(VAR_0, &VAR_9->flags))
   break;

  if (FUNC_2(VAR_15, VAR_13, &VAR_14) == 0) {
   struct cnic_context *VAR_16 = &VAR_15->ctx_tbl[VAR_14];

   if (FUNC_13(VAR_12->error)) {
    FUNC_11(VAR_4, &VAR_16->ctx_flags);
    FUNC_9(VAR_9->netdev,
        "CID %x CFC delete comp error %x\n",
        VAR_13, VAR_12->error);
   }

   VAR_16->wait_cond = 1;
   FUNC_14(&VAR_16->waitq);
  }
  break;
 }
 case 132:
  VAR_10 = VAR_2;

 case 131:
  FUNC_3(VAR_9);
  FUNC_1(VAR_9, VAR_10);
  FUNC_4(VAR_9);
  break;

 default:
  return -VAR_5;
 }
 return 0;
}
