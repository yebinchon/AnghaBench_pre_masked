
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pfi_kif {char* pfik_name; } ;
struct pf_state_key {int proto; int proto_variant; int af_gwy; int ext_gwy; int af_lan; int ext_lan; int gwy; int lan; } ;
struct pf_state {int sync_flags; struct pf_state_key* state_key; } ;
struct TYPE_2__ {scalar_t__ debug; } ;






 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ,int,int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_3, struct pf_state *VAR_4, struct pfi_kif *VAR_5)
{
 struct pf_state_key *VAR_6 = VAR_4->state_key;

 if (VAR_2.debug >= VAR_1) {
  FUNC_1("pf: state insert failed: %s %s ", VAR_3, VAR_5->pfik_name);
  switch (VAR_6->proto) {
  case 129:
   FUNC_1("TCP");
   break;
  case 128:
   FUNC_1("UDP");
   break;
  case 131:
   FUNC_1("ICMP4");
   break;
  case 130:
   FUNC_1("ICMP6");
   break;
  default:
   FUNC_1("PROTO=%u", VAR_6->proto);
   break;
  }
  FUNC_1(" lan: ");
  FUNC_0(&VAR_6->lan, VAR_6->af_lan, VAR_6->proto,
      VAR_6->proto_variant);
  FUNC_1(" gwy: ");
  FUNC_0(&VAR_6->gwy, VAR_6->af_gwy, VAR_6->proto,
      VAR_6->proto_variant);
  FUNC_1(" ext_lan: ");
  FUNC_0(&VAR_6->ext_lan, VAR_6->af_lan, VAR_6->proto,
      VAR_6->proto_variant);
  FUNC_1(" ext_gwy: ");
  FUNC_0(&VAR_6->ext_gwy, VAR_6->af_gwy, VAR_6->proto,
      VAR_6->proto_variant);
  if (VAR_4->sync_flags & VAR_0)
   FUNC_1(" (from sync)");
  FUNC_1("\n");
 }
}
