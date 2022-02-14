
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pf_state_key {int proto; int proto_variant; int af_gwy; int ext_gwy; int af_lan; int ext_lan; int gwy; int lan; } ;
struct TYPE_4__ {int wscale; int seqlo; int seqhi; int max_win; int seqdiff; int state; } ;
struct TYPE_3__ {int seqlo; int seqhi; int max_win; int seqdiff; int wscale; int state; } ;
struct pf_state {TYPE_2__ dst; TYPE_1__ src; struct pf_state_key* state_key; } ;
 int VAR_0 ;
 int FUNC_0 (int *,int ,int,int) ;
 int FUNC_1 (char*,...) ;

void
FUNC_2(struct pf_state *VAR_1)
{
 struct pf_state_key *VAR_2 = VAR_1->state_key;
 switch (VAR_2->proto) {
 case 133:
  FUNC_1("ESP ");
  break;
 case 132:
  FUNC_1("GRE%u ", VAR_2->proto_variant);
  break;
 case 129:
  FUNC_1("TCP ");
  break;
 case 128:
  FUNC_1("UDP ");
  break;
 case 131:
  FUNC_1("ICMP ");
  break;
 case 130:
  FUNC_1("ICMPV6 ");
  break;
 default:
  FUNC_1("%u ", VAR_2->proto);
  break;
 }
 FUNC_0(&VAR_2->lan, VAR_2->af_lan, VAR_2->proto, VAR_2->proto_variant);
 FUNC_1(" ");
 FUNC_0(&VAR_2->gwy, VAR_2->af_gwy, VAR_2->proto, VAR_2->proto_variant);
 FUNC_1(" ");
 FUNC_0(&VAR_2->ext_lan, VAR_2->af_lan, VAR_2->proto,
    VAR_2->proto_variant);
 FUNC_1(" ");
 FUNC_0(&VAR_2->ext_gwy, VAR_2->af_gwy, VAR_2->proto,
    VAR_2->proto_variant);
 FUNC_1(" [lo=%u high=%u win=%u modulator=%u", VAR_1->src.seqlo,
     VAR_1->src.seqhi, VAR_1->src.max_win, VAR_1->src.seqdiff);
 if (VAR_1->src.wscale && VAR_1->dst.wscale)
  FUNC_1(" wscale=%u", VAR_1->src.wscale & VAR_0);
 FUNC_1("]");
 FUNC_1(" [lo=%u high=%u win=%u modulator=%u", VAR_1->dst.seqlo,
     VAR_1->dst.seqhi, VAR_1->dst.max_win, VAR_1->dst.seqdiff);
 if (VAR_1->src.wscale && VAR_1->dst.wscale)
  FUNC_1(" wscale=%u", VAR_1->dst.wscale & VAR_0);
 FUNC_1("]");
 FUNC_1(" %u:%u", VAR_1->src.state, VAR_1->dst.state);
}
