
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t head; size_t tail; char* buf; } ;
struct iforce {int xmit_lock; TYPE_2__* dev; int xmit_flags; TYPE_3__* out; TYPE_1__ xmit; int usbdev; } ;
struct TYPE_6__ {int transfer_buffer_length; scalar_t__ transfer_buffer; int dev; } ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (size_t,size_t,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (size_t,int) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (scalar_t__,int*,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (TYPE_3__*,int ) ;

void FUNC_8(struct iforce *VAR_3)
{
 int VAR_4, VAR_5;
 unsigned long VAR_6;

 FUNC_5(&VAR_3->xmit_lock, VAR_6);

 if (VAR_3->xmit.head == VAR_3->xmit.tail) {
  FUNC_2(VAR_1, VAR_3->xmit_flags);
  FUNC_6(&VAR_3->xmit_lock, VAR_6);
  return;
 }

 ((char *)VAR_3->out->transfer_buffer)[0] = VAR_3->xmit.buf[VAR_3->xmit.tail];
 FUNC_1(VAR_3->xmit.tail, 1);
 VAR_4 = VAR_3->xmit.buf[VAR_3->xmit.tail];
 FUNC_1(VAR_3->xmit.tail, 1);

 VAR_3->out->transfer_buffer_length = VAR_4 + 1;
 VAR_3->out->dev = VAR_3->usbdev;


 VAR_5 = FUNC_0(VAR_3->xmit.head, VAR_3->xmit.tail, VAR_2);
 if (VAR_4 < VAR_5) VAR_5=VAR_4;

 FUNC_4(VAR_3->out->transfer_buffer + 1,
        &VAR_3->xmit.buf[VAR_3->xmit.tail],
        VAR_5);
 if (VAR_4 != VAR_5) {
  FUNC_4(VAR_3->out->transfer_buffer + 1 + VAR_5,
         &VAR_3->xmit.buf[0],
         VAR_4-VAR_5);
 }
 FUNC_1(VAR_3->xmit.tail, VAR_4);

 if ( (VAR_4=FUNC_7(VAR_3->out, VAR_0)) ) {
  FUNC_2(VAR_1, VAR_3->xmit_flags);
  FUNC_3(&VAR_3->dev->dev, "usb_submit_urb failed %d\n", VAR_4);
 }




 FUNC_6(&VAR_3->xmit_lock, VAR_6);
}
