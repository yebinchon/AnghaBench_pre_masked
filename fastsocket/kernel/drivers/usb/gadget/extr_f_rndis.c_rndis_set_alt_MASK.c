
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
struct f_rndis {unsigned int ctrl_id; unsigned int data_id; TYPE_7__ port; int config; TYPE_4__ fs; TYPE_3__ hs; TYPE_5__* notify; void* notify_desc; } ;
struct TYPE_13__ {struct f_rndis* driver_data; } ;
struct TYPE_10__ {scalar_t__ driver_data; } ;
struct TYPE_9__ {struct usb_composite_dev* cdev; } ;


 int FUNC_0 (struct usb_composite_dev*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct usb_composite_dev*,char*,unsigned int) ;
 void* FUNC_4 (int ,int ,int ) ;
 struct f_rndis* FUNC_5 (struct usb_function*) ;
 struct net_device* FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (TYPE_7__*) ;
 int FUNC_8 (int ,struct net_device*,int *) ;
 int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (TYPE_5__*,void*) ;

__attribute__((used)) static int FUNC_11(struct usb_function *VAR_1, unsigned VAR_2, unsigned VAR_3)
{
 struct f_rndis *VAR_4 = FUNC_5(VAR_1);
 struct usb_composite_dev *VAR_5 = VAR_1->config->cdev;



 if (VAR_2 == VAR_4->ctrl_id) {
  if (VAR_4->notify->driver_data) {
   FUNC_3(VAR_5, "reset rndis control %d\n", VAR_2);
   FUNC_9(VAR_4->notify);
  } else {
   FUNC_3(VAR_5, "init rndis ctrl %d\n", VAR_2);
   VAR_4->notify_desc = FUNC_4(VAR_5->gadget,
     VAR_4->hs.notify,
     VAR_4->fs.notify);
  }
  FUNC_10(VAR_4->notify, VAR_4->notify_desc);
  VAR_4->notify->driver_data = VAR_4;

 } else if (VAR_2 == VAR_4->data_id) {
  struct net_device *VAR_6;

  if (VAR_4->port.in_ep->driver_data) {
   FUNC_0(VAR_5, "reset rndis\n");
   FUNC_7(&VAR_4->port);
  }

  if (!VAR_4->port.in) {
   FUNC_0(VAR_5, "init rndis\n");
   VAR_4->port.in = FUNC_4(VAR_5->gadget,
     VAR_4->hs.in, VAR_4->fs.in);
   VAR_4->port.out = FUNC_4(VAR_5->gadget,
     VAR_4->hs.out, VAR_4->fs.out);
  }


  VAR_4->port.is_zlp_ok = 0;
  VAR_4->port.cdc_filter = 0;

  FUNC_0(VAR_5, "RNDIS RX/TX early activation ... \n");
  VAR_6 = FUNC_6(&VAR_4->port);
  if (FUNC_1(VAR_6))
   return FUNC_2(VAR_6);

  FUNC_8(VAR_4->config, VAR_6,
    &VAR_4->port.cdc_filter);
 } else
  goto fail;

 return 0;
fail:
 return -VAR_0;
}
