
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct usb_request {int length; int actual; scalar_t__ buf; struct f_rndis* context; } ;
struct usb_ep {int dummy; } ;
struct usb_composite_dev {int dummy; } ;
struct TYPE_5__ {TYPE_1__* config; } ;
struct TYPE_6__ {TYPE_2__ func; } ;
struct f_rndis {int config; TYPE_3__ port; } ;
struct TYPE_4__ {struct usb_composite_dev* cdev; } ;


 int FUNC_0 (struct usb_composite_dev*,char*,int,int ,int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct usb_ep *VAR_0, struct usb_request *VAR_1)
{
 struct f_rndis *VAR_2 = VAR_1->context;
 struct usb_composite_dev *VAR_3 = VAR_2->port.func.config->cdev;
 int VAR_4;



 VAR_4 = FUNC_1(VAR_2->config, (u8 *) VAR_1->buf);
 if (VAR_4 < 0)
  FUNC_0(VAR_3, "RNDIS command error %d, %d/%d\n",
   VAR_4, VAR_1->actual, VAR_1->length);

}
