
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; struct net_device* dev; int protocol; } ;
struct TYPE_2__ {int tx_bytes; int tx_packets; } ;
struct net_device {TYPE_1__ stats; } ;
struct lapbethdev {struct net_device* ethdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,struct net_device*,int ,int ,int *,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ) ;
 struct lapbethdev* FUNC_3 (struct net_device*) ;
 unsigned char* FUNC_4 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_3, struct sk_buff *VAR_4)
{
 struct lapbethdev *VAR_5 = FUNC_3(VAR_3);
 unsigned char *VAR_6;
 struct net_device *VAR_7;
 int VAR_8 = VAR_4->len;

 VAR_4->protocol = FUNC_2(VAR_1);

 VAR_6 = FUNC_4(VAR_4, 2);

 *VAR_6++ = VAR_8 % 256;
 *VAR_6++ = VAR_8 / 256;

 VAR_3->stats.tx_packets++;
 VAR_3->stats.tx_bytes += VAR_8;

 VAR_4->dev = VAR_7 = VAR_5->ethdev;

 FUNC_0(VAR_4, VAR_7, VAR_0, VAR_2, ((void*)0), 0);

 FUNC_1(VAR_4);
}
