
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct usb_host_interface {TYPE_2__* endpoint; } ;
struct sd {TYPE_3__* sensor; } ;
struct gspca_dev {size_t curr_mode; TYPE_6__* dev; } ;
struct TYPE_12__ {TYPE_5__* config; } ;
struct TYPE_11__ {TYPE_4__** intf_cache; } ;
struct TYPE_10__ {struct usb_host_interface* altsetting; } ;
struct TYPE_9__ {int * max_packet_size; } ;
struct TYPE_7__ {int wMaxPacketSize; } ;
struct TYPE_8__ {TYPE_1__ desc; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_0)
{
 struct usb_host_interface *VAR_1;
 struct sd *VAR_2 = (struct sd *) VAR_0;


 VAR_1 = &VAR_0->dev->config->intf_cache[0]->altsetting[1];
 VAR_1->endpoint[0].desc.wMaxPacketSize =
  FUNC_0(VAR_2->sensor->max_packet_size[VAR_0->curr_mode]);

 return 0;
}
