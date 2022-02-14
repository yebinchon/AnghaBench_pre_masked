
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fchs_s {int ox_id; int s_id; } ;
struct fc_logi_s {int port_name; } ;
struct TYPE_2__ {int plogi_rcvd; } ;
struct bfa_fcs_rport_s {TYPE_1__ stats; int reply_oxid; int fcs; } ;
struct bfa_fcs_lport_s {int dummy; } ;


 int VAR_0 ;
 struct bfa_fcs_rport_s* FUNC_0 (struct bfa_fcs_lport_s*,int ,int ) ;
 int FUNC_1 (struct bfa_fcs_rport_s*,struct fc_logi_s*) ;
 int FUNC_2 (struct bfa_fcs_rport_s*,int ) ;
 int FUNC_3 (int ,int ) ;

void
FUNC_4(struct bfa_fcs_lport_s *VAR_1, struct fchs_s *VAR_2,
    struct fc_logi_s *VAR_3)
{
 struct bfa_fcs_rport_s *VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_3->port_name, VAR_2->s_id);
 if (!VAR_4)
  return;

 FUNC_1(VAR_4, VAR_3);

 VAR_4->reply_oxid = VAR_2->ox_id;
 FUNC_3(VAR_4->fcs, VAR_4->reply_oxid);

 VAR_4->stats.plogi_rcvd++;
 FUNC_2(VAR_4, VAR_0);
}
