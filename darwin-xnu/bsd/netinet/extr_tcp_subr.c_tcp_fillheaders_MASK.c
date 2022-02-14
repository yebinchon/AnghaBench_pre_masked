
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcphdr {int th_off; scalar_t__ th_urp; scalar_t__ th_win; scalar_t__ th_flags; scalar_t__ th_x2; scalar_t__ th_ack; scalar_t__ th_seq; int th_dport; int th_sport; int th_sum; } ;
struct tcpcb {struct inpcb* t_inpcb; } ;
struct ip6_hdr {int ip6_flow; int ip6_vfc; int ip6_nxt; int ip6_dst; int ip6_src; scalar_t__ ip6_hlim; int ip6_plen; } ;
struct TYPE_4__ {int s_addr; } ;
struct TYPE_3__ {int s_addr; } ;
struct ip {int ip_p; TYPE_2__ ip_dst; TYPE_1__ ip_src; scalar_t__ ip_sum; scalar_t__ ip_ttl; scalar_t__ ip_off; scalar_t__ ip_id; scalar_t__ ip_len; scalar_t__ ip_tos; int ip_vhl; } ;
struct inpcb {int inp_vflag; int inp_flow; int inp_fport; int inp_lport; TYPE_2__ inp_faddr; TYPE_1__ inp_laddr; int in6p_faddr; int in6p_laddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int ,int ,int ) ;

void
FUNC_4(struct tcpcb *VAR_6, void *VAR_7, void *VAR_8)
{
 struct inpcb *VAR_9 = VAR_6->t_inpcb;
 struct tcphdr *VAR_10 = (struct tcphdr *)VAR_8;
 {
  struct ip *VAR_11 = (struct ip *) VAR_7;

  VAR_11->ip_vhl = VAR_5;
  VAR_11->ip_tos = 0;
  VAR_11->ip_len = 0;
  VAR_11->ip_id = 0;
  VAR_11->ip_off = 0;
  VAR_11->ip_ttl = 0;
  VAR_11->ip_sum = 0;
  VAR_11->ip_p = VAR_1;
  VAR_11->ip_src = VAR_9->inp_laddr;
  VAR_11->ip_dst = VAR_9->inp_faddr;
  VAR_10->th_sum =
      FUNC_3(VAR_11->ip_src.s_addr, VAR_11->ip_dst.s_addr,
      FUNC_1(sizeof(struct tcphdr) + VAR_1));
 }

 VAR_10->th_sport = VAR_9->inp_lport;
 VAR_10->th_dport = VAR_9->inp_fport;
 VAR_10->th_seq = 0;
 VAR_10->th_ack = 0;
 VAR_10->th_x2 = 0;
 VAR_10->th_off = 5;
 VAR_10->th_flags = 0;
 VAR_10->th_win = 0;
 VAR_10->th_urp = 0;
}
