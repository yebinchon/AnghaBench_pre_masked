
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ib_qp_init_attr {scalar_t__ qp_type; TYPE_3__* send_cq; TYPE_2__* srq; TYPE_1__* recv_cq; struct ib_qp* qp_context; int event_handler; TYPE_4__* xrcd; } ;
struct ib_qp {scalar_t__ qp_type; TYPE_4__* xrcd; TYPE_3__* send_cq; struct ib_pd* pd; TYPE_2__* srq; TYPE_1__* recv_cq; struct ib_qp* qp_context; int event_handler; struct ib_device* device; int open_list; int usecnt; int * uobject; struct ib_qp* real_qp; } ;
struct ib_pd {int usecnt; struct ib_device* device; } ;
struct ib_device {int (* destroy_qp ) (struct ib_qp*) ;struct ib_qp* (* create_qp ) (struct ib_pd*,struct ib_qp_init_attr*,int *) ;} ;
struct TYPE_8__ {int usecnt; struct ib_device* device; } ;
struct TYPE_7__ {int usecnt; } ;
struct TYPE_6__ {int usecnt; } ;
struct TYPE_5__ {int usecnt; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ib_qp*) ;
 int FUNC_2 (TYPE_4__*,struct ib_qp*) ;
 struct ib_qp* FUNC_3 (struct ib_qp*,int ,struct ib_qp*) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 struct ib_qp* FUNC_6 (struct ib_pd*,struct ib_qp_init_attr*,int *) ;
 int FUNC_7 (struct ib_qp*) ;

struct ib_qp *FUNC_8(struct ib_pd *VAR_3,
      struct ib_qp_init_attr *VAR_4)
{
 struct ib_qp *VAR_5, *VAR_6;
 struct ib_device *VAR_7;

 VAR_7 = VAR_3 ? VAR_3->device : VAR_4->xrcd->device;
 VAR_5 = VAR_7->create_qp(VAR_3, VAR_4, ((void*)0));

 if (!FUNC_1(VAR_5)) {
  VAR_5->device = VAR_7;
  VAR_5->real_qp = VAR_5;
  VAR_5->uobject = ((void*)0);
  VAR_5->qp_type = VAR_4->qp_type;

  FUNC_5(&VAR_5->usecnt, 0);
  if (VAR_4->qp_type == VAR_1) {
   VAR_5->event_handler = VAR_2;
   VAR_5->qp_context = VAR_5;
   VAR_5->pd = ((void*)0);
   VAR_5->send_cq = VAR_5->recv_cq = ((void*)0);
   VAR_5->srq = ((void*)0);
   VAR_5->xrcd = VAR_4->xrcd;
   FUNC_4(&VAR_4->xrcd->usecnt);
   FUNC_0(&VAR_5->open_list);

   VAR_6 = VAR_5;
   VAR_5 = FUNC_3(VAR_6, VAR_4->event_handler,
       VAR_4->qp_context);
   if (!FUNC_1(VAR_5))
    FUNC_2(VAR_4->xrcd, VAR_6);
   else
    VAR_6->device->destroy_qp(VAR_6);
  } else {
   VAR_5->event_handler = VAR_4->event_handler;
   VAR_5->qp_context = VAR_4->qp_context;
   if (VAR_4->qp_type == VAR_0) {
    VAR_5->recv_cq = ((void*)0);
    VAR_5->srq = ((void*)0);
   } else {
    VAR_5->recv_cq = VAR_4->recv_cq;
    FUNC_4(&VAR_4->recv_cq->usecnt);
    VAR_5->srq = VAR_4->srq;
    if (VAR_5->srq)
     FUNC_4(&VAR_4->srq->usecnt);
   }

   VAR_5->pd = VAR_3;
   VAR_5->send_cq = VAR_4->send_cq;
   VAR_5->xrcd = ((void*)0);

   FUNC_4(&VAR_3->usecnt);
   FUNC_4(&VAR_4->send_cq->usecnt);
  }
 }

 return VAR_5;
}
