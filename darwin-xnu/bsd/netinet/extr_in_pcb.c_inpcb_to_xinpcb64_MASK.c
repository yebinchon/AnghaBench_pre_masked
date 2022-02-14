
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_15__ {int inp6_hops; scalar_t__ inp6_ifindex; int inp6_cksum; scalar_t__ inp6_hlim; } ;
struct TYPE_13__ {int inp4_ip_tos; } ;
struct TYPE_11__ {int inp6_local; } ;
struct TYPE_9__ {int inp6_foreign; } ;
struct xinpcb64 {TYPE_7__ inp_depend6; TYPE_5__ inp_depend4; TYPE_3__ inp_dependladdr; TYPE_1__ inp_dependfaddr; int inp_ip_p; int inp_ip_ttl; int inp_vflag; int inp_flow; int inp_flags; int inp_gencnt; int inp_lport; int inp_fport; } ;
struct TYPE_16__ {int inp6_hops; int inp6_cksum; } ;
struct TYPE_14__ {int inp4_ip_tos; } ;
struct TYPE_12__ {int inp6_local; } ;
struct TYPE_10__ {int inp6_foreign; } ;
struct inpcb {TYPE_8__ inp_depend6; TYPE_6__ inp_depend4; TYPE_4__ inp_dependladdr; TYPE_2__ inp_dependfaddr; int inp_ip_p; int inp_ip_ttl; int inp_vflag; int inp_flow; int inp_flags; int inp_gencnt; int inp_lport; int inp_fport; } ;



void
FUNC_0(struct inpcb *VAR_0, struct xinpcb64 *VAR_1)
{
 VAR_1->inp_fport = VAR_0->inp_fport;
 VAR_1->inp_lport = VAR_0->inp_lport;
 VAR_1->inp_gencnt = VAR_0->inp_gencnt;
 VAR_1->inp_flags = VAR_0->inp_flags;
 VAR_1->inp_flow = VAR_0->inp_flow;
 VAR_1->inp_vflag = VAR_0->inp_vflag;
 VAR_1->inp_ip_ttl = VAR_0->inp_ip_ttl;
 VAR_1->inp_ip_p = VAR_0->inp_ip_p;
 VAR_1->inp_dependfaddr.inp6_foreign = VAR_0->inp_dependfaddr.inp6_foreign;
 VAR_1->inp_dependladdr.inp6_local = VAR_0->inp_dependladdr.inp6_local;
 VAR_1->inp_depend4.inp4_ip_tos = VAR_0->inp_depend4.inp4_ip_tos;
 VAR_1->inp_depend6.inp6_hlim = 0;
 VAR_1->inp_depend6.inp6_cksum = VAR_0->inp_depend6.inp6_cksum;
 VAR_1->inp_depend6.inp6_ifindex = 0;
 VAR_1->inp_depend6.inp6_hops = VAR_0->inp_depend6.inp6_hops;
}
