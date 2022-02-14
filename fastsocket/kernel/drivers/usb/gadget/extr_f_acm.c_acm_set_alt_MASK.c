
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
struct TYPE_14__ {void* out_desc; void* in_desc; TYPE_2__* in; } ;
struct TYPE_12__ {int out; int in; int notify; } ;
struct TYPE_11__ {int out; int in; int notify; } ;
struct f_acm {unsigned int ctrl_id; unsigned int data_id; int port_num; TYPE_7__ port; TYPE_4__ fs; TYPE_3__ hs; TYPE_5__* notify; void* notify_desc; } ;
struct TYPE_13__ {struct f_acm* driver_data; } ;
struct TYPE_10__ {scalar_t__ driver_data; } ;
struct TYPE_9__ {struct usb_composite_dev* cdev; } ;


 int FUNC_0 (struct usb_composite_dev*,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct usb_composite_dev*,char*,unsigned int) ;
 void* FUNC_2 (int ,int ,int ) ;
 struct f_acm* FUNC_3 (struct usb_function*) ;
 int FUNC_4 (TYPE_7__*,int ) ;
 int FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*,void*) ;

__attribute__((used)) static int FUNC_8(struct usb_function *VAR_1, unsigned VAR_2, unsigned VAR_3)
{
 struct f_acm *VAR_4 = FUNC_3(VAR_1);
 struct usb_composite_dev *VAR_5 = VAR_1->config->cdev;



 if (VAR_2 == VAR_4->ctrl_id) {
  if (VAR_4->notify->driver_data) {
   FUNC_1(VAR_5, "reset acm control interface %d\n", VAR_2);
   FUNC_6(VAR_4->notify);
  } else {
   FUNC_1(VAR_5, "init acm ctrl interface %d\n", VAR_2);
   VAR_4->notify_desc = FUNC_2(VAR_5->gadget,
     VAR_4->hs.notify,
     VAR_4->fs.notify);
  }
  FUNC_7(VAR_4->notify, VAR_4->notify_desc);
  VAR_4->notify->driver_data = VAR_4;

 } else if (VAR_2 == VAR_4->data_id) {
  if (VAR_4->port.in->driver_data) {
   FUNC_0(VAR_5, "reset acm ttyGS%d\n", VAR_4->port_num);
   FUNC_5(&VAR_4->port);
  } else {
   FUNC_0(VAR_5, "activate acm ttyGS%d\n", VAR_4->port_num);
   VAR_4->port.in_desc = FUNC_2(VAR_5->gadget,
     VAR_4->hs.in, VAR_4->fs.in);
   VAR_4->port.out_desc = FUNC_2(VAR_5->gadget,
     VAR_4->hs.out, VAR_4->fs.out);
  }
  FUNC_4(&VAR_4->port, VAR_4->port_num);

 } else
  return -VAR_0;

 return 0;
}
