
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct tcphdr {int doff; int ack_seq; int seq; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {void* loc_seq_num; int rcv_nxt; void* rem_ack_num; } ;
struct nes_cm_node {int state; TYPE_1__ tcp_cntxt; } ;
 int VAR_0 ;
 int FUNC_0 (struct nes_cm_node*) ;
 int FUNC_1 (struct nes_cm_node*,struct tcphdr*,struct sk_buff*) ;
 int FUNC_2 (struct nes_cm_node*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct nes_cm_node*,struct tcphdr*,struct sk_buff*,int,int ) ;
 int FUNC_5 (int ,char*,struct nes_cm_node*) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (struct nes_cm_node*,struct sk_buff*,int) ;
 int FUNC_8 (struct nes_cm_node*,struct sk_buff*) ;
 int FUNC_9 (struct nes_cm_node*,struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_11(struct nes_cm_node *VAR_1, struct sk_buff *VAR_2,
         struct tcphdr *VAR_3)
{
 int VAR_4;
 u32 VAR_5;
 int VAR_6;

 VAR_6 = (VAR_3->doff << 2) - sizeof(struct tcphdr);
 FUNC_10(VAR_2, 0);
 VAR_5 = FUNC_6(VAR_3->seq);
 switch (VAR_1->state) {
 case 130:
  FUNC_2(VAR_1);

  if (FUNC_1(VAR_1, VAR_3, VAR_2))
   return;
  VAR_1->tcp_cntxt.rem_ack_num = FUNC_6(VAR_3->ack_seq);

  VAR_4 = FUNC_4(VAR_1, VAR_3, VAR_2, VAR_6, 0);
  if (VAR_4) {
   FUNC_5(VAR_0, "cm_node=%p tcp_options failed\n",
      VAR_1);
   break;
  }
  FUNC_2(VAR_1);
  VAR_1->tcp_cntxt.rcv_nxt = VAR_5 + 1;
  FUNC_8(VAR_1, VAR_2);
  VAR_1->state = 131;
  break;
 case 132:

  FUNC_7(VAR_1, VAR_2, 1);
  break;
 case 133:
  VAR_1->tcp_cntxt.loc_seq_num = FUNC_6(VAR_3->ack_seq);
  FUNC_2(VAR_1);
  VAR_1->state = 139;
  FUNC_9(VAR_1, VAR_2);
  break;
 case 139:
  VAR_1->tcp_cntxt.loc_seq_num = FUNC_6(VAR_3->ack_seq);
  FUNC_2(VAR_1);
  FUNC_0(VAR_1);
  FUNC_9(VAR_1, VAR_2);
  break;
 case 137:
 case 136:
 case 135:
 case 134:
 case 129:
 case 138:
 case 128:
 case 131:
 default:
  FUNC_3(VAR_2);
  break;
 }
}
