
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
struct TYPE_11__ {void* out; void* in; TYPE_2__* in_ep; } ;
struct TYPE_10__ {int out; int in; } ;
struct TYPE_9__ {int out; int in; } ;
struct f_gether {TYPE_5__ port; TYPE_4__ fs; TYPE_3__ hs; } ;
struct TYPE_8__ {scalar_t__ driver_data; } ;
struct TYPE_7__ {struct usb_composite_dev* cdev; } ;


 int FUNC_0 (struct usb_composite_dev*,char*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 void* FUNC_3 (int ,int ,int ) ;
 struct f_gether* FUNC_4 (struct usb_function*) ;
 struct net_device* FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_7(struct usb_function *VAR_0, unsigned VAR_1, unsigned VAR_2)
{
 struct f_gether *VAR_3 = FUNC_4(VAR_0);
 struct usb_composite_dev *VAR_4 = VAR_0->config->cdev;
 struct net_device *VAR_5;



 if (VAR_3->port.in_ep->driver_data) {
  FUNC_0(VAR_4, "reset cdc subset\n");
  FUNC_6(&VAR_3->port);
 }

 FUNC_0(VAR_4, "init + activate cdc subset\n");
 VAR_3->port.in = FUNC_3(VAR_4->gadget,
   VAR_3->hs.in, VAR_3->fs.in);
 VAR_3->port.out = FUNC_3(VAR_4->gadget,
   VAR_3->hs.out, VAR_3->fs.out);

 VAR_5 = FUNC_5(&VAR_3->port);
 return FUNC_1(VAR_5) ? FUNC_2(VAR_5) : 0;
}
