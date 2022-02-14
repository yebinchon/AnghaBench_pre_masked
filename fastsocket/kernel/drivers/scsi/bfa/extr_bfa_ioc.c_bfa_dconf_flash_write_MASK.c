
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_dconf_s {int dummy; } ;
struct bfa_dconf_mod_s {int bfa; int dconf; int instance; } ;
typedef scalar_t__ bfa_status_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int,int ,int ,struct bfa_dconf_mod_s*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static bfa_status_t
FUNC_4(struct bfa_dconf_mod_s *VAR_3)
{
 bfa_status_t VAR_4;
 FUNC_3(VAR_3->bfa, 0);

 VAR_4 = FUNC_2(FUNC_0(VAR_3->bfa),
    VAR_0, VAR_3->instance,
    VAR_3->dconf, sizeof(struct bfa_dconf_s), 0,
    VAR_2, VAR_3);
 if (VAR_4 != VAR_1)
  FUNC_1(VAR_4);
 FUNC_3(VAR_3->bfa, VAR_4);

 return VAR_4;
}
