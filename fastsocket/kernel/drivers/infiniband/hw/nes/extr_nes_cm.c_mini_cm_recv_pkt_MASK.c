
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcphdr {int fin; int rst; scalar_t__ ack; int syn; int source; int dest; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct nes_vnic {int dummy; } ;
struct nes_cm_node {scalar_t__ state; TYPE_1__* nesqp; } ;
struct nes_cm_listener {int ref_count; scalar_t__ conn_type; int * cm_id; } ;
struct nes_cm_info {scalar_t__ conn_type; int * cm_id; void* loc_port; void* loc_addr; void* rem_addr; void* rem_port; } ;
struct nes_cm_core {int dummy; } ;
struct iphdr {int tot_len; int saddr; int daddr; } ;
typedef int __be32 ;
struct TYPE_2__ {scalar_t__ pau_mode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nes_cm_node*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*) ;
 struct nes_cm_listener* FUNC_5 (struct nes_cm_core*,void*,void*,int ) ;
 struct nes_cm_node* FUNC_6 (struct nes_cm_core*,void*,void*,void*,void*) ;
 struct nes_cm_node* FUNC_7 (struct nes_cm_core*,struct nes_vnic*,struct nes_cm_info*,struct nes_cm_listener*) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (struct sk_buff*,struct nes_vnic*,TYPE_1__*) ;
 void* FUNC_10 (int ) ;
 void* FUNC_11 (int ) ;
 int FUNC_12 (struct nes_cm_node*,struct sk_buff*,struct nes_cm_core*) ;
 int FUNC_13 (struct nes_cm_core*,struct nes_cm_node*) ;
 int FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_16(struct nes_cm_core *VAR_6,
       struct nes_vnic *VAR_7, struct sk_buff *VAR_8)
{
 struct nes_cm_node *VAR_9 = ((void*)0);
 struct nes_cm_listener *VAR_10 = ((void*)0);
 struct iphdr *VAR_11;
 struct tcphdr *VAR_12;
 struct nes_cm_info VAR_13;
 int VAR_14 = 1;
 __be32 VAR_15, VAR_16;

 if (!VAR_8)
  return 0;
 if (VAR_8->len < sizeof(struct iphdr) + sizeof(struct tcphdr))
  return 0;

 VAR_11 = (struct iphdr *)VAR_8->data;
 VAR_12 = (struct tcphdr *)(VAR_8->data + sizeof(struct iphdr));

 VAR_13.loc_addr = FUNC_10(VAR_11->daddr);
 VAR_13.loc_port = FUNC_11(VAR_12->dest);
 VAR_13.rem_addr = FUNC_10(VAR_11->saddr);
 VAR_13.rem_port = FUNC_11(VAR_12->source);

 VAR_15 = FUNC_3(VAR_11->daddr);
 VAR_16 = FUNC_3(VAR_11->saddr);

 FUNC_8(VAR_3, "Received packet: dest=%pI4:0x%04X src=%pI4:0x%04X\n",
    &VAR_15, VAR_12->dest, &VAR_16, VAR_12->source);

 do {
  VAR_9 = FUNC_6(VAR_6,
        VAR_13.rem_port, VAR_13.rem_addr,
        VAR_13.loc_port, VAR_13.loc_addr);

  if (!VAR_9) {


   if ((!VAR_12->syn) || (VAR_12->ack)) {
    VAR_14 = 0;
    break;
   }
   VAR_10 = FUNC_5(VAR_6, VAR_13.loc_addr,
       VAR_13.loc_port,
       VAR_0);
   if (!VAR_10) {
    VAR_13.cm_id = ((void*)0);
    VAR_13.conn_type = 0;
    FUNC_8(VAR_3, "Unable to find listener for the pkt\n");
    VAR_14 = 0;
    break;
   }
   VAR_13.cm_id = VAR_10->cm_id;
   VAR_13.conn_type = VAR_10->conn_type;
   VAR_9 = FUNC_7(VAR_6, VAR_7, &VAR_13,
            VAR_10);
   if (!VAR_9) {
    FUNC_8(VAR_3, "Unable to allocate "
       "node\n");
    VAR_5++;
    FUNC_1(&VAR_10->ref_count);
    FUNC_4(VAR_8);
    break;
   }
   if (!VAR_12->rst && !VAR_12->fin) {
    VAR_9->state = VAR_1;
   } else {
    VAR_5++;
    FUNC_13(VAR_6, VAR_9);
    FUNC_4(VAR_8);
    break;
   }
   FUNC_0(VAR_9);
  } else if (VAR_9->state == VAR_2) {
   if (VAR_9->nesqp->pau_mode)
    FUNC_9(VAR_8, VAR_7, VAR_9->nesqp);
   else {
    FUNC_13(VAR_6, VAR_9);
    FUNC_2(&VAR_4);
    FUNC_4(VAR_8);
   }
   break;
  }
  FUNC_14(VAR_8);
  FUNC_15(VAR_8, sizeof(*VAR_12));
  VAR_8->len = FUNC_11(VAR_11->tot_len);
  FUNC_12(VAR_9, VAR_8, VAR_6);
  FUNC_13(VAR_6, VAR_9);
 } while (0);
 return VAR_14;
}
