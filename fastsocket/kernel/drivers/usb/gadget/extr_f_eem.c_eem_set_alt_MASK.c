
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct usb_function {TYPE_1__* config; } ;
struct usb_composite_dev {int gadget; } ;
struct net_device {int dummy; } ;
struct TYPE_11__ {int is_zlp_ok; int cdc_filter; void* out; void* in; TYPE_2__* in_ep; } ;
struct TYPE_10__ {int out; int in; } ;
struct TYPE_9__ {int out; int in; } ;
struct f_eem {unsigned int ctrl_id; TYPE_5__ port; TYPE_4__ fs; TYPE_3__ hs; } ;
struct TYPE_8__ {scalar_t__ driver_data; } ;
struct TYPE_7__ {struct usb_composite_dev* cdev; } ;


 int FUNC_0 (struct usb_composite_dev*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 void* FUNC_3 (int ,int ,int ) ;
 struct f_eem* FUNC_4 (struct usb_function*) ;
 struct net_device* FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_7(struct usb_function *VAR_2, unsigned VAR_3, unsigned VAR_4)
{
 struct f_eem *VAR_5 = FUNC_4(VAR_2);
 struct usb_composite_dev *VAR_6 = VAR_2->config->cdev;
 struct net_device *VAR_7;


 if (VAR_4 != 0)
  goto fail;

 if (VAR_3 == VAR_5->ctrl_id) {

  if (VAR_5->port.in_ep->driver_data) {
   FUNC_0(VAR_6, "reset eem\n");
   FUNC_6(&VAR_5->port);
  }

  if (!VAR_5->port.in) {
   FUNC_0(VAR_6, "init eem\n");
   VAR_5->port.in = FUNC_3(VAR_6->gadget,
     VAR_5->hs.in, VAR_5->fs.in);
   VAR_5->port.out = FUNC_3(VAR_6->gadget,
     VAR_5->hs.out, VAR_5->fs.out);
  }




  VAR_5->port.is_zlp_ok = 1;
  VAR_5->port.cdc_filter = VAR_0;
  FUNC_0(VAR_6, "activate eem\n");
  VAR_7 = FUNC_5(&VAR_5->port);
  if (FUNC_1(VAR_7))
   return FUNC_2(VAR_7);
 } else
  goto fail;

 return 0;
fail:
 return -VAR_1;
}
