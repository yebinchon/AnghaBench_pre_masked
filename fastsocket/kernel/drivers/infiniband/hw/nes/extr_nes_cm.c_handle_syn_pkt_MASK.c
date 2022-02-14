
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tcphdr {int doff; int seq; } ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {int rcv_nxt; } ;
struct nes_cm_node {int state; int accept_pend; TYPE_2__* listener; int send_entry; TYPE_1__ tcp_cntxt; } ;
struct TYPE_4__ {int pend_accepts_cnt; int backlog; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;



 int VAR_1 ;
 int FUNC_1 (struct nes_cm_node*,struct sk_buff*,int) ;
 int FUNC_2 (struct nes_cm_node*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct nes_cm_node*) ;
 int VAR_2 ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct nes_cm_node*,struct tcphdr*,struct sk_buff*,int,int) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct nes_cm_node*,struct sk_buff*,int ) ;
 int FUNC_11 (struct nes_cm_node*,struct sk_buff*) ;
 int FUNC_12 (struct nes_cm_node*,int,struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_14(struct nes_cm_node *VAR_3, struct sk_buff *VAR_4,
      struct tcphdr *VAR_5)
{
 int VAR_6;
 u32 VAR_7;
 int VAR_8;

 VAR_8 = (VAR_5->doff << 2) - sizeof(struct tcphdr);
 FUNC_13(VAR_4, 0);
 VAR_7 = FUNC_9(VAR_5->seq);

 switch (VAR_3->state) {
 case 130:
 case 131:

  FUNC_1(VAR_3, VAR_4, 1);
  break;
 case 133:

  if (FUNC_4(&VAR_3->listener->pend_accepts_cnt) >
      VAR_3->listener->backlog) {
   FUNC_8(VAR_1, "drop syn due to backlog "
      "pressure \n");
   VAR_2++;
   FUNC_10(VAR_3, VAR_4, 0);
   break;
  }
  VAR_6 = FUNC_7(VAR_3, VAR_5, VAR_4, VAR_8,
      1);
  if (VAR_6) {
   FUNC_10(VAR_3, VAR_4, 0);

   break;
  }
  VAR_3->tcp_cntxt.rcv_nxt = VAR_7 + 1;
  FUNC_0(VAR_3->send_entry);
  VAR_3->accept_pend = 1;
  FUNC_3(&VAR_3->listener->pend_accepts_cnt);

  VAR_3->state = VAR_0;
  FUNC_12(VAR_3, 1, VAR_4);
  break;
 case 139:
  FUNC_5(VAR_3);
  FUNC_2(VAR_3);
  FUNC_11(VAR_3, VAR_4);
  break;
 case 129:
 case 137:
 case 136:
 case 135:
 case 132:
 case 134:
 case 138:
 case 128:
 default:
  FUNC_6(VAR_4);
  break;
 }
}
