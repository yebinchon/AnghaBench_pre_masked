
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
struct TYPE_11__ {void* out_desc; void* in_desc; TYPE_2__* in; } ;
struct TYPE_10__ {int out; int in; } ;
struct TYPE_9__ {int out; int in; } ;
struct f_gser {int port_num; TYPE_5__ port; TYPE_4__ fs; TYPE_3__ hs; } ;
struct TYPE_8__ {scalar_t__ driver_data; } ;
struct TYPE_7__ {struct usb_composite_dev* cdev; } ;


 int FUNC_0 (struct usb_composite_dev*,char*,int ) ;
 void* FUNC_1 (int ,int ,int ) ;
 struct f_gser* FUNC_2 (struct usb_function*) ;
 int FUNC_3 (TYPE_5__*,int ) ;
 int FUNC_4 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_5(struct usb_function *VAR_0, unsigned VAR_1, unsigned VAR_2)
{
 struct f_gser *VAR_3 = FUNC_2(VAR_0);
 struct usb_composite_dev *VAR_4 = VAR_0->config->cdev;



 if (VAR_3->port.in->driver_data) {
  FUNC_0(VAR_4, "reset generic ttyGS%d\n", VAR_3->port_num);
  FUNC_4(&VAR_3->port);
 } else {
  FUNC_0(VAR_4, "activate generic ttyGS%d\n", VAR_3->port_num);
  VAR_3->port.in_desc = FUNC_1(VAR_4->gadget,
    VAR_3->hs.in, VAR_3->fs.in);
  VAR_3->port.out_desc = FUNC_1(VAR_4->gadget,
    VAR_3->hs.out, VAR_3->fs.out);
 }
 FUNC_3(&VAR_3->port, VAR_3->port_num);
 return 0;
}
