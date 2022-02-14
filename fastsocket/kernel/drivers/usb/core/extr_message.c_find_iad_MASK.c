
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_interface_assoc_descriptor {int bInterfaceCount; int bFirstInterface; } ;
struct usb_host_config {struct usb_interface_assoc_descriptor** intf_assoc; } ;
struct usb_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static struct usb_interface_assoc_descriptor *FUNC_1(struct usb_device *VAR_1,
      struct usb_host_config *VAR_2,
      u8 VAR_3)
{
 struct usb_interface_assoc_descriptor *VAR_4 = ((void*)0);
 struct usb_interface_assoc_descriptor *VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;

 for (VAR_8 = 0; (VAR_8 < VAR_0 && VAR_2->intf_assoc[VAR_8]); VAR_8++) {
  VAR_5 = VAR_2->intf_assoc[VAR_8];
  if (VAR_5->bInterfaceCount == 0)
   continue;

  VAR_6 = VAR_5->bFirstInterface;
  VAR_7 = VAR_6 + (VAR_5->bInterfaceCount - 1);
  if (VAR_3 >= VAR_6 && VAR_3 <= VAR_7) {
   if (!VAR_4)
    VAR_4 = VAR_5;
   else
    FUNC_0(&VAR_1->dev, "Interface #%d referenced"
     " by multiple IADs\n", VAR_3);
  }
 }

 return VAR_4;
}
