
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_uart {struct hci_dev* hdev; } ;
struct hci_dev {int quirks; int owner; int destruct; int send; int flush; int close; int open; struct hci_uart* driver_data; int type; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct hci_dev* FUNC_2 () ;
 int FUNC_3 (struct hci_dev*) ;
 scalar_t__ FUNC_4 (struct hci_dev*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct hci_uart *VAR_11)
{
 struct hci_dev *VAR_12;

 FUNC_0("");


 VAR_12 = FUNC_2();
 if (!VAR_12) {
  FUNC_1("Can't allocate HCI device");
  return -VAR_1;
 }

 VAR_11->hdev = VAR_12;

 VAR_12->type = VAR_3;
 VAR_12->driver_data = VAR_11;

 VAR_12->open = VAR_8;
 VAR_12->close = VAR_5;
 VAR_12->flush = VAR_7;
 VAR_12->send = VAR_9;
 VAR_12->destruct = VAR_6;

 VAR_12->owner = VAR_4;

 if (!VAR_10)
  FUNC_5(VAR_2, &VAR_12->quirks);

 if (FUNC_4(VAR_12) < 0) {
  FUNC_1("Can't register HCI device");
  FUNC_3(VAR_12);
  return -VAR_0;
 }

 return 0;
}
