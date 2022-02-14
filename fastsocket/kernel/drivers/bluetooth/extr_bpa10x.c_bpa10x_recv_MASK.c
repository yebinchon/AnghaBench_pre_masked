
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ cb; void* dev; } ;
struct hci_vendor_hdr {int dlen; } ;
struct hci_sco_hdr {int dlen; } ;
struct hci_event_hdr {int plen; } ;
struct TYPE_3__ {int byte_rx; } ;
struct hci_dev {int name; TYPE_1__ stat; struct bpa10x_data* driver_data; } ;
struct hci_acl_hdr {int dlen; } ;
struct bpa10x_data {struct sk_buff** rx_skb; } ;
typedef int __u8 ;
struct TYPE_4__ {int pkt_type; } ;


 int FUNC_0 (char*,int ,int,void*,int) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;

 int FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (struct sk_buff*) ;
 struct sk_buff* FUNC_4 (int,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ,void*,int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_9(struct hci_dev *VAR_7, int VAR_8, void *VAR_9, int VAR_10)
{
 struct bpa10x_data *VAR_11 = VAR_7->driver_data;

 FUNC_0("%s queue %d buffer %p count %d", VAR_7->name,
       VAR_8, VAR_9, VAR_10);

 if (VAR_8 < 0 || VAR_8 > 1)
  return -VAR_0;

 VAR_7->stat.byte_rx += VAR_10;

 while (VAR_10) {
  struct sk_buff *VAR_12 = VAR_11->rx_skb[VAR_8];
  struct { __u8 type; int expect; } *VAR_13;
  int VAR_14, VAR_15 = 0;

  if (!VAR_12) {


   VAR_14 = *((__u8 *) VAR_9);
   VAR_10--; VAR_9++;

   switch (VAR_14) {
   case 130:
    if (VAR_10 >= VAR_4) {
     struct hci_event_hdr *VAR_16 = VAR_9;
     VAR_15 = VAR_4 + VAR_16->plen;
    } else
     return -VAR_0;
    break;

   case 131:
    if (VAR_10 >= VAR_3) {
     struct hci_acl_hdr *VAR_17 = VAR_9;
     VAR_15 = VAR_3 +
       FUNC_2(VAR_17->dlen);
    } else
     return -VAR_0;
    break;

   case 129:
    if (VAR_10 >= VAR_5) {
     struct hci_sco_hdr *VAR_18 = VAR_9;
     VAR_15 = VAR_5 + VAR_18->dlen;
    } else
     return -VAR_0;
    break;

   case 128:
    if (VAR_10 >= VAR_6) {
     struct hci_vendor_hdr *VAR_19 = VAR_9;
     VAR_15 = VAR_6 +
       FUNC_2(VAR_19->dlen);
    } else
     return -VAR_0;
    break;
   }

   VAR_12 = FUNC_4(VAR_15, VAR_2);
   if (!VAR_12) {
    FUNC_1("%s no memory for packet", VAR_7->name);
    return -VAR_1;
   }

   VAR_12->dev = (void *) VAR_7;

   VAR_11->rx_skb[VAR_8] = VAR_12;

   VAR_13 = (void *) VAR_12->cb;
   VAR_13->type = VAR_14;
   VAR_13->expect = VAR_15;
  } else {


   VAR_13 = (void *) VAR_12->cb;
   VAR_15 = VAR_13->expect;
  }

  VAR_15 = FUNC_7(VAR_15, VAR_10);

  FUNC_6(FUNC_8(VAR_12, VAR_15), VAR_9, VAR_15);

  VAR_13->expect -= VAR_15;

  if (VAR_13->expect == 0) {


   VAR_11->rx_skb[VAR_8] = ((void*)0);

   FUNC_3(VAR_12)->pkt_type = VAR_13->type;
   FUNC_5(VAR_12);
  }

  VAR_10 -= VAR_15; VAR_9 += VAR_15;
 }

 return 0;
}
