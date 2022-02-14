
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fchs_s {int s_id; int ox_id; } ;
struct fc_logi_s {int dummy; } ;
struct TYPE_2__ {int plogi_rcvd; } ;
struct bfa_fcs_rport_s {TYPE_1__ stats; int pid; int fcs; int reply_oxid; } ;


 int VAR_0 ;
 int FUNC_0 (struct bfa_fcs_rport_s*,struct fc_logi_s*) ;
 int FUNC_1 (struct bfa_fcs_rport_s*,int ) ;
 int FUNC_2 (int ,int ) ;

void
FUNC_3(struct bfa_fcs_rport_s *VAR_1, struct fchs_s *VAR_2,
   struct fc_logi_s *VAR_3)
{




 FUNC_0(VAR_1, VAR_3);

 VAR_1->reply_oxid = VAR_2->ox_id;
 FUNC_2(VAR_1->fcs, VAR_1->reply_oxid);

 VAR_1->pid = VAR_2->s_id;
 FUNC_2(VAR_1->fcs, VAR_1->pid);

 VAR_1->stats.plogi_rcvd++;
 FUNC_1(VAR_1, VAR_0);
}
