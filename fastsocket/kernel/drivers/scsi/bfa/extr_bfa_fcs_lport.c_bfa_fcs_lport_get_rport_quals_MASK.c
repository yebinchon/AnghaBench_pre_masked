
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct list_head {int dummy; } ;
struct bfa_rport_qualifier_s {int pid; scalar_t__ pwwn; } ;
struct bfa_fcs_s {int dummy; } ;
struct bfa_fcs_rport_s {int pid; scalar_t__ pwwn; } ;
struct bfa_fcs_lport_s {struct list_head rport_q; struct bfa_fcs_s* fcs; } ;


 int FUNC_0 (int) ;
 struct list_head* FUNC_1 (struct list_head*) ;
 struct list_head* FUNC_2 (struct list_head*) ;
 int FUNC_3 (struct bfa_fcs_s*,int) ;

void
FUNC_4(struct bfa_fcs_lport_s *VAR_0,
  struct bfa_rport_qualifier_s VAR_1[], int *VAR_2)
{
 struct list_head *VAR_3, *VAR_4;
 struct bfa_fcs_rport_s *VAR_5 = ((void*)0);
 int VAR_6;
 struct bfa_fcs_s *VAR_7;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || *VAR_2 == 0)
  return;

 VAR_7 = VAR_0->fcs;
 FUNC_3(VAR_7, (u32) *VAR_2);

 VAR_6 = 0;
 VAR_3 = &VAR_0->rport_q;
 VAR_4 = FUNC_1(VAR_3);

 while ((VAR_4 != VAR_3) && (VAR_6 < *VAR_2)) {
  VAR_5 = (struct bfa_fcs_rport_s *) VAR_4;
  if (FUNC_0(VAR_5->pid) > 0xFFF000) {
   VAR_4 = FUNC_2(VAR_4);
   FUNC_3(VAR_7, (u32) VAR_5->pwwn);
   FUNC_3(VAR_7, VAR_5->pid);
   FUNC_3(VAR_7, VAR_6);
   continue;
  }

  if (!VAR_5->pwwn && !VAR_5->pid) {
   VAR_4 = FUNC_2(VAR_4);
   continue;
  }

  VAR_1[VAR_6].pwwn = VAR_5->pwwn;
  VAR_1[VAR_6].pid = VAR_5->pid;

  VAR_6++;
  VAR_4 = FUNC_2(VAR_4);
 }

 FUNC_3(VAR_7, VAR_6);
 *VAR_2 = VAR_6;
}
