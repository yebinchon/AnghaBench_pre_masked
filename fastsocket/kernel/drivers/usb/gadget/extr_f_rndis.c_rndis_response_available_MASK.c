
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_request {int * buf; } ;
struct usb_composite_dev {int dummy; } ;
struct TYPE_6__ {TYPE_1__* config; } ;
struct TYPE_5__ {TYPE_3__ func; } ;
struct f_rndis {int notify_count; int notify; TYPE_2__ port; struct usb_request* notify_req; } ;
typedef int __le32 ;
struct TYPE_4__ {struct usb_composite_dev* cdev; } ;


 int FUNC_0 (struct usb_composite_dev*,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,struct usb_request*,int ) ;

__attribute__((used)) static void FUNC_5(void *VAR_1)
{
 struct f_rndis *VAR_2 = VAR_1;
 struct usb_request *VAR_3 = VAR_2->notify_req;
 struct usb_composite_dev *VAR_4 = VAR_2->port.func.config->cdev;
 __le32 *VAR_5 = VAR_3->buf;
 int VAR_6;

 if (FUNC_2(&VAR_2->notify_count) != 1)
  return;






 VAR_5[0] = FUNC_3(1);
 VAR_5[1] = FUNC_3(0);

 VAR_6 = FUNC_4(VAR_2->notify, VAR_3, VAR_0);
 if (VAR_6) {
  FUNC_1(&VAR_2->notify_count);
  FUNC_0(VAR_4, "notify/0 --> %d\n", VAR_6);
 }
}
