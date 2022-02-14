
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_request {scalar_t__ actual; scalar_t__ status; struct kiocb_priv* buf; struct kiocb* context; } ;
struct usb_ep {int name; } ;
struct kiocb_priv {scalar_t__ actual; struct kiocb_priv* buf; int * iv; struct ep_data* epdata; int * req; } ;
struct kiocb {struct kiocb_priv* private; } ;
struct ep_data {TYPE_1__* dev; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (TYPE_1__*,char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct kiocb*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct kiocb_priv*) ;
 int FUNC_3 (struct kiocb*) ;
 int FUNC_4 (struct ep_data*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct usb_ep*,struct usb_request*) ;

__attribute__((used)) static void FUNC_9(struct usb_ep *VAR_0, struct usb_request *VAR_1)
{
 struct kiocb *VAR_2 = VAR_1->context;
 struct kiocb_priv *VAR_3 = VAR_2->private;
 struct ep_data *VAR_4 = VAR_3->epdata;


 FUNC_5(&VAR_4->dev->lock);
 VAR_3->req = ((void*)0);
 VAR_3->epdata = ((void*)0);





 if (VAR_3->iv == ((void*)0) || FUNC_7(VAR_1->actual == 0)) {
  FUNC_2(VAR_1->buf);
  FUNC_2(VAR_3);
  VAR_2->private = ((void*)0);

  FUNC_1(VAR_2, VAR_1->actual ? VAR_1->actual : VAR_1->status,
    VAR_1->status);
 } else {

  if (FUNC_7(0 != VAR_1->status))
   FUNC_0(VAR_4->dev, "%s fault %d len %d\n",
    VAR_0->name, VAR_1->status, VAR_1->actual);

  VAR_3->buf = VAR_1->buf;
  VAR_3->actual = VAR_1->actual;
  FUNC_3(VAR_2);
 }
 FUNC_6(&VAR_4->dev->lock);

 FUNC_8(VAR_0, VAR_1);
 FUNC_4(VAR_4);
}
