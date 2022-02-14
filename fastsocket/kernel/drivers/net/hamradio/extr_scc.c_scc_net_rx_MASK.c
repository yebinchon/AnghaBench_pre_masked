
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; int protocol; } ;
struct TYPE_2__ {int rx_bytes; int rx_packets; } ;
struct scc_channel {int dev; TYPE_1__ dev_stat; } ;


 int FUNC_0 (struct sk_buff*,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_3(struct scc_channel *VAR_0, struct sk_buff *VAR_1)
{
 if (VAR_1->len == 0) {
  FUNC_1(VAR_1);
  return;
 }

 VAR_0->dev_stat.rx_packets++;
 VAR_0->dev_stat.rx_bytes += VAR_1->len;

 VAR_1->protocol = FUNC_0(VAR_1, VAR_0->dev);

 FUNC_2(VAR_1);
 return;
}
