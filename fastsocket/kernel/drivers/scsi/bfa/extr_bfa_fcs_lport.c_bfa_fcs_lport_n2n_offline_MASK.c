
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_fcs_lport_n2n_s {scalar_t__ reply_oxid; scalar_t__ rem_port_wwn; } ;
struct TYPE_2__ {struct bfa_fcs_lport_n2n_s pn2n; } ;
struct bfa_fcs_lport_s {scalar_t__ pid; int fcs; TYPE_1__ port_topo; } ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct bfa_fcs_lport_s *VAR_0)
{
 struct bfa_fcs_lport_n2n_s *VAR_1 = &VAR_0->port_topo.pn2n;

 FUNC_0(VAR_0->fcs, VAR_0->pid);
 VAR_0->pid = 0;
 VAR_1->rem_port_wwn = 0;
 VAR_1->reply_oxid = 0;
}
