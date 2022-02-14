
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tr_qos; } ;
struct kqrequest {int kqr_state; TYPE_1__ kqr_req; int kqr_thread; } ;
struct kqworkloop {struct kqrequest kqwl_request; } ;
struct kqueue {int kq_state; } ;
struct knote {int kn_qos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct kqueue* FUNC_0 (struct knote*) ;
 int FUNC_1 (struct kqworkloop*) ;
 int FUNC_2 (struct kqworkloop*) ;
 int FUNC_3 (struct kqueue*,struct kqrequest*,int ) ;

__attribute__((used)) static void
FUNC_4(struct knote *VAR_4)
{
 struct kqueue *VAR_5 = FUNC_0(VAR_4);


 if ((VAR_4->kn_qos & VAR_3) &&
   (VAR_5->kq_state & VAR_2)) {
  struct kqworkloop *VAR_6 = (struct kqworkloop *)VAR_5;
  struct kqrequest *VAR_7 = &VAR_6->kqwl_request;





  if (VAR_7->kqr_state & VAR_0) {
   return;
  }

  FUNC_1(VAR_6);
  VAR_7->kqr_state |= VAR_0;
  if (!VAR_7->kqr_thread && (VAR_7->kqr_state & VAR_1)) {
   FUNC_3(VAR_5, VAR_7, VAR_7->kqr_req.tr_qos);
  }
  FUNC_2(VAR_6);
 }
}
