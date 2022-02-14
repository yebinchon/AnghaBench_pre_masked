
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_request {int (* complete ) (struct usb_ep*,struct usb_request*) ;int status; scalar_t__ length; scalar_t__ actual; struct dummy* context; int buf; } ;
struct usb_ep {int name; } ;
struct dummy_request {int queue; struct usb_request req; } ;
struct dummy_ep {int queue; TYPE_1__* desc; } ;
struct dummy {int lock; int fifo_buf; struct dummy_request fifo_req; int driver; } ;
typedef int gfp_t ;
struct TYPE_2__ {int bEndpointAddress; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,struct dummy_ep*,struct usb_request*,int ,scalar_t__,int ) ;
 int VAR_5 ;
 struct dummy* FUNC_1 (struct dummy_ep*) ;
 int FUNC_2 (struct usb_ep*,struct usb_request*) ;
 int FUNC_3 (struct dummy*) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (struct usb_ep*,struct usb_request*) ;
 int FUNC_12 (struct dummy*) ;
 struct dummy_ep* FUNC_13 (struct usb_ep*) ;
 struct dummy_request* FUNC_14 (struct usb_request*) ;

__attribute__((used)) static int
FUNC_15 (struct usb_ep *VAR_6, struct usb_request *VAR_7,
  gfp_t VAR_8)
{
 struct dummy_ep *VAR_9;
 struct dummy_request *VAR_10;
 struct dummy *VAR_11;
 unsigned long VAR_12;

 VAR_10 = FUNC_14 (VAR_7);
 if (!VAR_7 || !FUNC_5 (&VAR_10->queue) || !VAR_7->complete)
  return -VAR_1;

 VAR_9 = FUNC_13 (VAR_6);
 if (!VAR_6 || (!VAR_9->desc && VAR_6->name != VAR_5))
  return -VAR_1;

 VAR_11 = FUNC_1 (VAR_9);
 if (!VAR_11->driver || !FUNC_3 (VAR_11))
  return -VAR_2;






 VAR_7->status = -VAR_0;
 VAR_7->actual = 0;
 FUNC_8 (&VAR_11->lock, VAR_12);


 if (VAR_9->desc && (VAR_9->desc->bEndpointAddress & VAR_4) &&
   FUNC_5 (&VAR_11->fifo_req.queue) &&
   FUNC_5 (&VAR_9->queue) &&
   VAR_7->length <= VAR_3) {
  VAR_10 = &VAR_11->fifo_req;
  VAR_10->req = *VAR_7;
  VAR_10->req.buf = VAR_11->fifo_buf;
  FUNC_6 (VAR_11->fifo_buf, VAR_7->buf, VAR_7->length);
  VAR_10->req.context = VAR_11;
  VAR_10->req.complete = FUNC_2;

  FUNC_4(&VAR_10->queue, &VAR_9->queue);
  FUNC_9 (&VAR_11->lock);
  VAR_7->actual = VAR_7->length;
  VAR_7->status = 0;
  VAR_7->complete (VAR_6, VAR_7);
  FUNC_7 (&VAR_11->lock);
 } else
  FUNC_4(&VAR_10->queue, &VAR_9->queue);
 FUNC_10 (&VAR_11->lock, VAR_12);




 return 0;
}
