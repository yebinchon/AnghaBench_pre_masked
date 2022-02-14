
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int wwn_t ;
struct bfa_lport_cfg_s {int pwwn; } ;
struct bfa_fcs_rport_s {int pwwn; int pid; } ;
struct bfa_fcs_lport_n2n_s {int rem_port_wwn; } ;
struct TYPE_3__ {struct bfa_fcs_lport_n2n_s pn2n; } ;
struct bfa_fcs_lport_s {scalar_t__ num_rports; int fcs; TYPE_2__* fabric; int pid; struct bfa_lport_cfg_s port_cfg; TYPE_1__ port_topo; } ;
struct TYPE_4__ {int lps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct bfa_fcs_rport_s* FUNC_1 (struct bfa_fcs_lport_s*,int ) ;
 struct bfa_fcs_rport_s* FUNC_2 (struct bfa_fcs_lport_s*,int ) ;
 int FUNC_3 (struct bfa_fcs_lport_s*,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct bfa_fcs_rport_s*,int ) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (void*,void*,int) ;

__attribute__((used)) static void
FUNC_8(struct bfa_fcs_lport_s *VAR_4)
{
 struct bfa_fcs_lport_n2n_s *VAR_5 = &VAR_4->port_topo.pn2n;
 struct bfa_lport_cfg_s *VAR_6 = &VAR_4->port_cfg;
 struct bfa_fcs_rport_s *VAR_7;

 FUNC_6(VAR_4->fcs, VAR_6->pwwn);
 if (FUNC_7
     ((void *)&VAR_6->pwwn, (void *)&VAR_5->rem_port_wwn,
      sizeof(wwn_t)) > 0) {
  VAR_4->pid = VAR_0;
  FUNC_4(VAR_4->fabric->lps, VAR_0);



  VAR_7 = FUNC_2(VAR_4,
       VAR_5->rem_port_wwn);
  if (VAR_7) {
   FUNC_6(VAR_4->fcs, VAR_7->pid);
   FUNC_6(VAR_4->fcs, VAR_7->pwwn);
   VAR_7->pid = VAR_1;
   FUNC_5(VAR_7, VAR_3);
   return;
  }





  if (VAR_4->num_rports > 0) {
   VAR_7 = FUNC_1(VAR_4, 0);
   FUNC_0(VAR_7 == ((void*)0));
   if (VAR_7) {
    FUNC_6(VAR_4->fcs, VAR_7->pwwn);
    FUNC_5(VAR_7, VAR_2);
   }
  }
  FUNC_3(VAR_4, VAR_1);
 }
}
