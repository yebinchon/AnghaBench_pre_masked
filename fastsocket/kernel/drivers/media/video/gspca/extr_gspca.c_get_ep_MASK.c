
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {int * altsetting; } ;
struct TYPE_4__ {int bEndpointAddress; } ;
struct usb_host_endpoint {TYPE_2__ desc; } ;
struct TYPE_3__ {scalar_t__ reverse_alts; scalar_t__ bulk; } ;
struct gspca_dev {int alt; int nbalt; int iface; int dev; TYPE_1__ cam; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct usb_host_endpoint* FUNC_1 (int *,int) ;
 int FUNC_2 (char*,...) ;
 struct usb_interface* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static struct usb_host_endpoint *FUNC_5(struct gspca_dev *VAR_3)
{
 struct usb_interface *VAR_4;
 struct usb_host_endpoint *VAR_5;
 int VAR_6, VAR_7, VAR_8;

 VAR_4 = FUNC_3(VAR_3->dev, VAR_3->iface);
 VAR_5 = ((void*)0);
 VAR_6 = VAR_3->cam.bulk ? VAR_1
       : VAR_2;
 VAR_7 = VAR_3->alt;
 if (VAR_3->cam.reverse_alts) {
  while (++VAR_7 < VAR_3->nbalt) {
   VAR_5 = FUNC_1(&VAR_4->altsetting[VAR_7], VAR_6);
   if (VAR_5)
    break;
  }
 } else {
  while (--VAR_7 >= 0) {
   VAR_5 = FUNC_1(&VAR_4->altsetting[VAR_7], VAR_6);
   if (VAR_5)
    break;
  }
 }
 if (VAR_5 == ((void*)0)) {
  FUNC_2("no transfer endpoint found");
  return ((void*)0);
 }
 FUNC_0(VAR_0, "use alt %d ep 0x%02x",
   VAR_7, VAR_5->desc.bEndpointAddress);
 VAR_3->alt = VAR_7;
 if (VAR_3->nbalt > 1) {
  VAR_8 = FUNC_4(VAR_3->dev, VAR_3->iface, VAR_7);
  if (VAR_8 < 0) {
   FUNC_2("set alt %d err %d", VAR_7, VAR_8);
   VAR_5 = ((void*)0);
  }
 }
 return VAR_5;
}
