
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wwn_t ;
typedef int u32 ;
struct bfad_rport_s {int dummy; } ;
struct bfa_fcs_s {scalar_t__ num_rport_logins; int bfad; } ;
struct bfa_fcs_rport_s {int pid; int itnim; int * bfa_rport; scalar_t__ old_pid; int pwwn; struct bfad_rport_s* rp_drv; struct bfa_fcs_s* fcs; struct bfa_fcs_lport_s* port; } ;
struct bfa_fcs_lport_s {struct bfa_fcs_s* fcs; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,struct bfa_fcs_rport_s**,struct bfad_rport_s**) ;
 int FUNC_3 (struct bfa_fcs_rport_s*) ;
 int FUNC_4 (struct bfa_fcs_lport_s*,struct bfa_fcs_rport_s*) ;
 scalar_t__ FUNC_5 (struct bfa_fcs_lport_s*) ;
 int FUNC_6 (struct bfa_fcs_rport_s*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (struct bfa_fcs_rport_s*,int ) ;
 int FUNC_8 (struct bfa_fcs_s*,int ) ;
 int FUNC_9 (struct bfad_rport_s*) ;

__attribute__((used)) static struct bfa_fcs_rport_s *
FUNC_10(struct bfa_fcs_lport_s *VAR_3, wwn_t VAR_4, u32 VAR_5)
{
 struct bfa_fcs_s *VAR_6 = VAR_3->fcs;
 struct bfa_fcs_rport_s *VAR_7;
 struct bfad_rport_s *VAR_8;




 if (VAR_6->num_rport_logins >= VAR_1) {
  FUNC_8(VAR_6, VAR_5);
  return ((void*)0);
 }

 if (FUNC_2(VAR_6->bfad, &VAR_7, &VAR_8)
  != VAR_0) {
  FUNC_8(VAR_6, VAR_5);
  return ((void*)0);
 }




 VAR_7->port = VAR_3;
 VAR_7->fcs = VAR_6;
 VAR_7->rp_drv = VAR_8;
 VAR_7->pid = VAR_5;
 VAR_7->pwwn = VAR_4;
 VAR_7->old_pid = 0;

 VAR_7->bfa_rport = ((void*)0);




 FUNC_1(!FUNC_5(VAR_3));

 if (FUNC_5(VAR_3)) {
  VAR_7->itnim = FUNC_3(VAR_7);
  if (!VAR_7->itnim) {
   FUNC_8(VAR_6, VAR_5);
   FUNC_9(VAR_8);
   return ((void*)0);
  }
 }

 FUNC_4(VAR_3, VAR_7);
 VAR_6->num_rport_logins++;

 FUNC_7(VAR_7, VAR_2);


 if (!FUNC_0(VAR_7->pid))
  FUNC_6(VAR_7);

 return VAR_7;
}
