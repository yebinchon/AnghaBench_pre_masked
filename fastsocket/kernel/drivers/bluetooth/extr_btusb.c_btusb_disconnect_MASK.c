
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct hci_dev {int dummy; } ;
struct btusb_data {struct usb_interface* isoc; struct usb_interface* intf; struct hci_dev* hdev; } ;


 int FUNC_0 (char*,struct usb_interface*) ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct hci_dev*) ;
 int VAR_0 ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (int *,struct usb_interface*) ;
 struct btusb_data* FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_8(struct usb_interface *VAR_1)
{
 struct btusb_data *VAR_2 = FUNC_6(VAR_1);
 struct hci_dev *VAR_3;

 FUNC_0("intf %p", VAR_1);

 if (!VAR_2)
  return;

 VAR_3 = VAR_2->hdev;

 FUNC_1(VAR_3);

 FUNC_7(VAR_2->intf, ((void*)0));

 if (VAR_2->isoc)
  FUNC_7(VAR_2->isoc, ((void*)0));

 FUNC_4(VAR_3);

 if (VAR_1 == VAR_2->isoc)
  FUNC_5(&VAR_0, VAR_2->intf);
 else if (VAR_2->isoc)
  FUNC_5(&VAR_0, VAR_2->isoc);

 FUNC_2(VAR_3);

 FUNC_3(VAR_3);
}
