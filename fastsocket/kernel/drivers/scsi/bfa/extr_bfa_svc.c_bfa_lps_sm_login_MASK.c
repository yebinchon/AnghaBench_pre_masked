
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bfa_lps_s {int bfa_tag; int fport; int lp_pid; TYPE_1__* bfa; int fdisc; int status; } ;
typedef enum bfa_lps_event { ____Placeholder_bfa_lps_event } bfa_lps_event ;
struct TYPE_3__ {int plog; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bfa_lps_s*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,int ,char*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (struct bfa_lps_s*,int) ;
 int FUNC_4 (struct bfa_lps_s*,int ) ;
 int FUNC_5 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_6(struct bfa_lps_s *VAR_5, enum bfa_lps_event VAR_6)
{
 FUNC_5(VAR_5->bfa, VAR_5->bfa_tag);
 FUNC_5(VAR_5->bfa, VAR_6);

 switch (VAR_6) {
 case 130:
  if (VAR_5->status == VAR_2) {
   FUNC_4(VAR_5, VAR_4);
   if (VAR_5->fdisc)
    FUNC_1(VAR_5->bfa->plog, VAR_1,
     VAR_0, 0, "FDISC Accept");
   else
    FUNC_1(VAR_5->bfa->plog, VAR_1,
     VAR_0, 0, "FLOGI Accept");

   FUNC_5(VAR_5->bfa, VAR_5->fport);
   FUNC_5(VAR_5->bfa, VAR_5->lp_pid);

   if (!VAR_5->fport && VAR_5->lp_pid)
    FUNC_3(VAR_5, 128);
  } else {
   FUNC_4(VAR_5, VAR_3);
   if (VAR_5->fdisc)
    FUNC_1(VAR_5->bfa->plog, VAR_1,
     VAR_0, 0,
     "FDISC Fail (RJT or timeout)");
   else
    FUNC_1(VAR_5->bfa->plog, VAR_1,
     VAR_0, 0,
     "FLOGI Fail (RJT or timeout)");
  }
  FUNC_0(VAR_5);
  break;

 case 129:
 case 131:
  FUNC_4(VAR_5, VAR_3);
  break;

 case 128:
  FUNC_5(VAR_5->bfa, VAR_5->fport);
  FUNC_5(VAR_5->bfa, VAR_5->lp_pid);
  break;

 default:
  FUNC_2(VAR_5->bfa, VAR_6);
 }
}
