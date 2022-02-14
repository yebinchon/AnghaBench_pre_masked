
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int cb; int protocol; int pkt_type; int dev; scalar_t__ data; } ;
struct libipw_rx_stats {int dummy; } ;
struct libipw_hdr_4addr {int addr2; int addr3; int frame_ctl; } ;
struct TYPE_4__ {int length; } ;
struct TYPE_5__ {TYPE_1__ frame; } ;
struct ipw_rx_packet {TYPE_2__ u; } ;
struct ipw_rx_mem_buffer {struct sk_buff* skb; } ;
struct ipw_priv {int config; TYPE_3__* ieee; int bssid; } ;
struct TYPE_6__ {scalar_t__ iw_mode; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ipw_priv*,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,struct libipw_hdr_4addr*,struct libipw_rx_stats*) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,struct libipw_rx_stats*,int) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,scalar_t__) ;
 int FUNC_11 (struct sk_buff*,int) ;
 int FUNC_12 (struct sk_buff*,scalar_t__) ;
 int FUNC_13 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_14(struct ipw_priv *VAR_8,
       struct ipw_rx_mem_buffer *VAR_9,
       struct libipw_rx_stats *VAR_10)
{
 struct sk_buff *VAR_11 = VAR_9->skb;
 struct ipw_rx_packet *VAR_12 = (struct ipw_rx_packet *)VAR_11->data;
 struct libipw_hdr_4addr *VAR_13 = (struct libipw_hdr_4addr *)
     (VAR_11->data + VAR_5);

 FUNC_5(VAR_8->ieee, VAR_13, VAR_10);

 if (VAR_8->ieee->iw_mode == VAR_6 &&
     ((FUNC_1(FUNC_4(VAR_13->frame_ctl)) ==
       VAR_4) ||
      (FUNC_1(FUNC_4(VAR_13->frame_ctl)) ==
       VAR_3))) {
  if (!FUNC_6(VAR_13->addr3, VAR_8->bssid, VAR_1))
   FUNC_3(VAR_8, VAR_13->addr2);
 }

 if (VAR_8->config & VAR_0) {
  FUNC_0("sending stat packet\n");



  FUNC_12(VAR_11, FUNC_4(VAR_12->u.frame.length) +
   VAR_5);


  FUNC_10(VAR_11, VAR_5);


  FUNC_7(FUNC_11(VAR_11, sizeof(*VAR_10)), VAR_10, sizeof(*VAR_10));

  VAR_11->dev = VAR_8->ieee->dev;


  FUNC_13(VAR_11);

  VAR_11->pkt_type = VAR_7;
  VAR_11->protocol = FUNC_2(VAR_2);
  FUNC_8(VAR_11->cb, 0, sizeof(VAR_9->skb->cb));
  FUNC_9(VAR_11);
  VAR_9->skb = ((void*)0);
 }
}
