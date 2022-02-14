
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int status; int (* complete ) (TYPE_4__*,TYPE_5__*) ;int length; int actual; int dma; } ;
struct omap_req {TYPE_5__ req; scalar_t__ mapped; int queue; } ;
struct TYPE_10__ {int name; } ;
struct omap_ep {unsigned int stopped; int bEndpointAddress; TYPE_3__* udc; TYPE_4__ ep; scalar_t__ has_dma; } ;
struct TYPE_7__ {int parent; } ;
struct TYPE_8__ {TYPE_1__ dev; } ;
struct TYPE_9__ {int lock; TYPE_2__ gadget; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int ,TYPE_5__*,int,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_4__*,TYPE_5__*) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void
FUNC_7(struct omap_ep *VAR_7, struct omap_req *VAR_8, int VAR_9)
{
 unsigned VAR_10 = VAR_7->stopped;

 FUNC_3(&VAR_8->queue);

 if (VAR_8->req.status == -VAR_3)
  VAR_8->req.status = VAR_9;
 else
  VAR_9 = VAR_8->req.status;

 if (VAR_6 && VAR_7->has_dma) {
  if (VAR_8->mapped) {
   FUNC_2(VAR_7->udc->gadget.dev.parent,
    VAR_8->req.dma, VAR_8->req.length,
    (VAR_7->bEndpointAddress & VAR_5)
     ? VAR_2
     : VAR_1);
   VAR_8->req.dma = VAR_0;
   VAR_8->mapped = 0;
  } else
   FUNC_1(VAR_7->udc->gadget.dev.parent,
    VAR_8->req.dma, VAR_8->req.length,
    (VAR_7->bEndpointAddress & VAR_5)
     ? VAR_2
     : VAR_1);
 }


 if (VAR_9 && VAR_9 != -VAR_4)

  FUNC_0("complete %s req %p stat %d len %u/%u\n",
   VAR_7->ep.name, &VAR_8->req, VAR_9,
   VAR_8->req.actual, VAR_8->req.length);


 VAR_7->stopped = 1;
 FUNC_5(&VAR_7->udc->lock);
 VAR_8->req.complete(&VAR_7->ep, &VAR_8->req);
 FUNC_4(&VAR_7->udc->lock);
 VAR_7->stopped = VAR_10;
}
