
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfad_s {int bfad_lock; int bfa_fcs; } ;
struct bfa_rport_qualifier_s {int dummy; } ;
struct bfa_fcs_lport_s {int dummy; } ;
struct bfa_bsg_lport_get_rports_s {int nrports; scalar_t__ status; int pwwn; int vf_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct bfa_fcs_lport_s* FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct bfa_fcs_lport_s*,struct bfa_rport_qualifier_s*,int*) ;
 int FUNC_2 (struct bfad_s*,int ) ;
 scalar_t__ FUNC_3 (unsigned int,int,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int
FUNC_6(struct bfad_s *VAR_4, void *VAR_5,
   unsigned int VAR_6)
{
 struct bfa_bsg_lport_get_rports_s *VAR_7 =
   (struct bfa_bsg_lport_get_rports_s *)VAR_5;
 struct bfa_fcs_lport_s *VAR_8;
 unsigned long VAR_9;
 void *VAR_10;

 if (VAR_7->nrports == 0)
  return -VAR_3;

 if (FUNC_3(VAR_6,
   sizeof(struct bfa_bsg_lport_get_rports_s),
   sizeof(struct bfa_rport_qualifier_s) * VAR_7->nrports)
   != VAR_0) {
  VAR_7->status = VAR_2;
  return 0;
 }

 VAR_10 = (char *)VAR_7 +
   sizeof(struct bfa_bsg_lport_get_rports_s);
 FUNC_4(&VAR_4->bfad_lock, VAR_9);
 VAR_8 = FUNC_0(&VAR_4->bfa_fcs,
    VAR_7->vf_id, VAR_7->pwwn);
 if (VAR_8 == ((void*)0)) {
  FUNC_5(&VAR_4->bfad_lock, VAR_9);
  FUNC_2(VAR_4, 0);
  VAR_7->status = VAR_1;
  goto out;
 }

 FUNC_1(VAR_8,
   (struct bfa_rport_qualifier_s *)VAR_10,
   &VAR_7->nrports);
 FUNC_5(&VAR_4->bfad_lock, VAR_9);
 VAR_7->status = VAR_0;
out:
 return 0;
}
