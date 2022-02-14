
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hci_dev {int owner; int ioctl; int destruct; int send; int flush; int close; int open; int type; struct btmrvl_private* driver_data; } ;
struct TYPE_4__ {int task; int wait_q; struct btmrvl_private* priv; } ;
struct TYPE_3__ {int tx_dnld_rdy; void* card; struct hci_dev* hcidev; } ;
struct btmrvl_private {TYPE_2__ main_thread; TYPE_1__ btmrvl_dev; int driver_lock; void* adapter; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct hci_dev*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct btmrvl_private*) ;
 int FUNC_4 (struct btmrvl_private*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct hci_dev* FUNC_5 () ;
 int FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (struct hci_dev*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct btmrvl_private*) ;
 int FUNC_10 (int ,TYPE_2__*,char*) ;
 int FUNC_11 (int ) ;
 void* FUNC_12 (int,int ) ;
 int FUNC_13 (int *) ;

struct btmrvl_private *FUNC_14(void *VAR_10)
{
 struct hci_dev *VAR_11 = ((void*)0);
 struct btmrvl_private *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_12(sizeof(*VAR_12), VAR_0);
 if (!VAR_12) {
  FUNC_1("Can not allocate priv");
  goto err_priv;
 }

 VAR_12->adapter = FUNC_12(sizeof(*VAR_12->adapter), VAR_0);
 if (!VAR_12->adapter) {
  FUNC_1("Allocate buffer for btmrvl_adapter failed!");
  goto err_adapter;
 }

 FUNC_4(VAR_12);

 VAR_11 = FUNC_5();
 if (!VAR_11) {
  FUNC_1("Can not allocate HCI device");
  goto err_hdev;
 }

 FUNC_0("Starting kthread...");
 VAR_12->main_thread.priv = VAR_12;
 FUNC_13(&VAR_12->driver_lock);

 FUNC_8(&VAR_12->main_thread.wait_q);
 VAR_12->main_thread.task = FUNC_10(VAR_9,
    &VAR_12->main_thread, "btmrvl_main_service");

 VAR_12->btmrvl_dev.hcidev = VAR_11;
 VAR_12->btmrvl_dev.card = VAR_10;

 VAR_11->driver_data = VAR_12;

 VAR_12->btmrvl_dev.tx_dnld_rdy = 1;

 VAR_11->type = VAR_1;
 VAR_11->open = VAR_7;
 VAR_11->close = VAR_3;
 VAR_11->flush = VAR_5;
 VAR_11->send = VAR_8;
 VAR_11->destruct = VAR_4;
 VAR_11->ioctl = VAR_6;
 VAR_11->owner = VAR_2;

 VAR_13 = FUNC_7(VAR_11);
 if (VAR_13 < 0) {
  FUNC_1("Can not register HCI device");
  goto err_hci_register_dev;
 }





 return VAR_12;

err_hci_register_dev:

 FUNC_11(VAR_12->main_thread.task);

 FUNC_6(VAR_11);

err_hdev:
 FUNC_3(VAR_12);

err_adapter:
 FUNC_9(VAR_12);

err_priv:
 return ((void*)0);
}
