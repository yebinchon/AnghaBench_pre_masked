
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tcphdr {scalar_t__ fin; scalar_t__ ack; scalar_t__ syn; scalar_t__ rst; } ;
struct sk_buff {int dummy; } ;
struct nes_cm_node {int state; } ;
struct nes_cm_core {int dummy; } ;
typedef enum nes_tcpip_pkt_type { ____Placeholder_nes_tcpip_pkt_type } nes_tcpip_pkt_type ;
struct TYPE_2__ {int ihl; } ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (struct nes_cm_node*,struct tcphdr*,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct nes_cm_node*,struct sk_buff*,struct tcphdr*) ;
 int FUNC_3 (struct nes_cm_node*) ;
 int FUNC_4 (struct nes_cm_node*,struct sk_buff*,struct tcphdr*) ;
 int FUNC_5 (struct nes_cm_node*,struct sk_buff*,struct tcphdr*) ;
 int FUNC_6 (struct nes_cm_node*,struct sk_buff*,struct tcphdr*) ;
 TYPE_1__* FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int ,char*,struct nes_cm_node*,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_9 (struct sk_buff*,int) ;
 struct tcphdr* FUNC_10 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_11(struct nes_cm_node *VAR_2, struct sk_buff *VAR_3,
      struct nes_cm_core *VAR_4)
{
 enum nes_tcpip_pkt_type VAR_5 = VAR_1;
 struct tcphdr *VAR_6 = FUNC_10(VAR_3);
 u32 VAR_7 = 0;
 int VAR_8 = 0;

 FUNC_9(VAR_3, FUNC_7(VAR_3)->ihl << 2);

 FUNC_8(VAR_0, "process_packet: cm_node=%p state =%d syn=%d "
    "ack=%d rst=%d fin=%d\n", VAR_2, VAR_2->state, VAR_6->syn,
    VAR_6->ack, VAR_6->rst, VAR_6->fin);

 if (VAR_6->rst) {
  VAR_5 = 130;
 } else if (VAR_6->syn) {
  VAR_5 = 129;
  if (VAR_6->ack)
   VAR_5 = 128;
 } else if (VAR_6->ack) {
  VAR_5 = 131;
 }
 if (VAR_6->fin)
  VAR_7 = 1;

 switch (VAR_5) {
 case 129:
  FUNC_5(VAR_2, VAR_3, VAR_6);
  break;
 case 128:
  FUNC_6(VAR_2, VAR_3, VAR_6);
  break;
 case 131:
  VAR_8 = FUNC_2(VAR_2, VAR_3, VAR_6);
  if (VAR_7 && !VAR_8)
   FUNC_3(VAR_2);
  break;
 case 130:
  FUNC_4(VAR_2, VAR_3, VAR_6);
  break;
 default:
  if ((VAR_7) && (!FUNC_0(VAR_2, VAR_6, VAR_3)))
   FUNC_3(VAR_2);
  FUNC_1(VAR_3);
  break;
 }
}
