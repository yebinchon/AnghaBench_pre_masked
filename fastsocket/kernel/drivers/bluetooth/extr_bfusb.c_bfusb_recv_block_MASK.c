
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {void* dev; } ;
struct hci_sco_hdr {int dlen; } ;
struct hci_event_hdr {int plen; } ;
struct hci_acl_hdr {int dlen; } ;
struct bfusb_data {struct sk_buff* reassembly; TYPE_1__* hdev; } ;
struct TYPE_4__ {unsigned char pkt_type; } ;
struct TYPE_3__ {int name; } ;


 int FUNC_0 (char*,struct bfusb_data*,int,unsigned char*,int) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;


 int VAR_7 ;
 int FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (struct sk_buff*) ;
 struct sk_buff* FUNC_4 (int,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int ,unsigned char*,int) ;
 int FUNC_8 (struct sk_buff*,int) ;

__attribute__((used)) static inline int FUNC_9(struct bfusb_data *VAR_8, int VAR_9, unsigned char *VAR_10, int VAR_11)
{
 FUNC_0("bfusb %p hdr 0x%02x data %p len %d", VAR_8, VAR_9, VAR_10, VAR_11);

 if (VAR_9 & 0x10) {
  FUNC_1("%s error in block", VAR_8->hdev->name);
  FUNC_6(VAR_8->reassembly);
  VAR_8->reassembly = ((void*)0);
  return -VAR_1;
 }

 if (VAR_9 & 0x04) {
  struct sk_buff *VAR_12;
  unsigned char VAR_13;
  int VAR_14 = 0;

  if (VAR_8->reassembly) {
   FUNC_1("%s unexpected start block", VAR_8->hdev->name);
   FUNC_6(VAR_8->reassembly);
   VAR_8->reassembly = ((void*)0);
  }

  if (VAR_11 < 1) {
   FUNC_1("%s no packet type found", VAR_8->hdev->name);
   return -VAR_3;
  }

  VAR_13 = *VAR_10++; VAR_11--;

  switch (VAR_13) {
  case 129:
   if (VAR_11 >= VAR_6) {
    struct hci_event_hdr *VAR_15 = (struct hci_event_hdr *) VAR_10;
    VAR_14 = VAR_6 + VAR_15->plen;
   } else {
    FUNC_1("%s event block is too short", VAR_8->hdev->name);
    return -VAR_0;
   }
   break;

  case 130:
   if (VAR_11 >= VAR_5) {
    struct hci_acl_hdr *VAR_16 = (struct hci_acl_hdr *) VAR_10;
    VAR_14 = VAR_5 + FUNC_2(VAR_16->dlen);
   } else {
    FUNC_1("%s data block is too short", VAR_8->hdev->name);
    return -VAR_0;
   }
   break;

  case 128:
   if (VAR_11 >= VAR_7) {
    struct hci_sco_hdr *VAR_17 = (struct hci_sco_hdr *) VAR_10;
    VAR_14 = VAR_7 + VAR_17->dlen;
   } else {
    FUNC_1("%s audio block is too short", VAR_8->hdev->name);
    return -VAR_0;
   }
   break;
  }

  VAR_12 = FUNC_4(VAR_14, VAR_4);
  if (!VAR_12) {
   FUNC_1("%s no memory for the packet", VAR_8->hdev->name);
   return -VAR_2;
  }

  VAR_12->dev = (void *) VAR_8->hdev;
  FUNC_3(VAR_12)->pkt_type = VAR_13;

  VAR_8->reassembly = VAR_12;
 } else {
  if (!VAR_8->reassembly) {
   FUNC_1("%s unexpected continuation block", VAR_8->hdev->name);
   return -VAR_1;
  }
 }

 if (VAR_11 > 0)
  FUNC_7(FUNC_8(VAR_8->reassembly, VAR_11), VAR_10, VAR_11);

 if (VAR_9 & 0x08) {
  FUNC_5(VAR_8->reassembly);
  VAR_8->reassembly = ((void*)0);
 }

 return 0;
}
