
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct sk_buff {int ip_summed; int protocol; struct net_device* dev; scalar_t__ data; } ;
struct net_local {TYPE_1__* ndev; } ;
struct TYPE_4__ {int rx_bytes; int rx_packets; int rx_errors; int rx_dropped; } ;
struct net_device {TYPE_2__ stats; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct sk_buff* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;
 int FUNC_8 (struct sk_buff*,int) ;
 scalar_t__ FUNC_9 (struct net_local*,int *) ;

__attribute__((used)) static void FUNC_10(struct net_device *VAR_4)
{
 struct net_local *VAR_5 = (struct net_local *) FUNC_5(VAR_4);
 struct sk_buff *VAR_6;
 unsigned int VAR_7;
 u32 VAR_8;

 VAR_8 = VAR_3 + VAR_2;
 VAR_6 = FUNC_1(VAR_8 + VAR_0);
 if (!VAR_6) {

  VAR_4->stats.rx_dropped++;
  FUNC_2(&VAR_5->ndev->dev, "Could not allocate receive buffer\n");
  return;
 }






 VAR_7 = FUNC_0(VAR_6->data);
 if (VAR_7)
  FUNC_8(VAR_6, VAR_7);

 FUNC_8(VAR_6, 2);

 VAR_8 = FUNC_9(VAR_5, (u8 *) VAR_6->data);

 if (!VAR_8) {
  VAR_4->stats.rx_errors++;
  FUNC_3(VAR_6);
  return;
 }

 FUNC_7(VAR_6, VAR_8);
 VAR_6->dev = VAR_4;

 VAR_6->protocol = FUNC_4(VAR_6, VAR_4);
 VAR_6->ip_summed = VAR_1;

 VAR_4->stats.rx_packets++;
 VAR_4->stats.rx_bytes += VAR_8;

 FUNC_6(VAR_6);
}
