
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int s_addr; } ;
struct TYPE_8__ {TYPE_1__ v4addr; } ;
struct TYPE_10__ {int s_addr; } ;
struct TYPE_11__ {TYPE_4__ v4addr; } ;
struct pf_fragment {TYPE_2__ fr_dstx; TYPE_5__ fr_srcx; int fr_af; int fr_id; int fr_p; } ;
struct TYPE_9__ {int s_addr; } ;
struct TYPE_12__ {int s_addr; } ;
struct ip {TYPE_3__ ip_dst; TYPE_6__ ip_src; int ip_id; int ip_p; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct pf_fragment *VAR_1, struct ip *VAR_2)
{
 VAR_1->fr_p = VAR_2->ip_p;
 VAR_1->fr_id = VAR_2->ip_id;
 VAR_1->fr_af = VAR_0;
 VAR_1->fr_srcx.v4addr.s_addr = VAR_2->ip_src.s_addr;
 VAR_1->fr_dstx.v4addr.s_addr = VAR_2->ip_dst.s_addr;
}
