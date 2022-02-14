
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct hci_dev {scalar_t__ driver_data; } ;
typedef int cmd ;
struct TYPE_4__ {int txq; } ;
typedef TYPE_1__ bluecard_info_t ;
struct TYPE_5__ {int pkt_type; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_2__* FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,unsigned char*,int) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (int *,struct sk_buff*) ;

__attribute__((used)) static int FUNC_7(struct hci_dev *VAR_7, int VAR_8)
{
 bluecard_info_t *VAR_9 = (bluecard_info_t *)(VAR_7->driver_data);
 struct sk_buff *VAR_10;


 unsigned char VAR_11[] = { VAR_1, 0x09, 0xfc, 0x01, 0x03 };

 if (!(VAR_10 = FUNC_3(VAR_2, VAR_0))) {
  FUNC_0("Can't allocate mem for new packet");
  return -1;
 }

 switch (VAR_8) {
 case 460800:
  VAR_11[4] = 0x00;
  FUNC_2(VAR_10)->pkt_type = VAR_5;
  break;
 case 230400:
  VAR_11[4] = 0x01;
  FUNC_2(VAR_10)->pkt_type = VAR_4;
  break;
 case 115200:
  VAR_11[4] = 0x02;
  FUNC_2(VAR_10)->pkt_type = VAR_3;
  break;
 case 57600:

 default:
  VAR_11[4] = 0x03;
  FUNC_2(VAR_10)->pkt_type = VAR_6;
  break;
 }

 FUNC_4(FUNC_5(VAR_10, sizeof(VAR_11)), VAR_11, sizeof(VAR_11));

 FUNC_6(&(VAR_9->txq), VAR_10);

 FUNC_1(VAR_9);

 return 0;
}
