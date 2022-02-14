
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct sk_buff {unsigned int len; TYPE_10__* dev; int protocol; void* pkt_type; int mac_header; scalar_t__ data; } ;
struct TYPE_16__ {int id; } ;
struct TYPE_17__ {TYPE_4__ l3; } ;
struct qeth_hdr {TYPE_5__ hdr; } ;
struct TYPE_21__ {unsigned int rx_bytes; int rx_packets; } ;
struct TYPE_20__ {int sniffer; } ;
struct TYPE_18__ {int type; } ;
struct TYPE_15__ {size_t b_index; int e_offset; int b_element; } ;
struct TYPE_14__ {TYPE_1__* in_q; } ;
struct qeth_card {TYPE_9__ stats; int napi; int vlangrp; TYPE_8__ options; TYPE_10__* dev; TYPE_6__ info; TYPE_3__ rx; TYPE_2__ qdio; } ;
typedef int __u16 ;
struct TYPE_19__ {int (* create ) (struct sk_buff*,TYPE_10__*,int ,int ,char*,int ) ;} ;
struct TYPE_13__ {int * bufs; } ;
struct TYPE_12__ {int addr_len; int dev_addr; TYPE_7__* header_ops; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int,struct qeth_hdr*,int ) ;
 int FUNC_2 (int ,int,char*) ;


 int VAR_6 ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,TYPE_10__*) ;
 int FUNC_5 (int *,struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 struct sk_buff* FUNC_7 (struct qeth_card*,int *,int *,int *,struct qeth_hdr**) ;
 int FUNC_8 (struct qeth_card*,struct sk_buff*,struct qeth_hdr*,int *) ;
 int FUNC_9 (struct sk_buff*,TYPE_10__*,int ,int ,char*,int ) ;
 int FUNC_10 (int *,int ,int ,struct sk_buff*) ;

__attribute__((used)) static int FUNC_11(struct qeth_card *VAR_7,
    int VAR_8, int *VAR_9)
{
 int VAR_10 = 0;
 struct sk_buff *VAR_11;
 struct qeth_hdr *VAR_12;
 __u16 VAR_13 = 0;
 int VAR_14;
 unsigned int VAR_15;
 __u16 VAR_16;

 *VAR_9 = 0;
 FUNC_0(!VAR_8);
 while (VAR_8) {
  VAR_11 = FUNC_7(VAR_7,
   &VAR_7->qdio.in_q->bufs[VAR_7->rx.b_index],
   &VAR_7->rx.b_element, &VAR_7->rx.e_offset, &VAR_12);
  if (!VAR_11) {
   *VAR_9 = 1;
   break;
  }
  VAR_11->dev = VAR_7->dev;
  switch (VAR_12->hdr.l3.id) {
  case 128:
   VAR_16 = *(__u16 *)VAR_11->data;
   if ((VAR_7->info.type == VAR_4) &&
       (VAR_16 == VAR_1)) {
    VAR_11->protocol = VAR_1;
    VAR_11->pkt_type = VAR_3;
    VAR_11->mac_header = VAR_2;
    VAR_11->dev = VAR_7->dev;
    VAR_15 = VAR_11->len;
    VAR_7->dev->header_ops->create(VAR_11, VAR_7->dev, 0,
     VAR_7->dev->dev_addr, "FAKELL",
     VAR_7->dev->addr_len);
    FUNC_6(VAR_11);
   } else {
    VAR_14 = FUNC_8(VAR_7, VAR_11, VAR_12,
             &VAR_13);
    VAR_15 = VAR_11->len;
    if (VAR_14 && !VAR_7->options.sniffer)
     FUNC_10(&VAR_7->napi,
      VAR_7->vlangrp, VAR_13, VAR_11);
    else
     FUNC_5(&VAR_7->napi, VAR_11);
   }
   break;
  case 129:
   VAR_11->pkt_type = VAR_3;
   VAR_11->protocol = FUNC_4(VAR_11, VAR_11->dev);
   VAR_15 = VAR_11->len;
   FUNC_6(VAR_11);
   break;
  default:
   FUNC_3(VAR_11);
   FUNC_2(VAR_6, 3, "inbunkno");
   FUNC_1(VAR_0, 3, VAR_12, VAR_5);
   continue;
  }
  VAR_10++;
  VAR_8--;
  VAR_7->stats.rx_packets++;
  VAR_7->stats.rx_bytes += VAR_15;
 }
 return VAR_10;
}
