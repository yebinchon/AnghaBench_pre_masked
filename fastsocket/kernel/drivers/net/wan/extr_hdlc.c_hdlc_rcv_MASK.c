
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct packet_type {int dummy; } ;
struct net_device {int dummy; } ;
struct hdlc_device {TYPE_1__* proto; } ;
struct TYPE_2__ {int (* netif_rx ) (struct sk_buff*) ;} ;


 int FUNC_0 (int) ;
 int * FUNC_1 (struct net_device*) ;
 struct hdlc_device* FUNC_2 (struct net_device*) ;
 int VAR_0 ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_1, struct net_device *VAR_2,
      struct packet_type *VAR_3, struct net_device *VAR_4)
{
 struct hdlc_device *VAR_5 = FUNC_2(VAR_2);

 if (FUNC_1(VAR_2) != &VAR_0) {
  FUNC_3(VAR_1);
  return 0;
 }

 FUNC_0(!VAR_5->proto->netif_rx);
 return VAR_5->proto->netif_rx(VAR_1);
}
