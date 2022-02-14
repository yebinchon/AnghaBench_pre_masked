
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct tcphdr {int doff; int ack_seq; int seq; } ;
struct sk_buff {int len; } ;
struct TYPE_3__ {int rcv_nxt; void* rem_ack_num; } ;
struct nes_cm_node {int state; int cm_core; TYPE_2__* cm_id; TYPE_1__ tcp_cntxt; } ;
struct TYPE_4__ {int (* rem_ref ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct nes_cm_node*) ;
 scalar_t__ FUNC_1 (struct nes_cm_node*,struct tcphdr*,struct sk_buff*) ;
 int FUNC_2 (struct nes_cm_node*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct nes_cm_node*,struct sk_buff*) ;
 int FUNC_6 (struct nes_cm_node*,struct tcphdr*,struct sk_buff*,int,int) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (int ,struct nes_cm_node*) ;
 int FUNC_9 (struct nes_cm_node*,struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_12(struct nes_cm_node *VAR_1, struct sk_buff *VAR_2,
     struct tcphdr *VAR_3)
{
 int VAR_4 = 0;
 u32 VAR_5;
 int VAR_6 = 0;
 int VAR_7;

 VAR_7 = (VAR_3->doff << 2) - sizeof(struct tcphdr);

 if (FUNC_1(VAR_1, VAR_3, VAR_2))
  return -VAR_0;

 FUNC_10(VAR_2, VAR_3->doff << 2);
 VAR_5 = FUNC_7(VAR_3->seq);
 VAR_4 = VAR_2->len;
 switch (VAR_1->state) {
 case 131:

  FUNC_2(VAR_1);
  VAR_6 = FUNC_6(VAR_1, VAR_3, VAR_2, VAR_7, 1);
  if (VAR_6)
   break;
  VAR_1->tcp_cntxt.rem_ack_num = FUNC_7(VAR_3->ack_seq);
  VAR_1->state = 138;
  if (VAR_4) {
   VAR_1->tcp_cntxt.rcv_nxt = VAR_5 + VAR_4;
   FUNC_5(VAR_1, VAR_2);
  } else {
   FUNC_3(VAR_2);
  }
  break;
 case 138:

  FUNC_2(VAR_1);
  if (VAR_4) {
   VAR_1->tcp_cntxt.rcv_nxt = VAR_5 + VAR_4;
   FUNC_5(VAR_1, VAR_2);
  } else {
   FUNC_4(VAR_2);
  }
  break;
 case 132:
  VAR_1->tcp_cntxt.rem_ack_num = FUNC_7(VAR_3->ack_seq);
  if (VAR_4) {
   VAR_1->tcp_cntxt.rcv_nxt = VAR_5 + VAR_4;
   FUNC_5(VAR_1, VAR_2);
  } else {
   FUNC_3(VAR_2);
  }
  break;
 case 134:
  FUNC_2(VAR_1);
  VAR_1->state = 140;
  FUNC_9(VAR_1, VAR_2);
  break;
 case 140:
  FUNC_2(VAR_1);
  FUNC_0(VAR_1);
  FUNC_9(VAR_1, VAR_2);
  break;
 case 135:
 case 139:
  FUNC_2(VAR_1);
  VAR_1->state = 140;
  VAR_1->cm_id->rem_ref(VAR_1->cm_id);
  FUNC_8(VAR_1->cm_core, VAR_1);
  FUNC_4(VAR_2);
  break;
 case 137:
  FUNC_2(VAR_1);
  FUNC_4(VAR_2);
  VAR_1->state = 136;
  break;
 case 130:
 case 136:
 case 129:
 case 133:
 case 128:
 default:
  FUNC_2(VAR_1);
  FUNC_4(VAR_2);
  break;
 }
 return VAR_6;
}
