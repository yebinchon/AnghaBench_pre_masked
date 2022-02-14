
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_s {int dummy; } ;
struct bfa_rport_s {int rport_tag; } ;
struct bfa_itnim_s {void* ditn; struct bfa_rport_s* rport; } ;
struct bfa_fcpim_s {int dummy; } ;


 struct bfa_fcpim_s* FUNC_0 (struct bfa_s*) ;
 struct bfa_itnim_s* FUNC_1 (struct bfa_fcpim_s*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct bfa_s*,struct bfa_rport_s*,int ) ;
 int VAR_1 ;
 int FUNC_4 (struct bfa_itnim_s*,int ) ;
 int FUNC_5 (struct bfa_itnim_s*,int ) ;
 int VAR_2 ;

struct bfa_itnim_s *
FUNC_6(struct bfa_s *VAR_3, struct bfa_rport_s *VAR_4, void *VAR_5)
{
 struct bfa_fcpim_s *VAR_6 = FUNC_0(VAR_3);
 struct bfa_itnim_s *VAR_7;

 FUNC_3(VAR_3, VAR_4, VAR_1);

 VAR_7 = FUNC_1(VAR_6, VAR_4->rport_tag);
 FUNC_2(VAR_7->rport != VAR_4);

 VAR_7->ditn = VAR_5;

 FUNC_5(VAR_7, VAR_2);
 FUNC_4(VAR_7, VAR_0);

 return VAR_7;
}
