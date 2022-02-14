
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct fchs_s {scalar_t__ s_id; scalar_t__ type; scalar_t__ routing; scalar_t__ cat_info; scalar_t__ d_id; } ;
struct fc_rnid_cmd_s {int dummy; } ;
struct fc_logi_s {int dummy; } ;
struct fc_els_cmd_s {scalar_t__ els_code; } ;
struct fc_echo_s {int dummy; } ;
struct bfa_fcs_rport_s {int fcs; } ;
struct bfa_fcs_lport_s {int fcs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (struct bfa_fcs_lport_s*,struct fchs_s*) ;
 int FUNC_1 (struct bfa_fcs_lport_s*,struct fchs_s*,struct fc_echo_s*,int ) ;
 struct bfa_fcs_rport_s* FUNC_2 (struct bfa_fcs_lport_s*,scalar_t__) ;
 int FUNC_3 (struct bfa_fcs_lport_s*) ;
 int FUNC_4 (struct bfa_fcs_lport_s*,struct fchs_s*,struct fc_logi_s*) ;
 int FUNC_5 (struct bfa_fcs_lport_s*,struct fchs_s*,struct fc_rnid_cmd_s*,int ) ;
 int FUNC_6 (struct bfa_fcs_lport_s*,struct fchs_s*,int ) ;
 int FUNC_7 (struct bfa_fcs_lport_s*,struct fchs_s*,int ,int ) ;
 int FUNC_8 (struct bfa_fcs_lport_s*,struct fchs_s*,int ,int ) ;
 int FUNC_9 (struct bfa_fcs_rport_s*,struct fchs_s*,int ) ;
 int FUNC_10 (int ,scalar_t__) ;
 int FUNC_11 (struct bfa_fcs_lport_s*,int ) ;
 int FUNC_12 (int ,scalar_t__) ;
 int VAR_16 ;
 int VAR_17 ;

void
FUNC_13(struct bfa_fcs_lport_s *VAR_18,
   struct fchs_s *VAR_19, u16 VAR_20)
{
 u32 VAR_21 = VAR_19->s_id;
 struct bfa_fcs_rport_s *VAR_22 = ((void*)0);
 struct fc_els_cmd_s *VAR_23 = (struct fc_els_cmd_s *) (VAR_19 + 1);

 FUNC_11(VAR_18, VAR_17);
 FUNC_12(VAR_18->fcs, VAR_19->type);

 if (!FUNC_3(VAR_18)) {
  FUNC_11(VAR_18, VAR_16);
  return;
 }







 if ((VAR_19->type == VAR_13) &&
  (VAR_23->els_code == VAR_5)) {
  FUNC_4(VAR_18, VAR_19, (struct fc_logi_s *) VAR_23);
  return;
 }




 if ((VAR_19->type == VAR_13) && (VAR_23->els_code == VAR_3)) {
  FUNC_1(VAR_18, VAR_19,
    (struct fc_echo_s *)VAR_23, VAR_20);
  return;
 }




 if ((VAR_19->type == VAR_13) && (VAR_23->els_code == VAR_7)) {
  FUNC_5(VAR_18, VAR_19,
   (struct fc_rnid_cmd_s *) VAR_23, VAR_20);
  return;
 }

 if (VAR_19->type == VAR_12) {
  if ((VAR_19->routing == VAR_11) &&
    (VAR_19->cat_info == VAR_2))
   FUNC_0(VAR_18, VAR_19);
  return;
 }

 if (VAR_19->type == VAR_15) {



  FUNC_7(VAR_18, VAR_19, VAR_1,
    VAR_0);
  return;
 }




 VAR_22 = FUNC_2(VAR_18, VAR_21);
 if (VAR_22) {
  FUNC_12(VAR_22->fcs, VAR_19->s_id);
  FUNC_12(VAR_22->fcs, VAR_19->d_id);
  FUNC_12(VAR_22->fcs, VAR_19->type);

  FUNC_9(VAR_22, VAR_19, VAR_20);
  return;
 }




 if (VAR_19->type != VAR_13) {
  FUNC_12(VAR_18->fcs, VAR_19->s_id);
  FUNC_12(VAR_18->fcs, VAR_19->d_id);

  if(VAR_19->type != VAR_14)
   FUNC_10(VAR_18->fcs, VAR_19->type);
  return;
 }

 FUNC_12(VAR_18->fcs, VAR_23->els_code);
 if (VAR_23->els_code == VAR_8) {
  FUNC_6(VAR_18, VAR_19, VAR_20);
  return;
 }

 if (VAR_23->els_code == VAR_4) {



  return;
 }

 if (VAR_23->els_code == VAR_6) {



  return;
 }




 FUNC_8(VAR_18, VAR_19, VAR_10,
     VAR_9);

}
