
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhci_data {struct hci_dev* hdev; } ;
struct inode {int dummy; } ;
struct hci_dev {int name; } ;
struct file {struct vhci_data* private_data; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct hci_dev*) ;
 scalar_t__ FUNC_2 (struct hci_dev*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0, struct file *VAR_1)
{
 struct vhci_data *VAR_2 = VAR_1->private_data;
 struct hci_dev *VAR_3 = VAR_2->hdev;

 if (FUNC_2(VAR_3) < 0) {
  FUNC_0("Can't unregister HCI device %s", VAR_3->name);
 }

 FUNC_1(VAR_3);

 VAR_1->private_data = ((void*)0);

 return 0;
}
