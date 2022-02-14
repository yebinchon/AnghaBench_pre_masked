
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfad_port_s {int roles; struct bfa_fcs_lport_s* fcs_port; int pvb_type; } ;
struct bfad_vport_s {struct bfad_port_s drv_port; } ;
struct bfad_vf_s {struct bfad_port_s base_port; } ;
struct bfad_s {struct bfad_port_s pport; } ;
struct bfa_fcs_lport_s {int dummy; } ;
typedef enum bfa_lport_role { ____Placeholder_bfa_lport_role } bfa_lport_role ;
typedef scalar_t__ bfa_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct bfad_s*,struct bfad_port_s*) ;
 scalar_t__ FUNC_1 (struct bfad_s*,struct bfad_port_s*) ;

struct bfad_port_s *
FUNC_2(struct bfad_s *VAR_6, struct bfa_fcs_lport_s *VAR_7,
   enum bfa_lport_role VAR_8, struct bfad_vf_s *VAR_9,
   struct bfad_vport_s *VAR_10)
{
 bfa_status_t VAR_11;
 struct bfad_port_s *VAR_12;

 if (!VAR_10 && !VAR_9) {
  VAR_12 = &VAR_6->pport;
  VAR_12->pvb_type = VAR_0;
 } else if (!VAR_10 && VAR_9) {
  VAR_12 = &VAR_9->base_port;
  VAR_12->pvb_type = VAR_2;
 } else if (VAR_10 && !VAR_9) {
  VAR_12 = &VAR_10->drv_port;
  VAR_12->pvb_type = VAR_1;
 } else {
  VAR_12 = &VAR_10->drv_port;
  VAR_12->pvb_type = VAR_3;
 }

 VAR_12->fcs_port = VAR_7;
 VAR_12->roles = VAR_8;

 if (VAR_8 & VAR_4) {
  VAR_11 = FUNC_1(VAR_6, VAR_12);
  if (VAR_11 != VAR_5) {
   FUNC_0(VAR_6, VAR_12);
   VAR_12 = ((void*)0);
  }
 }

 return VAR_12;
}
