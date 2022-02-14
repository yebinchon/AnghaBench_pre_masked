
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sk_buff {int len; scalar_t__ dev; } ;
struct TYPE_7__ {int sco_tx; int acl_tx; int cmd_tx; } ;
struct hci_dev {TYPE_1__ stat; scalar_t__ driver_data; } ;
struct TYPE_8__ {int type; int len; scalar_t__ zero; } ;
typedef TYPE_2__ nsh_t ;
struct TYPE_9__ {int txq; } ;
typedef TYPE_3__ dtl1_info_t ;
struct TYPE_10__ {int pkt_type; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 scalar_t__ VAR_4 ;
 TYPE_6__* FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ,TYPE_2__*,scalar_t__) ;
 int FUNC_6 (struct sk_buff*,scalar_t__*,int) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;
 scalar_t__* FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (int *,struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_5)
{
 dtl1_info_t *VAR_6;
 struct hci_dev *VAR_7 = (struct hci_dev *)(VAR_5->dev);
 struct sk_buff *VAR_8;
 nsh_t VAR_9;

 if (!VAR_7) {
  FUNC_0("Frame for unknown HCI device (hdev=NULL)");
  return -VAR_1;
 }

 VAR_6 = (dtl1_info_t *)(VAR_7->driver_data);

 switch (FUNC_1(VAR_5)->pkt_type) {
 case 129:
  VAR_7->stat.cmd_tx++;
  VAR_9.type = 0x81;
  break;
 case 130:
  VAR_7->stat.acl_tx++;
  VAR_9.type = 0x82;
  break;
 case 128:
  VAR_7->stat.sco_tx++;
  VAR_9.type = 0x83;
  break;
 default:
  return -VAR_0;
 };

 VAR_9.zero = 0;
 VAR_9.len = VAR_5->len;

 VAR_8 = FUNC_2(VAR_4 + VAR_5->len + 1, VAR_3);
 if (!VAR_8)
  return -VAR_2;

 FUNC_10(VAR_8, VAR_4);
 FUNC_6(VAR_5, FUNC_8(VAR_8, VAR_5->len), VAR_5->len);
 if (VAR_5->len & 0x0001)
  *FUNC_8(VAR_8, 1) = 0;


 FUNC_5(FUNC_7(VAR_8, VAR_4), &VAR_9, VAR_4);
 FUNC_9(&(VAR_6->txq), VAR_8);

 FUNC_3(VAR_6);

 FUNC_4(VAR_5);

 return 0;
}
