
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcphdr {int ack_seq; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ loc_seq_num; } ;
struct nes_cm_node {TYPE_1__ tcp_cntxt; } ;


 int FUNC_0 (struct nes_cm_node*,struct sk_buff*,int) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct nes_cm_node *VAR_0, struct tcphdr *VAR_1,
       struct sk_buff *VAR_2)
{
 int VAR_3;

 VAR_3 = ((FUNC_1(VAR_1->ack_seq) == VAR_0->tcp_cntxt.loc_seq_num)) ? 0 : 1;
 if (VAR_3)
  FUNC_0(VAR_0, VAR_2, 1);

 return VAR_3;
}
