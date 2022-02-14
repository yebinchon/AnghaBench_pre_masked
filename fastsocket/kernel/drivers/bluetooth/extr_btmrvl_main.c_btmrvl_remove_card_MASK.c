
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hci_dev {int dummy; } ;
struct TYPE_6__ {struct hci_dev* hcidev; } ;
struct TYPE_5__ {int task; } ;
struct btmrvl_private {TYPE_3__ btmrvl_dev; TYPE_2__ main_thread; TYPE_1__* adapter; } ;
struct TYPE_4__ {int cmd_wait_q; } ;


 int FUNC_0 (struct hci_dev*) ;
 int FUNC_1 (struct btmrvl_private*) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct btmrvl_private*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct btmrvl_private *VAR_0)
{
 struct hci_dev *VAR_1;

 VAR_1 = VAR_0->btmrvl_dev.hcidev;

 FUNC_6(&VAR_0->adapter->cmd_wait_q);

 FUNC_5(VAR_0->main_thread.task);





 FUNC_3(VAR_1);

 FUNC_2(VAR_1);

 VAR_0->btmrvl_dev.hcidev = ((void*)0);

 FUNC_1(VAR_0);

 FUNC_4(VAR_0);

 return 0;
}
