
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spider_net_card {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int tx_dropped; } ;
struct net_device {TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct spider_net_card* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct spider_net_card*) ;
 scalar_t__ FUNC_3 (struct spider_net_card*,struct sk_buff*) ;
 int FUNC_4 (struct spider_net_card*,int ) ;
 int FUNC_5 (struct spider_net_card*) ;

__attribute__((used)) static int
FUNC_6(struct sk_buff *VAR_2, struct net_device *VAR_3)
{
 int VAR_4;
 struct spider_net_card *VAR_5 = FUNC_0(VAR_3);

 FUNC_4(VAR_5, 0);

 if (FUNC_3(VAR_5, VAR_2) != 0) {
  VAR_3->stats.tx_dropped++;
  FUNC_1(VAR_3);
  return VAR_0;
 }

 VAR_4 = FUNC_5(VAR_5);
 if (VAR_4 < 5)
  FUNC_2(VAR_5);
 return VAR_1;
}
