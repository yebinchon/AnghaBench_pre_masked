
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_5__* cq; TYPE_4__* xrcd; } ;
struct TYPE_10__ {TYPE_2__ xrc; } ;
struct ib_srq_init_attr {scalar_t__ srq_type; TYPE_3__ ext; int srq_context; int event_handler; } ;
struct TYPE_13__ {TYPE_5__* cq; TYPE_4__* xrcd; } ;
struct TYPE_14__ {TYPE_6__ xrc; } ;
struct ib_srq {scalar_t__ srq_type; int usecnt; TYPE_7__ ext; int srq_context; int event_handler; int * uobject; struct ib_pd* pd; TYPE_1__* device; } ;
struct ib_pd {int usecnt; TYPE_1__* device; } ;
struct TYPE_12__ {int usecnt; } ;
struct TYPE_11__ {int usecnt; } ;
struct TYPE_8__ {struct ib_srq* (* create_srq ) (struct ib_pd*,struct ib_srq_init_attr*,int *) ;} ;


 int VAR_0 ;
 struct ib_srq* FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct ib_srq*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 struct ib_srq* FUNC_4 (struct ib_pd*,struct ib_srq_init_attr*,int *) ;

struct ib_srq *FUNC_5(struct ib_pd *VAR_2,
        struct ib_srq_init_attr *VAR_3)
{
 struct ib_srq *VAR_4;

 if (!VAR_2->device->create_srq)
  return FUNC_0(-VAR_0);

 VAR_4 = VAR_2->device->create_srq(VAR_2, VAR_3, ((void*)0));

 if (!FUNC_1(VAR_4)) {
  VAR_4->device = VAR_2->device;
  VAR_4->pd = VAR_2;
  VAR_4->uobject = ((void*)0);
  VAR_4->event_handler = VAR_3->event_handler;
  VAR_4->srq_context = VAR_3->srq_context;
  VAR_4->srq_type = VAR_3->srq_type;
  if (VAR_4->srq_type == VAR_1) {
   VAR_4->ext.xrc.xrcd = VAR_3->ext.xrc.xrcd;
   VAR_4->ext.xrc.cq = VAR_3->ext.xrc.cq;
   FUNC_2(&VAR_4->ext.xrc.xrcd->usecnt);
   FUNC_2(&VAR_4->ext.xrc.cq->usecnt);
  }
  FUNC_2(&VAR_2->usecnt);
  FUNC_3(&VAR_4->usecnt, 0);
 }

 return VAR_4;
}
