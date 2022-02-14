
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {unsigned char* data; unsigned int len; } ;
struct netx_eth_priv {int lock; int id; scalar_t__ sram_base; } ;
struct TYPE_2__ {unsigned int tx_bytes; int tx_packets; } ;
struct net_device {TYPE_1__ stats; int trans_start; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_5 (scalar_t__,void*,unsigned int) ;
 int FUNC_6 (scalar_t__,int ,int) ;
 struct netx_eth_priv* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int
FUNC_12(struct sk_buff *VAR_2, struct net_device *VAR_3)
{
 struct netx_eth_priv *VAR_4 = FUNC_7(VAR_3);
 unsigned char *VAR_5 = VAR_2->data;
 unsigned int VAR_6 = VAR_2->len;

 FUNC_10(&VAR_4->lock);
 FUNC_5(VAR_4->sram_base + 1560, (void *)VAR_5, VAR_6);
 if (VAR_6 < 60) {
  FUNC_6(VAR_4->sram_base + 1560 + VAR_6, 0, 60 - VAR_6);
  VAR_6 = 60;
 }

 FUNC_9(FUNC_3(VAR_4->id),
            FUNC_2(VAR_4->id) |
            FUNC_1(1) |
            FUNC_0(VAR_6));

 VAR_3->trans_start = VAR_1;
 VAR_3->stats.tx_packets++;
 VAR_3->stats.tx_bytes += VAR_2->len;

 FUNC_8(VAR_3);
 FUNC_11(&VAR_4->lock);
 FUNC_4(VAR_2);

 return VAR_0;
}
