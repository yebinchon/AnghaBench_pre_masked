
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct hci_dev {int owner; int ioctl; int destruct; int send; int flush; int close; int open; TYPE_3__* driver_data; int type; } ;
struct TYPE_8__ {struct hci_dev* hdev; int lock; TYPE_2__* p_dev; int * rx_skb; scalar_t__ rx_count; int rx_state; int txq; } ;
typedef TYPE_3__ btuart_info_t ;
struct TYPE_6__ {unsigned int BasePort1; } ;
struct TYPE_7__ {int dev; TYPE_1__ io; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct hci_dev*,int *) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 struct hci_dev* FUNC_3 () ;
 int FUNC_4 (struct hci_dev*) ;
 scalar_t__ FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_12(btuart_info_t *VAR_19)
{
 unsigned long VAR_20;
 unsigned int VAR_21 = VAR_19->p_dev->io.BasePort1;
 struct hci_dev *VAR_22;

 FUNC_9(&(VAR_19->lock));

 FUNC_8(&(VAR_19->txq));

 VAR_19->rx_state = VAR_4;
 VAR_19->rx_count = 0;
 VAR_19->rx_skb = ((void*)0);


 VAR_22 = FUNC_3();
 if (!VAR_22) {
  FUNC_0("Can't allocate HCI device");
  return -VAR_2;
 }

 VAR_19->hdev = VAR_22;

 VAR_22->type = VAR_3;
 VAR_22->driver_data = VAR_19;
 FUNC_1(VAR_22, &VAR_19->p_dev->dev);

 VAR_22->open = VAR_17;
 VAR_22->close = VAR_13;
 VAR_22->flush = VAR_15;
 VAR_22->send = VAR_18;
 VAR_22->destruct = VAR_14;
 VAR_22->ioctl = VAR_16;

 VAR_22->owner = VAR_5;

 FUNC_10(&(VAR_19->lock), VAR_20);


 FUNC_7(0, VAR_21 + VAR_9);


 FUNC_7(0, VAR_21 + VAR_6);


 FUNC_7(VAR_8, VAR_21 + VAR_7);
 FUNC_7((VAR_10 | VAR_12 | VAR_11), VAR_21 + VAR_9);




 FUNC_11(&(VAR_19->lock), VAR_20);

 FUNC_2(VAR_19, VAR_0);


 FUNC_6(1000);


 if (FUNC_5(VAR_22) < 0) {
  FUNC_0("Can't register HCI device");
  VAR_19->hdev = ((void*)0);
  FUNC_4(VAR_22);
  return -VAR_1;
 }

 return 0;
}
