
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhci_data {struct hci_dev* hdev; int read_wait; int readq; } ;
struct inode {int dummy; } ;
struct hci_dev {int owner; int destruct; int send; int flush; int close; int open; struct vhci_data* driver_data; int type; } ;
struct file {struct vhci_data* private_data; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct hci_dev* FUNC_1 () ;
 int FUNC_2 (struct hci_dev*) ;
 scalar_t__ FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct vhci_data*) ;
 struct vhci_data* FUNC_6 (int,int ) ;
 int FUNC_7 (struct inode*,struct file*) ;
 int FUNC_8 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_10, struct file *VAR_11)
{
 struct vhci_data *VAR_12;
 struct hci_dev *VAR_13;

 VAR_12 = FUNC_6(sizeof(struct vhci_data), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 FUNC_8(&VAR_12->readq);
 FUNC_4(&VAR_12->read_wait);

 VAR_13 = FUNC_1();
 if (!VAR_13) {
  FUNC_5(VAR_12);
  return -VAR_1;
 }

 VAR_12->hdev = VAR_13;

 VAR_13->type = VAR_3;
 VAR_13->driver_data = VAR_12;

 VAR_13->open = VAR_8;
 VAR_13->close = VAR_5;
 VAR_13->flush = VAR_7;
 VAR_13->send = VAR_9;
 VAR_13->destruct = VAR_6;

 VAR_13->owner = VAR_4;

 if (FUNC_3(VAR_13) < 0) {
  FUNC_0("Can't register HCI device");
  FUNC_5(VAR_12);
  FUNC_2(VAR_13);
  return -VAR_0;
 }

 VAR_11->private_data = VAR_12;

 return FUNC_7(VAR_10, VAR_11);
}
