
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct hci_dev {int name; } ;
struct TYPE_3__ {struct hci_dev* hdev; } ;
typedef TYPE_1__ bt3c_info_t ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct hci_dev*) ;
 scalar_t__ FUNC_3 (struct hci_dev*) ;

__attribute__((used)) static int FUNC_4(bt3c_info_t *VAR_1)
{
 struct hci_dev *VAR_2 = VAR_1->hdev;

 if (!VAR_2)
  return -VAR_0;

 FUNC_1(VAR_2);

 if (FUNC_3(VAR_2) < 0)
  FUNC_0("Can't unregister HCI device %s", VAR_2->name);

 FUNC_2(VAR_2);

 return 0;
}
