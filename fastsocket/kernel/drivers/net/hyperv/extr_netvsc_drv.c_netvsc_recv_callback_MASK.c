
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int vlan_tci; int ip_summed; int protocol; } ;
struct netvsc_device {struct net_device* ndev; } ;
struct TYPE_2__ {int rx_bytes; int rx_packets; int rx_dropped; } ;
struct net_device {TYPE_1__ stats; } ;
struct hv_netvsc_packet {int total_data_buflen; int vlan_tci; int data; void* status; } ;
struct hv_device {int dummy; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (struct sk_buff*,struct net_device*) ;
 scalar_t__ FUNC_1 (struct hv_device*) ;
 int FUNC_2 (int ,int ,int ) ;
 struct sk_buff* FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct net_device*,char*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_7 (int) ;

int FUNC_8(struct hv_device *VAR_2,
    struct hv_netvsc_packet *VAR_3)
{
 struct net_device *VAR_4;
 struct sk_buff *VAR_5;

 VAR_4 = ((struct netvsc_device *)FUNC_1(VAR_2))->ndev;
 if (!VAR_4) {
  FUNC_4(VAR_4, "got receive callback but net device"
   " not initialized yet\n");
  VAR_3->status = VAR_1;
  return 0;
 }


 VAR_5 = FUNC_3(VAR_4, VAR_3->total_data_buflen);
 if (FUNC_7(!VAR_5)) {
  ++VAR_4->stats.rx_dropped;
  VAR_3->status = VAR_1;
  return 0;
 }





 FUNC_2(FUNC_6(VAR_5, VAR_3->total_data_buflen), VAR_3->data,
  VAR_3->total_data_buflen);

 VAR_5->protocol = FUNC_0(VAR_5, VAR_4);
 VAR_5->ip_summed = VAR_0;
 VAR_5->vlan_tci = VAR_3->vlan_tci;

 VAR_4->stats.rx_packets++;
 VAR_4->stats.rx_bytes += VAR_3->total_data_buflen;






 FUNC_5(VAR_5);

 return 0;
}
