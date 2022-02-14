
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int protocol; int len; scalar_t__ data; } ;
struct TYPE_2__ {int rx_packets; int rx_bytes; } ;
struct emac_priv {TYPE_1__ net_dev_stats; int ndev; } ;
struct emac_netpktobj {int pkt_length; scalar_t__ pkt_token; } ;


 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_4(struct emac_priv *VAR_0,
     struct emac_netpktobj *VAR_1)
{
 struct sk_buff *VAR_2;
 VAR_2 = (struct sk_buff *)VAR_1->pkt_token;

 FUNC_3(VAR_2, VAR_1->pkt_length);
 FUNC_0((unsigned long)VAR_2->data, VAR_2->len);
 VAR_2->protocol = FUNC_1(VAR_2, VAR_0->ndev);
 FUNC_2(VAR_2);
 VAR_0->net_dev_stats.rx_bytes += VAR_1->pkt_length;
 VAR_0->net_dev_stats.rx_packets++;
 return 0;
}
