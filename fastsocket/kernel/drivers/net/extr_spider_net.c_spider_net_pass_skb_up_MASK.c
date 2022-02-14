
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct spider_net_hw_descr {int data_status; int data_error; int valid_size; } ;
struct spider_net_descr {struct sk_buff* skb; struct spider_net_hw_descr* hwdescr; } ;
struct TYPE_3__ {scalar_t__ rx_csum; } ;
struct spider_net_card {TYPE_1__ options; struct net_device* netdev; } ;
struct sk_buff {scalar_t__ len; void* ip_summed; int protocol; } ;
struct TYPE_4__ {int rx_bytes; int rx_packets; } ;
struct net_device {TYPE_2__ stats; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*,struct net_device*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct sk_buff*,int ) ;

__attribute__((used)) static void
FUNC_4(struct spider_net_descr *VAR_6,
         struct spider_net_card *VAR_7)
{
 struct spider_net_hw_descr *VAR_8 = VAR_6->hwdescr;
 struct sk_buff *VAR_9 = VAR_6->skb;
 struct net_device *VAR_10 = VAR_7->netdev;
 u32 VAR_11 = VAR_8->data_status;
 u32 VAR_12 = VAR_8->data_error;

 FUNC_3(VAR_9, VAR_8->valid_size);




 FUNC_2(VAR_9, 2);
 VAR_9->protocol = FUNC_0(VAR_9, VAR_10);


 if (VAR_7->options.rx_csum) {
  if ( ( (VAR_11 & VAR_4) ==
         VAR_4) &&
       !(VAR_12 & VAR_3))
   VAR_9->ip_summed = VAR_1;
  else
   VAR_9->ip_summed = VAR_0;
 } else
  VAR_9->ip_summed = VAR_0;

 if (VAR_11 & VAR_5) {



 }


 VAR_10->stats.rx_packets++;
 VAR_10->stats.rx_bytes += VAR_9->len;


 FUNC_1(VAR_9);
}
