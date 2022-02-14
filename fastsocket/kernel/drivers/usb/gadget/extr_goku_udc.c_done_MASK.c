
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct goku_udc {int lock; int pdev; } ;
struct TYPE_5__ {int status; int (* complete ) (TYPE_1__*,TYPE_2__*) ;int length; int actual; int dma; } ;
struct goku_request {TYPE_2__ req; scalar_t__ mapped; int queue; } ;
struct TYPE_4__ {int name; } ;
struct goku_ep {unsigned int stopped; TYPE_1__ ep; scalar_t__ is_in; struct goku_udc* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct goku_udc*,char*,int ,TYPE_2__*,int,int ,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_7(struct goku_ep *VAR_5, struct goku_request *VAR_6, int VAR_7)
{
 struct goku_udc *VAR_8;
 unsigned VAR_9 = VAR_5->stopped;

 FUNC_2(&VAR_6->queue);

 if (FUNC_1(VAR_6->req.status == -VAR_1))
  VAR_6->req.status = VAR_7;
 else
  VAR_7 = VAR_6->req.status;

 VAR_8 = VAR_5->dev;
 if (VAR_6->mapped) {
  FUNC_3(VAR_8->pdev, VAR_6->req.dma, VAR_6->req.length,
   VAR_5->is_in ? VAR_4 : VAR_3);
  VAR_6->req.dma = VAR_0;
  VAR_6->mapped = 0;
 }


 if (VAR_7 && VAR_7 != -VAR_2)

  FUNC_0(VAR_8, "complete %s req %p stat %d len %u/%u\n",
   VAR_5->ep.name, &VAR_6->req, VAR_7,
   VAR_6->req.actual, VAR_6->req.length);


 VAR_5->stopped = 1;
 FUNC_5(&VAR_8->lock);
 VAR_6->req.complete(&VAR_5->ep, &VAR_6->req);
 FUNC_4(&VAR_8->lock);
 VAR_5->stopped = VAR_9;
}
