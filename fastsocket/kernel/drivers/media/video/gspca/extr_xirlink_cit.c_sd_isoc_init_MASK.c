
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct usb_host_interface {TYPE_2__* endpoint; } ;
struct gspca_dev {int width; TYPE_5__* dev; } ;
struct TYPE_10__ {TYPE_4__* config; } ;
struct TYPE_9__ {TYPE_3__** intf_cache; } ;
struct TYPE_8__ {struct usb_host_interface* altsetting; } ;
struct TYPE_6__ {int wMaxPacketSize; } ;
struct TYPE_7__ {TYPE_1__ desc; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_0)
{
 struct usb_host_interface *VAR_1;
 int VAR_2;

 switch (VAR_0->width) {
 case 160:
  VAR_2 = 450;
  break;
 case 176:
  VAR_2 = 600;
  break;
 default:
  VAR_2 = 1022;
  break;
 }


 VAR_1 = &VAR_0->dev->config->intf_cache[0]->altsetting[1];
 VAR_1->endpoint[0].desc.wMaxPacketSize = FUNC_0(VAR_2);

 return 0;
}
