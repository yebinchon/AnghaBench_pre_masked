
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct rndis_packet {scalar_t__ data_offset; scalar_t__ data_len; } ;
struct TYPE_3__ {struct rndis_packet pkt; } ;
struct rndis_message {TYPE_1__ msg; } ;
struct rndis_device {TYPE_2__* net_dev; } ;
struct ndis_pkt_8021q_info {int vlanid; int pri; } ;
struct hv_netvsc_packet {scalar_t__ total_data_buflen; int is_data_pkt; int vlan_tci; void* data; } ;
struct TYPE_4__ {int dev; int ndev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,struct hv_netvsc_packet*) ;
 struct ndis_pkt_8021q_info* FUNC_2 (struct rndis_packet*,int ) ;

__attribute__((used)) static void FUNC_3(struct rndis_device *VAR_4,
       struct rndis_message *VAR_5,
       struct hv_netvsc_packet *VAR_6)
{
 struct rndis_packet *VAR_7;
 u32 VAR_8;
 struct ndis_pkt_8021q_info *VAR_9;

 VAR_7 = &VAR_5->msg.pkt;


 VAR_8 = VAR_1 + VAR_7->data_offset;

 VAR_6->total_data_buflen -= VAR_8;





 if (VAR_6->total_data_buflen < VAR_7->data_len) {
  FUNC_0(VAR_4->net_dev->ndev, "rndis message buffer "
      "overflow detected (got %u, min %u)"
      "...dropping this message!\n",
      VAR_6->total_data_buflen, VAR_7->data_len);
  return;
 }






 VAR_6->total_data_buflen = VAR_7->data_len;
 VAR_6->data = (void *)((unsigned long)VAR_6->data + VAR_8);

 VAR_6->is_data_pkt = 1;

 VAR_9 = FUNC_2(VAR_7, VAR_0);
 if (VAR_9) {
  VAR_6->vlan_tci = VAR_3 | VAR_9->vlanid |
   (VAR_9->pri << VAR_2);
 } else {
  VAR_6->vlan_tci = 0;
 }

 FUNC_1(VAR_4->net_dev->dev, VAR_6);
}
