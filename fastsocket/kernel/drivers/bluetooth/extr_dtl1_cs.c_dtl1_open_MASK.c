
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct hci_dev {int owner; int ioctl; int destruct; int send; int flush; int close; int open; TYPE_3__* driver_data; int type; } ;
struct TYPE_7__ {int ri_latch; struct hci_dev* hdev; int lock; TYPE_2__* p_dev; int tx_state; int * rx_skb; int rx_count; int rx_state; int txq; } ;
typedef TYPE_3__ dtl1_info_t ;
struct TYPE_5__ {unsigned int BasePort1; } ;
struct TYPE_6__ {TYPE_1__ io; int dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct hci_dev*,int *) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 struct hci_dev* FUNC_2 () ;
 int FUNC_3 (struct hci_dev*) ;
 scalar_t__ FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,scalar_t__) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_13(dtl1_info_t *VAR_25)
{
 unsigned long VAR_26;
 unsigned int VAR_27 = VAR_25->p_dev->io.BasePort1;
 struct hci_dev *VAR_28;

 FUNC_10(&(VAR_25->lock));

 FUNC_9(&(VAR_25->txq));

 VAR_25->rx_state = VAR_4;
 VAR_25->rx_count = VAR_3;
 VAR_25->rx_skb = ((void*)0);

 FUNC_8(VAR_18, &(VAR_25->tx_state));


 VAR_28 = FUNC_2();
 if (!VAR_28) {
  FUNC_0("Can't allocate HCI device");
  return -VAR_1;
 }

 VAR_25->hdev = VAR_28;

 VAR_28->type = VAR_2;
 VAR_28->driver_data = VAR_25;
 FUNC_1(VAR_28, &VAR_25->p_dev->dev);

 VAR_28->open = VAR_23;
 VAR_28->close = VAR_19;
 VAR_28->flush = VAR_21;
 VAR_28->send = VAR_24;
 VAR_28->destruct = VAR_20;
 VAR_28->ioctl = VAR_22;

 VAR_28->owner = VAR_5;

 FUNC_11(&(VAR_25->lock), VAR_26);


 FUNC_7(0, VAR_27 + VAR_12);


 FUNC_7(0, VAR_27 + VAR_6);


 FUNC_7(VAR_11, VAR_27 + VAR_10);
 FUNC_7((VAR_13 | VAR_15 | VAR_14), VAR_27 + VAR_12);

 VAR_25->ri_latch = FUNC_5(VAR_25->p_dev->io.BasePort1 + VAR_16) & VAR_17;


 FUNC_7(VAR_8 | VAR_7 | VAR_9, VAR_27 + VAR_6);

 FUNC_12(&(VAR_25->lock), VAR_26);


 FUNC_6(2000);


 if (FUNC_4(VAR_28) < 0) {
  FUNC_0("Can't register HCI device");
  VAR_25->hdev = ((void*)0);
  FUNC_3(VAR_28);
  return -VAR_0;
 }

 return 0;
}
