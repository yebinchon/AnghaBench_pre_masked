
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct lme2510_state {TYPE_2__* lme_urb; int * buffer; } ;
struct dvb_usb_adapter {TYPE_1__* dev; } ;
struct TYPE_6__ {int transfer_flags; int transfer_dma; } ;
struct TYPE_5__ {int udev; struct lme2510_state* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 TYPE_2__* FUNC_1 (int ,int ) ;
 int * FUNC_2 (int ,int,int ,int *) ;
 int FUNC_3 (TYPE_2__*,int ,int ,int *,int,int ,struct dvb_usb_adapter*,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_6(struct dvb_usb_adapter *VAR_4)
{
 struct lme2510_state *VAR_5 = VAR_4->dev->priv;

 VAR_5->lme_urb = FUNC_1(0, VAR_1);

 if (VAR_5->lme_urb == ((void*)0))
   return -VAR_0;

 VAR_5->buffer = FUNC_2(VAR_4->dev->udev, 5000, VAR_1,
     &VAR_5->lme_urb->transfer_dma);

 if (VAR_5->buffer == ((void*)0))
   return -VAR_0;

 FUNC_3(VAR_5->lme_urb,
    VAR_4->dev->udev,
    FUNC_4(VAR_4->dev->udev, 0xa),
    VAR_5->buffer,
    4096,
    VAR_3,
    VAR_4,
    11);

 VAR_5->lme_urb->transfer_flags |= VAR_2;

 FUNC_5(VAR_5->lme_urb, VAR_1);
 FUNC_0("INT Interupt Service Started");

 return 0;
}
