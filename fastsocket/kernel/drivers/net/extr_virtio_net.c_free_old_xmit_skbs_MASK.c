
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct virtnet_info {TYPE_2__* dev; int svq; } ;
struct sk_buff {scalar_t__ len; } ;
struct TYPE_6__ {scalar_t__ num_sg; } ;
struct TYPE_4__ {int tx_packets; int tx_bytes; } ;
struct TYPE_5__ {TYPE_1__ stats; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (char*,struct sk_buff*) ;
 TYPE_3__* FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (int ,unsigned int*) ;

__attribute__((used)) static unsigned int FUNC_4(struct virtnet_info *VAR_0)
{
 struct sk_buff *VAR_1;
 unsigned int VAR_2, VAR_3 = 0;

 while ((VAR_1 = FUNC_3(VAR_0->svq, &VAR_2)) != ((void*)0)) {
  FUNC_1("Sent skb %p\n", VAR_1);
  VAR_0->dev->stats.tx_bytes += VAR_1->len;
  VAR_0->dev->stats.tx_packets++;
  VAR_3 += FUNC_2(VAR_1)->num_sg;
  FUNC_0(VAR_1);
 }
 return VAR_3;
}
