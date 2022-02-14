
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct zfcp_qdio {int req_q_lock; } ;
struct zfcp_fsf_req {int completion; int queue_req; TYPE_2__* qtcb; int handler; } ;
struct zfcp_fsf_cfdc {int sg; int option; int command; } ;
struct zfcp_adapter {int adapter_features; struct zfcp_qdio* qdio; } ;
struct qdio_buffer_element {int sflags; } ;
struct fsf_qtcb_bottom_support {int option; int operation_subtype; } ;
struct TYPE_3__ {struct fsf_qtcb_bottom_support support; } ;
struct TYPE_4__ {TYPE_1__ bottom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct zfcp_fsf_req* FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 scalar_t__ FUNC_1 (struct zfcp_fsf_req*) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct zfcp_adapter*) ;
 int VAR_11 ;
 struct zfcp_fsf_req* FUNC_6 (struct zfcp_qdio*,int ,int *) ;
 int FUNC_7 (struct zfcp_fsf_req*) ;
 scalar_t__ FUNC_8 (struct zfcp_qdio*) ;
 int FUNC_9 (struct zfcp_fsf_req*) ;
 int FUNC_10 (struct zfcp_fsf_req*,int ) ;
 scalar_t__ FUNC_11 (int ) ;
 struct qdio_buffer_element* FUNC_12 (struct zfcp_qdio*,int *) ;
 int FUNC_13 (struct zfcp_qdio*,int *,int ,int ,int ) ;
 int FUNC_14 (struct zfcp_qdio*,int *) ;
 int FUNC_15 (struct zfcp_qdio*,int *) ;

struct zfcp_fsf_req *FUNC_16(struct zfcp_adapter *VAR_12,
        struct zfcp_fsf_cfdc *VAR_13)
{
 struct qdio_buffer_element *VAR_14;
 struct zfcp_qdio *VAR_15 = VAR_12->qdio;
 struct zfcp_fsf_req *VAR_16 = ((void*)0);
 struct fsf_qtcb_bottom_support *VAR_17;
 int VAR_18 = -VAR_1;
 u8 VAR_19;

 if (!(VAR_12->adapter_features & VAR_5))
  return FUNC_0(-VAR_2);

 switch (VAR_13->command) {
 case 129:
  VAR_19 = VAR_8;
  break;
 case 128:
  VAR_19 = VAR_7;
  break;
 default:
  return FUNC_0(-VAR_0);
 }

 FUNC_2(&VAR_15->req_q_lock);
 if (FUNC_8(VAR_15))
  goto out;

 VAR_16 = FUNC_6(VAR_15, VAR_13->command, ((void*)0));
 if (FUNC_1(VAR_16)) {
  VAR_18 = -VAR_3;
  goto out;
 }

 VAR_16->handler = VAR_11;

 VAR_14 = FUNC_12(VAR_15, &VAR_16->queue_req);
 VAR_14[0].sflags |= VAR_19;

 VAR_17 = &VAR_16->qtcb->bottom.support;
 VAR_17->operation_subtype = VAR_4;
 VAR_17->option = VAR_13->option;

 VAR_18 = FUNC_13(VAR_15, &VAR_16->queue_req,
      VAR_19, VAR_13->sg,
      VAR_6);
 if (VAR_18 ||
     (FUNC_11(VAR_13->sg) != VAR_9)) {
  FUNC_7(VAR_16);
  VAR_18 = -VAR_1;
  goto out;
 }
 FUNC_14(VAR_15, &VAR_16->queue_req);
 if (FUNC_5(VAR_12))
  FUNC_15(VAR_15, &VAR_16->queue_req);

 FUNC_10(VAR_16, VAR_10);
 VAR_18 = FUNC_9(VAR_16);
out:
 FUNC_3(&VAR_15->req_q_lock);

 if (!VAR_18) {
  FUNC_4(&VAR_16->completion);
  return VAR_16;
 }
 return FUNC_0(VAR_18);
}
