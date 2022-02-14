
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


struct usb_host_interface {TYPE_5__* endpoint; } ;
struct sd {TYPE_3__* sensor; } ;
struct gspca_dev {size_t curr_mode; int iface; TYPE_6__* dev; } ;
struct TYPE_12__ {TYPE_2__* config; } ;
struct TYPE_10__ {int wMaxPacketSize; } ;
struct TYPE_11__ {TYPE_4__ desc; } ;
struct TYPE_9__ {int* min_packet_size; } ;
struct TYPE_8__ {TYPE_1__** intf_cache; } ;
struct TYPE_7__ {struct usb_host_interface* altsetting; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_6__*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 struct usb_host_interface *VAR_7;
 struct sd *VAR_8 = (struct sd *) VAR_3;

 VAR_7 = &VAR_3->dev->config->intf_cache[0]->altsetting[1];
 VAR_5 = FUNC_2(VAR_7->endpoint[0].desc.wMaxPacketSize);
 VAR_6 = VAR_8->sensor->min_packet_size[VAR_3->curr_mode];
 if (VAR_5 <= VAR_6)
  return -VAR_2;

 VAR_5 -= 100;
 if (VAR_5 < VAR_6)
  VAR_5 = VAR_6;
 VAR_7->endpoint[0].desc.wMaxPacketSize = FUNC_1(VAR_5);

 VAR_4 = FUNC_3(VAR_3->dev, VAR_3->iface, 1);
 if (VAR_4 < 0)
  FUNC_0(VAR_0|VAR_1, "set alt 1 err %d", VAR_4);

 return VAR_4;
}
