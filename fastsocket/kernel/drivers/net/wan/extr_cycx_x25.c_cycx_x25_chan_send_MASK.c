
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {unsigned int len; int data; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {unsigned int tx_bytes; int tx_packets; } ;
struct cycx_x25_channel {TYPE_2__ ifstats; int lcn; int link; struct cycx_device* card; } ;
struct TYPE_3__ {unsigned int mtu; } ;
struct cycx_device {TYPE_1__ wandev; } ;


 scalar_t__ FUNC_0 (struct cycx_device*,int ,int ,int,unsigned int,int ) ;
 struct cycx_x25_channel* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0, struct sk_buff *VAR_1)
{
 struct cycx_x25_channel *VAR_2 = FUNC_1(VAR_0);
 struct cycx_device *VAR_3 = VAR_2->card;
 int VAR_4 = 0;
 unsigned VAR_5 = VAR_1->len;

 if (VAR_1->len > VAR_3->wandev.mtu) {
  VAR_5 = VAR_3->wandev.mtu;
  VAR_4 = 0x10;
 }

 if (FUNC_0(VAR_3, VAR_2->link, VAR_2->lcn, VAR_4, VAR_5, VAR_1->data))
  return 1;

 if (VAR_4) {
  FUNC_2(VAR_1, VAR_5);
  return 1;
 }

 ++VAR_2->ifstats.tx_packets;
 VAR_2->ifstats.tx_bytes += VAR_5;

 return 0;
}
