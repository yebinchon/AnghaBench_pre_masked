
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct fchs_s {int ox_id; int s_id; int d_id; } ;
struct fc_rpsc_speed_info_s {int port_speed_cap; int port_op_speed; } ;
struct bfa_port_attr_s {int speed; } ;
struct bfa_fcxp_s {int dummy; } ;
struct TYPE_5__ {int rpsc_rcvd; } ;
struct bfa_fcs_rport_s {TYPE_1__ stats; struct bfa_fcs_lport_s* port; } ;
struct bfa_fcs_lport_s {int lp_tag; TYPE_2__* fabric; TYPE_3__* fcs; } ;
struct TYPE_7__ {int bfa; } ;
struct TYPE_6__ {int vf_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,struct bfa_port_attr_s*) ;
 struct bfa_fcxp_s* FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (struct bfa_fcs_lport_s*) ;
 int FUNC_3 (struct bfa_fcxp_s*) ;
 int FUNC_4 (struct bfa_fcxp_s*,int *,int ,int ,int ,int ,int ,struct fchs_s*,int *,int *,int ,int ) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct fchs_s*,int ,int ,int ,int ,struct fc_rpsc_speed_info_s*) ;

__attribute__((used)) static void
FUNC_8(struct bfa_fcs_rport_s *VAR_7,
   struct fchs_s *VAR_8, u16 VAR_9)
{
 struct bfa_fcxp_s *VAR_10;
 struct fchs_s VAR_11;
 struct bfa_fcs_lport_s *VAR_12 = VAR_7->port;
 struct fc_rpsc_speed_info_s VAR_13;
 struct bfa_port_attr_s VAR_14;

 FUNC_5(VAR_12->fcs, VAR_8->s_id);
 FUNC_5(VAR_12->fcs, VAR_8->d_id);

 VAR_7->stats.rpsc_rcvd++;
 VAR_13.port_speed_cap =
  VAR_3 | VAR_4 | VAR_5 |
  VAR_6;




 FUNC_0(VAR_12->fcs->bfa, &VAR_14);

 VAR_13.port_op_speed = FUNC_6(VAR_14.speed);

 VAR_10 = FUNC_1(VAR_12->fcs, VAR_0);
 if (!VAR_10)
  return;

 VAR_9 = FUNC_7(&VAR_11, FUNC_3(VAR_10),
    VAR_8->s_id, FUNC_2(VAR_12),
    VAR_8->ox_id, &VAR_13);

 FUNC_4(VAR_10, ((void*)0), VAR_12->fabric->vf_id, VAR_12->lp_tag, VAR_0,
   VAR_1, VAR_9, &VAR_11, ((void*)0), ((void*)0), VAR_2, 0);
}
