
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_request {int buf; } ;
struct usb_ep {int name; } ;
struct TYPE_3__ {scalar_t__ dma; int list; int length; int buf; int status; scalar_t__ actual; } ;
struct musb_request {int mapped; TYPE_1__ request; scalar_t__ tx; int epnum; struct musb_ep* ep; struct musb* musb; } ;
struct TYPE_4__ {int * next; } ;
struct musb_ep {TYPE_2__ req_list; int busy; int desc; scalar_t__ dma; scalar_t__ is_in; int current_epnum; struct musb* musb; } ;
struct musb {int lock; int controller; } ;
typedef int gfp_t ;


 int FUNC_0 (int,char*,struct usb_request*,struct usb_request*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int FUNC_5 (struct musb*,struct musb_request*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 struct musb_ep* FUNC_8 (struct usb_ep*) ;
 struct musb_request* FUNC_9 (struct usb_request*) ;

__attribute__((used)) static int FUNC_10(struct usb_ep *VAR_7, struct usb_request *VAR_8,
   gfp_t VAR_9)
{
 struct musb_ep *VAR_10;
 struct musb_request *VAR_11;
 struct musb *VAR_12;
 int VAR_13 = 0;
 unsigned long VAR_14;

 if (!VAR_7 || !VAR_8)
  return -VAR_4;
 if (!VAR_8->buf)
  return -VAR_5;

 VAR_10 = FUNC_8(VAR_7);
 VAR_12 = VAR_10->musb;

 VAR_11 = FUNC_9(VAR_8);
 VAR_11->musb = VAR_12;

 if (VAR_11->ep != VAR_10)
  return -VAR_4;

 FUNC_0(4, "<== to %s request=%p\n", VAR_7->name, VAR_8);


 VAR_11->request.actual = 0;
 VAR_11->request.status = -VAR_3;
 VAR_11->epnum = VAR_10->current_epnum;
 VAR_11->tx = VAR_10->is_in;

 if (FUNC_3() && VAR_10->dma) {
  if (VAR_11->request.dma == VAR_0) {
   VAR_11->request.dma = FUNC_1(
     VAR_12->controller,
     VAR_11->request.buf,
     VAR_11->request.length,
     VAR_11->tx
      ? VAR_2
      : VAR_1);
   VAR_11->mapped = 1;
  } else {
   FUNC_2(VAR_12->controller,
     VAR_11->request.dma,
     VAR_11->request.length,
     VAR_11->tx
      ? VAR_2
      : VAR_1);
   VAR_11->mapped = 0;
  }
 } else if (!VAR_8->buf) {
  return -VAR_5;
 } else
  VAR_11->mapped = 0;

 FUNC_6(&VAR_12->lock, VAR_14);


 if (!VAR_10->desc) {
  FUNC_0(4, "req %p queued to %s while ep %s\n",
    VAR_8, VAR_7->name, "disabled");
  VAR_13 = -VAR_6;
  goto cleanup;
 }


 FUNC_4(&(VAR_11->request.list), &(VAR_10->req_list));


 if (!VAR_10->busy && &VAR_11->request.list == VAR_10->req_list.next)
  FUNC_5(VAR_12, VAR_11);

cleanup:
 FUNC_7(&VAR_12->lock, VAR_14);
 return VAR_13;
}
