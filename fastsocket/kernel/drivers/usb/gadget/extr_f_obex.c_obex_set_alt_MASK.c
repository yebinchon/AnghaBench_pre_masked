
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
struct TYPE_10__ {int obex_out; int obex_in; } ;
struct TYPE_9__ {int obex_out; int obex_in; } ;
struct f_obex {unsigned int ctrl_id; unsigned int data_id; int port_num; TYPE_5__ port; TYPE_4__ fs; TYPE_3__ hs; } ;
struct TYPE_8__ {scalar_t__ driver_data; } ;
struct TYPE_7__ {struct usb_composite_dev* cdev; } ;


 int FUNC_0 (struct usb_composite_dev*,char*,int ) ;
 int VAR_0 ;
 void* FUNC_1 (int ,int ,int ) ;
 struct f_obex* FUNC_2 (struct usb_function*) ;
 int FUNC_3 (TYPE_5__*,int ) ;
 int FUNC_4 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_5(struct usb_function *VAR_1, unsigned VAR_2, unsigned VAR_3)
{
 struct f_obex *VAR_4 = FUNC_2(VAR_1);
 struct usb_composite_dev *VAR_5 = VAR_1->config->cdev;

 if (VAR_2 == VAR_4->ctrl_id) {
  if (VAR_3 != 0)
   goto fail;

  FUNC_0(VAR_5, "reset obex ttyGS%d control\n", VAR_4->port_num);

 } else if (VAR_2 == VAR_4->data_id) {
  if (VAR_3 > 1)
   goto fail;

  if (VAR_4->port.in->driver_data) {
   FUNC_0(VAR_5, "reset obex ttyGS%d\n", VAR_4->port_num);
   FUNC_4(&VAR_4->port);
  }

  if (!VAR_4->port.in_desc) {
   FUNC_0(VAR_5, "init obex ttyGS%d\n", VAR_4->port_num);
   VAR_4->port.in_desc = FUNC_1(VAR_5->gadget,
     VAR_4->hs.obex_in, VAR_4->fs.obex_in);
   VAR_4->port.out_desc = FUNC_1(VAR_5->gadget,
     VAR_4->hs.obex_out, VAR_4->fs.obex_out);
  }

  if (VAR_3 == 1) {
   FUNC_0(VAR_5, "activate obex ttyGS%d\n", VAR_4->port_num);
   FUNC_3(&VAR_4->port, VAR_4->port_num);
  }

 } else
  goto fail;

 return 0;

fail:
 return -VAR_0;
}
