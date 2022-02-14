
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct usb_function {TYPE_1__* config; } ;
struct usb_composite_dev {int gadget; } ;
struct net_device {int dummy; } ;
struct TYPE_14__ {int is_zlp_ok; int cdc_filter; void* out; void* in; TYPE_2__* in_ep; } ;
struct TYPE_12__ {int out; int in; int notify; } ;
struct TYPE_11__ {int out; int in; int notify; } ;
struct f_ecm {unsigned int ctrl_id; unsigned int data_id; TYPE_7__ port; TYPE_4__ fs; TYPE_3__ hs; TYPE_5__* notify; void* notify_desc; } ;
struct TYPE_13__ {struct f_ecm* driver_data; } ;
struct TYPE_10__ {scalar_t__ driver_data; } ;
struct TYPE_9__ {struct usb_composite_dev* cdev; } ;


 int FUNC_0 (struct usb_composite_dev*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct usb_composite_dev*,char*,unsigned int) ;
 int FUNC_4 (struct f_ecm*) ;
 void* FUNC_5 (int ,int ,int ) ;
 struct f_ecm* FUNC_6 (struct usb_function*) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 struct net_device* FUNC_9 (TYPE_7__*) ;
 int FUNC_10 (TYPE_7__*) ;
 int FUNC_11 (TYPE_5__*) ;
 int FUNC_12 (TYPE_5__*,void*) ;

__attribute__((used)) static int FUNC_13(struct usb_function *VAR_2, unsigned VAR_3, unsigned VAR_4)
{
 struct f_ecm *VAR_5 = FUNC_6(VAR_2);
 struct usb_composite_dev *VAR_6 = VAR_2->config->cdev;


 if (VAR_3 == VAR_5->ctrl_id) {
  if (VAR_4 != 0)
   goto fail;

  if (VAR_5->notify->driver_data) {
   FUNC_3(VAR_6, "reset ecm control %d\n", VAR_3);
   FUNC_11(VAR_5->notify);
  } else {
   FUNC_3(VAR_6, "init ecm ctrl %d\n", VAR_3);
   VAR_5->notify_desc = FUNC_5(VAR_6->gadget,
     VAR_5->hs.notify,
     VAR_5->fs.notify);
  }
  FUNC_12(VAR_5->notify, VAR_5->notify_desc);
  VAR_5->notify->driver_data = VAR_5;


 } else if (VAR_3 == VAR_5->data_id) {
  if (VAR_4 > 1)
   goto fail;

  if (VAR_5->port.in_ep->driver_data) {
   FUNC_0(VAR_6, "reset ecm\n");
   FUNC_10(&VAR_5->port);
  }

  if (!VAR_5->port.in) {
   FUNC_0(VAR_6, "init ecm\n");
   VAR_5->port.in = FUNC_5(VAR_6->gadget,
     VAR_5->hs.in, VAR_5->fs.in);
   VAR_5->port.out = FUNC_5(VAR_6->gadget,
     VAR_5->hs.out, VAR_5->fs.out);
  }




  if (VAR_4 == 1) {
   struct net_device *VAR_7;





   VAR_5->port.is_zlp_ok = !(
       FUNC_8(VAR_6->gadget)
    || FUNC_7(VAR_6->gadget)
    );
   VAR_5->port.cdc_filter = VAR_0;
   FUNC_0(VAR_6, "activate ecm\n");
   VAR_7 = FUNC_9(&VAR_5->port);
   if (FUNC_1(VAR_7))
    return FUNC_2(VAR_7);
  }







  FUNC_4(VAR_5);
 } else
  goto fail;

 return 0;
fail:
 return -VAR_1;
}
