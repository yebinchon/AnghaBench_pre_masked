
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u_long ;
struct hci_dev {int owner; int ioctl; int destruct; int send; int flush; int close; int open; TYPE_3__* driver_data; int type; } ;
struct TYPE_9__ {scalar_t__ data; int * function; } ;
struct TYPE_8__ {int ctrl_reg; struct hci_dev* hdev; int txq; int hw_state; int tx_state; TYPE_2__* p_dev; int * rx_skb; scalar_t__ rx_count; int rx_state; TYPE_4__ timer; int lock; } ;
typedef TYPE_3__ bluecard_info_t ;
struct TYPE_6__ {unsigned int BasePort1; } ;
struct TYPE_7__ {int dev; TYPE_1__ io; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (struct hci_dev*,int *) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 struct hci_dev* FUNC_2 () ;
 int FUNC_3 (struct hci_dev*) ;
 scalar_t__ FUNC_4 (struct hci_dev*) ;
 unsigned char FUNC_5 (unsigned int) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,unsigned int) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(bluecard_info_t *VAR_32)
{
 unsigned int VAR_33 = VAR_32->p_dev->io.BasePort1;
 struct hci_dev *VAR_34;
 unsigned char VAR_35;

 FUNC_12(&(VAR_32->lock));

 FUNC_6(&(VAR_32->timer));
 VAR_32->timer.function = &VAR_25;
 VAR_32->timer.data = (u_long)VAR_32;

 FUNC_10(&(VAR_32->txq));

 VAR_32->rx_state = VAR_7;
 VAR_32->rx_count = 0;
 VAR_32->rx_skb = ((void*)0);


 VAR_34 = FUNC_2();
 if (!VAR_34) {
  FUNC_0("Can't allocate HCI device");
  return -VAR_5;
 }

 VAR_32->hdev = VAR_34;

 VAR_34->type = VAR_6;
 VAR_34->driver_data = VAR_32;
 FUNC_1(VAR_34, &VAR_32->p_dev->dev);

 VAR_34->open = VAR_30;
 VAR_34->close = VAR_26;
 VAR_34->flush = VAR_28;
 VAR_34->send = VAR_31;
 VAR_34->destruct = VAR_27;
 VAR_34->ioctl = VAR_29;

 VAR_34->owner = VAR_21;

 VAR_35 = FUNC_5(VAR_33 + 0x30);

 if ((VAR_35 & 0x0f) == 0x02)
  FUNC_9(VAR_1, &(VAR_32->hw_state));

 if (VAR_35 & 0x10)
  FUNC_9(VAR_2, &(VAR_32->hw_state));

 if (VAR_35 & 0x20)
  FUNC_9(VAR_0, &(VAR_32->hw_state));


 VAR_32->ctrl_reg = VAR_13 | VAR_15;
 FUNC_8(VAR_32->ctrl_reg, VAR_33 + VAR_11);


 FUNC_8(0x80, VAR_33 + 0x30);


 FUNC_7(10);


 FUNC_8(0x00, VAR_33 + 0x30);


 VAR_32->ctrl_reg = VAR_12 | VAR_14;
 FUNC_8(VAR_32->ctrl_reg, VAR_33 + VAR_11);


 FUNC_8(0xff, VAR_33 + VAR_18);
 VAR_32->ctrl_reg |= VAR_16;
 FUNC_8(VAR_32->ctrl_reg, VAR_33 + VAR_11);

 if ((VAR_35 & 0x0f) == 0x03) {

  VAR_32->ctrl_reg |= VAR_17;
  FUNC_8(VAR_32->ctrl_reg, VAR_33 + VAR_11);


  VAR_32->ctrl_reg |= 0x03;
  FUNC_8(VAR_32->ctrl_reg, VAR_33 + VAR_11);


  VAR_32->ctrl_reg &= ~VAR_17;
  FUNC_8(VAR_32->ctrl_reg, VAR_33 + VAR_11);

  FUNC_9(VAR_22, &(VAR_32->tx_state));
  FUNC_9(VAR_23, &(VAR_32->tx_state));
  FUNC_9(VAR_24, &(VAR_32->tx_state));
 }


 FUNC_8(VAR_9, VAR_33 + VAR_8);
 FUNC_8(VAR_10, VAR_33 + VAR_8);


 FUNC_9(VAR_3, &(VAR_32->hw_state));


 FUNC_11(&(VAR_32->txq));


 FUNC_8((0x0f << VAR_20) | 1, VAR_33 + VAR_19);


 FUNC_7(1250);


 if (FUNC_4(VAR_34) < 0) {
  FUNC_0("Can't register HCI device");
  VAR_32->hdev = ((void*)0);
  FUNC_3(VAR_34);
  return -VAR_4;
 }

 return 0;
}
