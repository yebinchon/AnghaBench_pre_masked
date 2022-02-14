
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int v6addr; } ;
struct TYPE_3__ {int v6addr; } ;
struct pf_fragment {TYPE_2__ fr_dstx; TYPE_1__ fr_srcx; int fr_af; int fr_id6; int fr_p; } ;
struct ip6_hdr {int ip6_dst; int ip6_src; } ;
struct ip6_frag {int ip6f_ident; int ip6f_nxt; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct pf_fragment *VAR_1, struct ip6_hdr *VAR_2,
    struct ip6_frag *VAR_3)
{
 VAR_1->fr_p = VAR_3->ip6f_nxt;
 VAR_1->fr_id6 = VAR_3->ip6f_ident;
 VAR_1->fr_af = VAR_0;
 VAR_1->fr_srcx.v6addr = VAR_2->ip6_src;
 VAR_1->fr_dstx.v6addr = VAR_2->ip6_dst;
}
