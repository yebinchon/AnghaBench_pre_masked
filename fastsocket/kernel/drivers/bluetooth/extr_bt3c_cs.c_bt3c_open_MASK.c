
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct hci_dev {int owner; int ioctl; int destruct; int send; int flush; int close; int open; TYPE_2__* driver_data; int type; } ;
struct firmware {int size; int data; } ;
struct TYPE_6__ {struct hci_dev* hdev; TYPE_1__* p_dev; int * rx_skb; scalar_t__ rx_count; int rx_state; int txq; int lock; } ;
typedef TYPE_2__ bt3c_info_t ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct hci_dev*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 struct hci_dev* FUNC_3 () ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct firmware const*) ;
 int FUNC_8 (struct firmware const**,char*,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(bt3c_info_t *VAR_10)
{
 const struct firmware *VAR_11;
 struct hci_dev *VAR_12;
 int VAR_13;

 FUNC_10(&(VAR_10->lock));

 FUNC_9(&(VAR_10->txq));

 VAR_10->rx_state = VAR_2;
 VAR_10->rx_count = 0;
 VAR_10->rx_skb = ((void*)0);


 VAR_12 = FUNC_3();
 if (!VAR_12) {
  FUNC_0("Can't allocate HCI device");
  return -VAR_0;
 }

 VAR_10->hdev = VAR_12;

 VAR_12->type = VAR_1;
 VAR_12->driver_data = VAR_10;
 FUNC_1(VAR_12, &VAR_10->p_dev->dev);

 VAR_12->open = VAR_8;
 VAR_12->close = VAR_4;
 VAR_12->flush = VAR_6;
 VAR_12->send = VAR_9;
 VAR_12->destruct = VAR_5;
 VAR_12->ioctl = VAR_7;

 VAR_12->owner = VAR_3;


 VAR_13 = FUNC_8(&VAR_11, "BT3CPCC.bin", &VAR_10->p_dev->dev);
 if (VAR_13 < 0) {
  FUNC_0("Firmware request failed");
  goto error;
 }

 VAR_13 = FUNC_2(VAR_10, VAR_11->data, VAR_11->size);

 FUNC_7(VAR_11);

 if (VAR_13 < 0) {
  FUNC_0("Firmware loading failed");
  goto error;
 }


 FUNC_6(1000);


 VAR_13 = FUNC_5(VAR_12);
 if (VAR_13 < 0) {
  FUNC_0("Can't register HCI device");
  goto error;
 }

 return 0;

error:
 VAR_10->hdev = ((void*)0);
 FUNC_4(VAR_12);
 return VAR_13;
}
