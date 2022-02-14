
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lme2510_state {int i2c_talk_onoff; TYPE_1__* lme_urb; int buffer; void* usb_buffer; scalar_t__ signal_sn; scalar_t__ signal_level; scalar_t__ signal_lock; } ;
struct dvb_usb_device {int rc_dev; int udev; struct dvb_usb_adapter* adapter; struct lme2510_state* priv; } ;
struct dvb_usb_adapter {scalar_t__ feedcount; int stream; } ;
struct TYPE_2__ {int transfer_dma; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;

void *FUNC_5(struct dvb_usb_device *VAR_0)
{
 struct lme2510_state *VAR_1 = VAR_0->priv;
 struct dvb_usb_adapter *VAR_2 = &VAR_0->adapter[0];
 void *VAR_3 = ((void*)0);

 if (VAR_2 != ((void*)0)) {
  FUNC_1(&VAR_2->stream);
  VAR_2->feedcount = 0;
 }

 if (VAR_1->lme_urb != ((void*)0)) {
  VAR_1->i2c_talk_onoff = 1;
  VAR_1->signal_lock = 0;
  VAR_1->signal_level = 0;
  VAR_1->signal_sn = 0;
  VAR_3 = VAR_1->usb_buffer;
  FUNC_4(VAR_1->lme_urb);
  FUNC_3(VAR_0->udev, 5000, VAR_1->buffer,
      VAR_1->lme_urb->transfer_dma);
  FUNC_0("Interupt Service Stopped");
  FUNC_2(VAR_0->rc_dev);
  FUNC_0("Remote Stopped");
 }
 return VAR_3;
}
