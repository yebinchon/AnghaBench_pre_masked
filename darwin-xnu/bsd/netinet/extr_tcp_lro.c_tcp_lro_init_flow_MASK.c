
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int32_t ;
struct tcphdr {int th_seq; int th_dport; int th_sport; } ;
struct TYPE_7__ {int s_addr; } ;
struct TYPE_5__ {int s_addr; } ;
struct lro_flow {int lr_hash_map; scalar_t__ lr_flags; scalar_t__ lr_seq; int lr_timestamp; int lr_lport; int lr_fport; TYPE_3__ lr_laddr; TYPE_1__ lr_faddr; } ;
struct TYPE_8__ {int s_addr; } ;
struct TYPE_6__ {int s_addr; } ;
struct ip {TYPE_4__ ip_dst; TYPE_2__ ip_src; } ;


 struct lro_flow* VAR_0 ;
 int* VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(int VAR_2, struct ip* VAR_3, struct tcphdr *VAR_4,
   int VAR_5, u_int32_t VAR_6, int VAR_7)
{
 struct lro_flow *VAR_8 = ((void*)0);

 VAR_8 = &VAR_0[VAR_2];

 VAR_8->lr_hash_map = VAR_5;
 VAR_8->lr_faddr.s_addr = VAR_3->ip_src.s_addr;
 VAR_8->lr_laddr.s_addr = VAR_3->ip_dst.s_addr;
 VAR_8->lr_fport = VAR_4->th_sport;
 VAR_8->lr_lport = VAR_4->th_dport;
 VAR_1[VAR_5] = VAR_2;
 VAR_8->lr_timestamp = VAR_6;
 VAR_8->lr_seq = FUNC_0(VAR_4->th_seq) + VAR_7;
 VAR_8->lr_flags = 0;
 return;
}
