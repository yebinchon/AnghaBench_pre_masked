
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_cardstate {int bulk_out_endpointAddr; int busy; int bulk_out_urb; int udev; int bulk_out_size; } ;
struct cmdbuf_t {scalar_t__ len; scalar_t__ offset; scalar_t__ buf; scalar_t__ wake_tasklet; int * prev; struct cmdbuf_t* next; } ;
struct TYPE_2__ {struct usb_cardstate* usb; } ;
struct cardstate {int dev; int lock; scalar_t__ connected; int cmdlock; scalar_t__ curlen; int * lastcmdbuf; struct cmdbuf_t* cmdbuf; int cmdbytes; TYPE_1__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int,...) ;
 int VAR_4 ;
 int FUNC_2 (struct cmdbuf_t*) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,int ,int ,scalar_t__,int,int ,struct cardstate*) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int FUNC_10(struct cardstate *VAR_5, struct cmdbuf_t *VAR_6)
{
 struct cmdbuf_t *VAR_7;
 unsigned long VAR_8;
 int VAR_9;
 int VAR_10 = -VAR_2;
 struct usb_cardstate *VAR_11 = VAR_5->hw.usb;

 do {
  if (!VAR_6->len) {
   VAR_7 = VAR_6;

   FUNC_4(&VAR_5->cmdlock, VAR_8);
   VAR_5->cmdbytes -= VAR_5->curlen;
   FUNC_1(VAR_0, "send_cb: sent %u bytes, %u left",
    VAR_5->curlen, VAR_5->cmdbytes);
   VAR_5->cmdbuf = VAR_6 = VAR_6->next;
   if (VAR_6) {
    VAR_6->prev = ((void*)0);
    VAR_5->curlen = VAR_6->len;
   } else {
    VAR_5->lastcmdbuf = ((void*)0);
    VAR_5->curlen = 0;
   }
   FUNC_5(&VAR_5->cmdlock, VAR_8);

   if (VAR_7->wake_tasklet)
    FUNC_6(VAR_7->wake_tasklet);
   FUNC_2(VAR_7);
  }
  if (VAR_6) {
   VAR_9 = FUNC_3(VAR_6->len, VAR_11->bulk_out_size);
   FUNC_1(VAR_0, "send_cb: send %d bytes", VAR_9);

   FUNC_7(VAR_11->bulk_out_urb, VAR_11->udev,
       FUNC_8(VAR_11->udev,
          VAR_11->bulk_out_endpointAddr & 0x0f),
       VAR_6->buf + VAR_6->offset, VAR_9,
       VAR_4, VAR_5);

   VAR_6->offset += VAR_9;
   VAR_6->len -= VAR_9;
   VAR_11->busy = 1;

   FUNC_4(&VAR_5->lock, VAR_8);
   VAR_10 = VAR_5->connected ? FUNC_9(VAR_11->bulk_out_urb, VAR_3) : -VAR_1;
   FUNC_5(&VAR_5->lock, VAR_8);

   if (VAR_10) {
    VAR_11->busy = 0;
    FUNC_0(VAR_5->dev,
     "could not submit urb (error %d)\n",
     -VAR_10);
    VAR_6->len = 0;

   }
  }
 } while (VAR_6 && VAR_10);

 return VAR_10;
}
