
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* qp; TYPE_1__* srq; } ;
struct ib_event {int event; TYPE_2__ element; int * device; } ;
struct ehca_shca {int ib_device; } ;
struct TYPE_6__ {int qp_context; int (* event_handler ) (struct ib_event*,int ) ;} ;
struct TYPE_4__ {int srq_context; int (* event_handler ) (struct ib_event*,int ) ;} ;
struct ehca_qp {scalar_t__ ext_type; TYPE_3__ ib_qp; TYPE_1__ ib_srq; int mig_armed; } ;
typedef enum ib_event_type { ____Placeholder_ib_event_type } ib_event_type ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ib_event*,int ) ;
 int FUNC_1 (struct ib_event*,int ) ;

__attribute__((used)) static void FUNC_2(struct ehca_shca *VAR_2, struct ehca_qp *VAR_3,
         enum ib_event_type VAR_4)
{
 struct ib_event VAR_5;


 if (VAR_4 == VAR_1 && !VAR_3->mig_armed)
  return;

 VAR_5.device = &VAR_2->ib_device;
 VAR_5.event = VAR_4;

 if (VAR_3->ext_type == VAR_0) {
  if (!VAR_3->ib_srq.event_handler)
   return;

  VAR_5.element.srq = &VAR_3->ib_srq;
  VAR_3->ib_srq.event_handler(&VAR_5, VAR_3->ib_srq.srq_context);
 } else {
  if (!VAR_3->ib_qp.event_handler)
   return;

  VAR_5.element.qp = &VAR_3->ib_qp;
  VAR_3->ib_qp.event_handler(&VAR_5, VAR_3->ib_qp.qp_context);
 }
}
