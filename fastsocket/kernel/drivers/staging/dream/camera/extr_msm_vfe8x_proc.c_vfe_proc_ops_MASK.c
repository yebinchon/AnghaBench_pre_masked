
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int msg_id; size_t len; void* data; int type; } ;
struct msm_vfe_resp {void* type; TYPE_1__ evt_msg; int phy; int extlen; int extdata; } ;
typedef enum VFE_MESSAGE_ID { ____Placeholder_VFE_MESSAGE_ID } VFE_MESSAGE_ID ;
struct TYPE_6__ {scalar_t__ vfeOperationMode; int syncdata; TYPE_2__* resp; } ;
struct TYPE_5__ {int (* vfe_resp ) (struct msm_vfe_resp*,int ,int ) ;struct msm_vfe_resp* (* vfe_alloc ) (int,int ) ;} ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;





 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_3__* VAR_9 ;
 struct msm_vfe_resp* FUNC_1 (int,int ) ;
 int FUNC_2 (struct msm_vfe_resp*,int ,int ) ;
 int FUNC_3 (int *,void*,void*,int *,int *) ;

__attribute__((used)) static void
FUNC_4(enum VFE_MESSAGE_ID VAR_10, void *VAR_11, size_t VAR_12)
{
 struct msm_vfe_resp *VAR_13;




 FUNC_0("ctrl->vfeOperationMode = %d, msgId = %d\n",
  VAR_9->vfeOperationMode, VAR_10);

 if ((VAR_9->vfeOperationMode == VAR_8) &&
  (VAR_10 == 132 || VAR_10 == 131)) {
  return;
 }

 VAR_13 = VAR_9->resp->vfe_alloc(sizeof(struct msm_vfe_resp), VAR_9->syncdata);
 if (!VAR_13) {
  FUNC_0("rp: cannot allocate buffer\n");
  return;
 }

 FUNC_0("vfe_proc_ops, msgId = %d\n", VAR_10);

 VAR_13->evt_msg.type = VAR_0;
 VAR_13->evt_msg.msg_id = VAR_10;
 VAR_13->evt_msg.len = VAR_12;
 VAR_13->evt_msg.data = VAR_11;

 switch (VAR_13->evt_msg.msg_id) {
 case 130:
  VAR_13->type = VAR_5;
  break;

 case 132:
  VAR_13->type = VAR_3;
  FUNC_3(&(VAR_13->phy), VAR_3,
   VAR_13->evt_msg.data, &(VAR_13->extdata),
   &(VAR_13->extlen));
  break;

 case 131:
  VAR_13->type = VAR_4;
  FUNC_3(&(VAR_13->phy), VAR_4,
    VAR_13->evt_msg.data, &(VAR_13->extdata),
    &(VAR_13->extlen));
  break;

 case 129:
  VAR_13->type = VAR_6;
  FUNC_3(&(VAR_13->phy), VAR_6,
    VAR_13->evt_msg.data, ((void*)0), ((void*)0));
  break;

 case 128:
  VAR_13->type = VAR_7;
  FUNC_3(&(VAR_13->phy), VAR_7,
    VAR_13->evt_msg.data, ((void*)0), ((void*)0));
  break;

 default:
  VAR_13->type = VAR_2;
  break;
 }

 VAR_9->resp->vfe_resp(VAR_13, VAR_1, VAR_9->syncdata);
}
