
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct tcphdr {int seq; int rst; int fin; int window; int ack_seq; } ;
struct sk_buff {int * cb; } ;
struct nes_rskb_cb {scalar_t__ data_start; } ;
struct iphdr {int ihl; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static u32 FUNC_2(struct sk_buff *VAR_1, u32 *VAR_2, u16 *VAR_3, u32 *VAR_4, u32 *VAR_5)
{
 struct nes_rskb_cb *VAR_6 = (struct nes_rskb_cb *)&VAR_1->cb[0];
 struct iphdr *VAR_7 = (struct iphdr *)(VAR_6->data_start + VAR_0);
 struct tcphdr *VAR_8 = (struct tcphdr *)(((char *)VAR_7) + (4 * VAR_7->ihl));

 *VAR_2 = FUNC_1(VAR_8->ack_seq);
 *VAR_3 = FUNC_0(VAR_8->window);
 *VAR_4 = VAR_8->fin;
 *VAR_5 = VAR_8->rst;
 return FUNC_1(VAR_8->seq);
}
