
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct fsl_udc {int td_pool; } ;
struct TYPE_11__ {int status; int (* complete ) (TYPE_4__*,TYPE_5__*) ;int length; int actual; int dma; } ;
struct fsl_req {int dtd_count; TYPE_5__ req; scalar_t__ mapped; struct ep_td_struct* head; int queue; } ;
struct TYPE_10__ {int name; } ;
struct fsl_ep {unsigned char stopped; TYPE_3__* udc; TYPE_4__ ep; } ;
struct ep_td_struct {int td_dma; struct ep_td_struct* next_td_virt; } ;
struct TYPE_7__ {int parent; } ;
struct TYPE_8__ {TYPE_1__ dev; } ;
struct TYPE_9__ {int lock; TYPE_2__ gadget; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ,TYPE_5__*,int,int ,int ) ;
 int FUNC_1 (int ,struct ep_td_struct*,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct fsl_ep*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_4__*,TYPE_5__*) ;

__attribute__((used)) static void FUNC_9(struct fsl_ep *VAR_5, struct fsl_req *VAR_6, int VAR_7)
{
 struct fsl_udc *VAR_8 = ((void*)0);
 unsigned char VAR_9 = VAR_5->stopped;
 struct ep_td_struct *VAR_10, *VAR_11;
 int VAR_12;

 VAR_8 = (struct fsl_udc *)VAR_5->udc;

 FUNC_5(&VAR_6->queue);


 if (VAR_6->req.status == -VAR_3)
  VAR_6->req.status = VAR_7;
 else
  VAR_7 = VAR_6->req.status;


 VAR_11 = VAR_6->head;
 for (VAR_12 = 0; VAR_12 < VAR_6->dtd_count; VAR_12++) {
  VAR_10 = VAR_11;
  if (VAR_12 != VAR_6->dtd_count - 1) {
   VAR_11 = VAR_10->next_td_virt;
  }
  FUNC_1(VAR_8->td_pool, VAR_10, VAR_10->td_dma);
 }

 if (VAR_6->mapped) {
  FUNC_3(VAR_5->udc->gadget.dev.parent,
   VAR_6->req.dma, VAR_6->req.length,
   FUNC_4(VAR_5)
    ? VAR_2
    : VAR_1);
  VAR_6->req.dma = VAR_0;
  VAR_6->mapped = 0;
 } else
  FUNC_2(VAR_5->udc->gadget.dev.parent,
   VAR_6->req.dma, VAR_6->req.length,
   FUNC_4(VAR_5)
    ? VAR_2
    : VAR_1);

 if (VAR_7 && (VAR_7 != -VAR_4))
  FUNC_0("complete %s req %p stat %d len %u/%u",
   VAR_5->ep.name, &VAR_6->req, VAR_7,
   VAR_6->req.actual, VAR_6->req.length);

 VAR_5->stopped = 1;

 FUNC_7(&VAR_5->udc->lock);


 if (VAR_6->req.complete)
  VAR_6->req.complete(&VAR_5->ep, &VAR_6->req);

 FUNC_6(&VAR_5->udc->lock);
 VAR_5->stopped = VAR_9;
}
