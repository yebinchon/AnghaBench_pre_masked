
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int ip_summed; int protocol; } ;
struct TYPE_2__ {size_t rx_bytes; int rx_packets; int rx_dropped; } ;
struct net_device {TYPE_1__ stats; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 struct sk_buff* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*,int ,size_t) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,size_t) ;
 int FUNC_5 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static inline ssize_t FUNC_6(struct net_device *VAR_4, size_t VAR_5)
{
 struct sk_buff *VAR_6;

 if (!VAR_5)
  return VAR_5;

 VAR_6 = FUNC_0(VAR_5 + VAR_3);
 if (!VAR_6) {
  VAR_4->stats.rx_dropped++;
  return -VAR_2;
 }

 FUNC_5(VAR_6, VAR_3);
 if (FUNC_2(VAR_4, FUNC_4(VAR_6, VAR_5), VAR_5))
  return -VAR_1;

 VAR_6->protocol = FUNC_1(VAR_6, VAR_4);
 VAR_6->ip_summed = VAR_0;

 FUNC_3(VAR_6);

 VAR_4->stats.rx_packets++;
 VAR_4->stats.rx_bytes += VAR_5;

 return VAR_5;
}
