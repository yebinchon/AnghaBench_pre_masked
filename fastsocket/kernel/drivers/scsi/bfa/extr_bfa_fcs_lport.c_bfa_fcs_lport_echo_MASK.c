
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct fchs_s {int s_id; int d_id; int ox_id; } ;
struct fc_echo_s {int dummy; } ;
struct bfa_rport_s {int dummy; } ;
struct bfa_fcxp_s {int dummy; } ;
struct bfa_fcs_lport_s {int lp_tag; TYPE_1__* fabric; int fcs; } ;
struct TYPE_2__ {int vf_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bfa_fcxp_s* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct bfa_fcs_lport_s*) ;
 scalar_t__ FUNC_2 (struct bfa_fcxp_s*) ;
 int FUNC_3 (struct bfa_fcxp_s*,struct bfa_rport_s*,int ,int ,int ,int ,int,struct fchs_s*,int *,int *,int ,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct fchs_s*,scalar_t__,int,int ,int ) ;
 int FUNC_6 (int *,struct fc_echo_s*,int) ;

__attribute__((used)) static void
FUNC_7(struct bfa_fcs_lport_s *VAR_3, struct fchs_s *VAR_4,
  struct fc_echo_s *VAR_5, u16 VAR_6)
{
 struct fchs_s VAR_7;
 struct bfa_fcxp_s *VAR_8;
 struct bfa_rport_s *VAR_9 = ((void*)0);
 int VAR_10, VAR_11;

 FUNC_4(VAR_3->fcs, VAR_4->s_id);
 FUNC_4(VAR_3->fcs, VAR_4->d_id);

 VAR_8 = FUNC_0(VAR_3->fcs, VAR_0);
 if (!VAR_8)
  return;

 VAR_10 = FUNC_5(&VAR_7, FUNC_2(VAR_8),
    VAR_4->s_id, FUNC_1(VAR_3),
    VAR_4->ox_id);




 VAR_11 = VAR_6 - sizeof(struct fchs_s);
 FUNC_4(VAR_3->fcs, VAR_6);
 FUNC_4(VAR_3->fcs, VAR_11);

 if (VAR_11 > VAR_10)
  FUNC_6(((u8 *) FUNC_2(VAR_8)) +
   sizeof(struct fc_echo_s), (VAR_5 + 1),
   (VAR_11 - sizeof(struct fc_echo_s)));

 FUNC_3(VAR_8, VAR_9, VAR_3->fabric->vf_id, VAR_3->lp_tag,
   VAR_0, VAR_1, VAR_11, &VAR_7, ((void*)0), ((void*)0),
   VAR_2, 0);
}
