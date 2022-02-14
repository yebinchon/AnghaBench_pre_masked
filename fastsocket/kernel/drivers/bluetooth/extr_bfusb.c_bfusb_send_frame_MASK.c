
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; void* dev; } ;
struct TYPE_3__ {int sco_tx; int acl_tx; int cmd_tx; } ;
struct hci_dev {TYPE_1__ stat; struct bfusb_data* driver_data; int flags; } ;
struct bfusb_data {int bulk_pkt_size; int lock; int transmit_q; } ;
struct TYPE_4__ {int pkt_type; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct hci_dev*,struct sk_buff*,int,int) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;

 int FUNC_2 (struct bfusb_data*) ;
 TYPE_2__* FUNC_3 (struct sk_buff*) ;
 struct sk_buff* FUNC_4 (int,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ,unsigned char*,int) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct sk_buff*,int,int ,int) ;
 int FUNC_11 (struct sk_buff*,int) ;
 int FUNC_12 (struct sk_buff*,int) ;
 int FUNC_13 (int *,struct sk_buff*) ;
 int FUNC_14 (int ,int *) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_15(struct sk_buff *VAR_7)
{
 struct hci_dev *VAR_8 = (struct hci_dev *) VAR_7->dev;
 struct bfusb_data *VAR_9;
 struct sk_buff *VAR_10;
 unsigned char VAR_11[3];
 int VAR_12 = 0, VAR_13, VAR_14;

 FUNC_0("hdev %p skb %p type %d len %d", VAR_8, VAR_7, FUNC_3(VAR_7)->pkt_type, VAR_7->len);

 if (!VAR_8) {
  FUNC_1("Frame for unknown HCI device (hdev=NULL)");
  return -VAR_2;
 }

 if (!FUNC_14(VAR_5, &VAR_8->flags))
  return -VAR_1;

 VAR_9 = VAR_8->driver_data;

 switch (FUNC_3(VAR_7)->pkt_type) {
 case 129:
  VAR_8->stat.cmd_tx++;
  break;
 case 130:
  VAR_8->stat.acl_tx++;
  break;
 case 128:
  VAR_8->stat.sco_tx++;
  break;
 };


 FUNC_6(FUNC_11(VAR_7, 1), &FUNC_3(VAR_7)->pkt_type, 1);

 VAR_14 = VAR_7->len;


 VAR_10 = FUNC_4(VAR_14 + 32, VAR_4);
 if (!VAR_10) {
  FUNC_1("Can't allocate memory for new packet");
  return -VAR_3;
 }

 VAR_10->dev = (void *) VAR_9;

 while (VAR_14) {
  VAR_13 = FUNC_7(VAR_6, VAR_14, VAR_0);

  VAR_11[0] = 0xc1 | ((VAR_12 == 0) ? 0x04 : 0) | ((VAR_14 == VAR_13) ? 0x08 : 0);
  VAR_11[1] = 0x00;
  VAR_11[2] = (VAR_13 == VAR_0) ? 0 : VAR_13;

  FUNC_6(FUNC_12(VAR_10, 3), VAR_11, 3);
  FUNC_10(VAR_7, VAR_12, FUNC_12(VAR_10, VAR_13), VAR_13);

  VAR_12 += VAR_13;
  VAR_14 -= VAR_13;
 }


 if ((VAR_10->len % VAR_9->bulk_pkt_size) == 0) {
  VAR_11[0] = 0xdd;
  VAR_11[1] = 0x00;
  FUNC_6(FUNC_12(VAR_10, 2), VAR_11, 2);
 }

 FUNC_8(&VAR_9->lock);

 FUNC_13(&VAR_9->transmit_q, VAR_10);
 FUNC_2(VAR_9);

 FUNC_9(&VAR_9->lock);

 FUNC_5(VAR_7);

 return 0;
}
