
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int trp_flags; int trp_cpupercent; int trp_pol; int trp_pri; int trp_value; } ;
typedef TYPE_1__ workq_threadreq_param_t ;
struct kqrequest {int kqr_dsync_waiters; int kqr_override_index; int kqr_qos_index; int kqr_state; int kqr_thread; } ;
struct kqworkloop {int kqwl_params; int kqwl_owner; struct kqrequest kqwl_request; } ;
struct kqueue_dyninfo {int kqdi_cpupercent; int kqdi_pol; int kqdi_pri; scalar_t__ kqdi_sync_waiter_qos; int kqdi_sync_waiters; int kqdi_events_qos; int kqdi_async_qos; int kqdi_request_state; void* kqdi_owner; void* kqdi_servicer; int kqdi_info; } ;
struct kqueue {int kq_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct kqueue*,int *) ;
 int FUNC_1 (struct kqworkloop*) ;
 int FUNC_2 (struct kqworkloop*) ;
 void* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct kqueue *VAR_5, struct kqueue_dyninfo *VAR_6)
{
 struct kqworkloop *VAR_7 = (struct kqworkloop *)VAR_5;
 struct kqrequest *VAR_8 = &VAR_7->kqwl_request;
 workq_threadreq_param_t VAR_9 = {};
 int VAR_10;

 if ((VAR_5->kq_state & VAR_1) == 0) {
  return VAR_0;
 }

 if ((VAR_10 = FUNC_0(VAR_5, &VAR_6->kqdi_info))) {
  return VAR_10;
 }

 FUNC_1(VAR_7);

 VAR_6->kqdi_servicer = FUNC_3(VAR_8->kqr_thread);
 VAR_6->kqdi_owner = FUNC_3(VAR_7->kqwl_owner);
 VAR_6->kqdi_request_state = VAR_8->kqr_state;
 VAR_6->kqdi_async_qos = VAR_8->kqr_qos_index;
 VAR_6->kqdi_events_qos = VAR_8->kqr_override_index;
 VAR_6->kqdi_sync_waiters = VAR_8->kqr_dsync_waiters;
 VAR_6->kqdi_sync_waiter_qos = 0;

 VAR_9.trp_value = VAR_7->kqwl_params;
 if (VAR_9.trp_flags & VAR_4)
  VAR_6->kqdi_pri = VAR_9.trp_pri;
 else
  VAR_6->kqdi_pri = 0;

 if (VAR_9.trp_flags & VAR_3)
  VAR_6->kqdi_pol = VAR_9.trp_pol;
 else
  VAR_6->kqdi_pol = 0;

 if (VAR_9.trp_flags & VAR_2)
  VAR_6->kqdi_cpupercent = VAR_9.trp_cpupercent;
 else
  VAR_6->kqdi_cpupercent = 0;

 FUNC_2(VAR_7);

 return 0;
}
