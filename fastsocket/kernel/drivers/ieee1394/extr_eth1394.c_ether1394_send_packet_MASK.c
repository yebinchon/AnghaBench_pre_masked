
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct packet_task {scalar_t__ tx_type; struct hpsb_packet* packet; TYPE_1__* skb; int addr; int dest_node; struct eth1394_priv* priv; } ;
struct hpsb_packet {int dummy; } ;
struct eth1394_priv {int host; } ;
typedef int quadlet_t ;
struct TYPE_2__ {int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct hpsb_packet* FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (struct hpsb_packet*) ;
 int FUNC_2 (struct hpsb_packet*,struct eth1394_priv*,TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (struct hpsb_packet*,int ,int ,int ,int ,unsigned int) ;
 int FUNC_4 (struct hpsb_packet*) ;
 scalar_t__ FUNC_5 (struct hpsb_packet*) ;
 int FUNC_6 (struct hpsb_packet*,int ,struct packet_task*) ;

__attribute__((used)) static int FUNC_7(struct packet_task *VAR_5, unsigned int VAR_6)
{
 struct eth1394_priv *VAR_7 = VAR_5->priv;
 struct hpsb_packet *VAR_8 = ((void*)0);

 VAR_8 = FUNC_0(VAR_7->host);
 if (!VAR_8)
  return -VAR_2;

 if (VAR_5->tx_type == VAR_3) {
  int VAR_9 = VAR_6 + 2 * sizeof(quadlet_t);

  FUNC_2(VAR_8, VAR_7, VAR_5->skb, VAR_9);
 } else if (FUNC_3(VAR_8, VAR_7->host,
            VAR_5->dest_node,
            VAR_5->addr, VAR_5->skb->data,
            VAR_6)) {
  FUNC_4(VAR_8);
  return -VAR_0;
 }

 VAR_5->packet = VAR_8;
 FUNC_6(VAR_5->packet, VAR_4,
          VAR_5);

 if (FUNC_5(VAR_8) < 0) {
  FUNC_1(VAR_8);
  return -VAR_1;
 }

 return 0;
}
