
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_usbvision {int iface_alt; int num_alt; scalar_t__* alt_max_pkt_size; scalar_t__ isoc_packet_size; TYPE_1__* dev; int iface; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__,...) ;
 int FUNC_1 (int *,char*,size_t,int) ;
 int FUNC_2 (TYPE_1__*,int ,size_t) ;

int FUNC_3(struct usb_usbvision *VAR_2)
{
 int VAR_3, VAR_4 = VAR_2->iface_alt;
 int VAR_5;

 VAR_2->iface_alt = 0;
 for (VAR_5 = 0; VAR_5 < VAR_2->num_alt; VAR_5++)
  if (VAR_2->alt_max_pkt_size[VAR_5] > VAR_2->alt_max_pkt_size[VAR_2->iface_alt])
   VAR_2->iface_alt = VAR_5;

 if (VAR_2->iface_alt != VAR_4) {
  VAR_2->isoc_packet_size = VAR_2->alt_max_pkt_size[VAR_2->iface_alt];
  FUNC_0(VAR_0, "setting alternate %d with max_packet_size=%u",
    VAR_2->iface_alt, VAR_2->isoc_packet_size);
  VAR_3 = FUNC_2(VAR_2->dev, VAR_2->iface, VAR_2->iface_alt);
  if (VAR_3 < 0) {
   FUNC_1(&VAR_2->dev->dev,
    "cannot change alternate number to %d (error=%i)\n",
     VAR_2->iface_alt, VAR_3);
   return VAR_3;
  }
 }

 FUNC_0(VAR_1, "ISO Packet Length:%d", VAR_2->isoc_packet_size);

 return 0;
}
