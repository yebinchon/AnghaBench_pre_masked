
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wwn_t ;
typedef int u32 ;
struct list_head {int dummy; } ;
struct bfa_fcs_s {int dummy; } ;
struct bfa_fcs_rport_s {int pid; scalar_t__ pwwn; } ;
struct bfa_fcs_lport_s {struct list_head rport_q; struct bfa_fcs_s* fcs; } ;
typedef scalar_t__ bfa_boolean_t ;


 int FUNC_0 (int) ;
 struct list_head* FUNC_1 (struct list_head*) ;
 struct list_head* FUNC_2 (struct list_head*) ;
 int FUNC_3 (struct bfa_fcs_s*,int) ;
 int FUNC_4 (scalar_t__*,scalar_t__*,int) ;

wwn_t
FUNC_5(struct bfa_fcs_lport_s *VAR_0, wwn_t VAR_1, int VAR_2,
  int VAR_3, bfa_boolean_t VAR_4)
{
 struct list_head *VAR_5, *VAR_6;
 struct bfa_fcs_rport_s *VAR_7 = ((void*)0);
 int VAR_8;
 struct bfa_fcs_s *VAR_9;

 if (VAR_0 == ((void*)0) || VAR_3 == 0)
  return (wwn_t) 0;

 VAR_9 = VAR_0->fcs;
 FUNC_3(VAR_9, (u32) VAR_3);

 VAR_8 = 0;
 VAR_5 = &VAR_0->rport_q;
 VAR_6 = FUNC_1(VAR_5);

 while ((VAR_6 != VAR_5) && (VAR_8 < VAR_3)) {
  VAR_7 = (struct bfa_fcs_rport_s *) VAR_6;
  if (FUNC_0(VAR_7->pid) > 0xFFF000) {
   VAR_6 = FUNC_2(VAR_6);
   FUNC_3(VAR_9, (u32) VAR_7->pwwn);
   FUNC_3(VAR_9, VAR_7->pid);
   FUNC_3(VAR_9, VAR_8);
   continue;
  }

  if (VAR_4) {
   if (!FUNC_4(&VAR_1, &VAR_7->pwwn, 8))
    break;
  } else {
   if (VAR_8 == VAR_2)
    break;
  }

  VAR_8++;
  VAR_6 = FUNC_2(VAR_6);
 }

 FUNC_3(VAR_9, VAR_8);
 if (VAR_7)
  return VAR_7->pwwn;
 else
  return (wwn_t) 0;
}
