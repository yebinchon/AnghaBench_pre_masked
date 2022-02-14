
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usba_udc {int lock; TYPE_1__* pdev; } ;
struct TYPE_6__ {int status; int (* complete ) (TYPE_2__*,TYPE_3__*) ;int actual; int dma; int length; } ;
struct usba_request {TYPE_3__ req; scalar_t__ mapped; int queue; } ;
struct TYPE_5__ {int name; } ;
struct usba_ep {TYPE_2__ ep; scalar_t__ is_in; struct usba_udc* udc; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int,char*,int ,struct usba_request*,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_7(struct usba_ep *VAR_6, struct usba_request *VAR_7, int VAR_8)
{
 struct usba_udc *VAR_9 = VAR_6->udc;

 FUNC_1(!FUNC_3(&VAR_7->queue));

 if (VAR_7->req.status == -VAR_5)
  VAR_7->req.status = VAR_8;

 if (VAR_7->mapped) {
  FUNC_2(
   &VAR_9->pdev->dev, VAR_7->req.dma, VAR_7->req.length,
   VAR_6->is_in ? VAR_4 : VAR_3);
  VAR_7->req.dma = VAR_2;
  VAR_7->mapped = 0;
 }

 FUNC_0(VAR_0 | VAR_1,
  "%s: req %p complete: status %d, actual %u\n",
  VAR_6->ep.name, VAR_7, VAR_7->req.status, VAR_7->req.actual);

 FUNC_5(&VAR_9->lock);
 VAR_7->req.complete(&VAR_6->ep, &VAR_7->req);
 FUNC_4(&VAR_9->lock);
}
