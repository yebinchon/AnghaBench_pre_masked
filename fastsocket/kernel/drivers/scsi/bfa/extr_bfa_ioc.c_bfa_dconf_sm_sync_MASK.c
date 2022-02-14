
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_dconf_mod_s {int bfa; int timer; } ;
typedef enum bfa_dconf_event { ____Placeholder_bfa_dconf_event } bfa_dconf_event ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct bfa_dconf_mod_s*,int ) ;
 int FUNC_2 (int ,int *,int ,struct bfa_dconf_mod_s*,int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void
FUNC_4(struct bfa_dconf_mod_s *VAR_6, enum bfa_dconf_event VAR_7)
{
 FUNC_3(VAR_6->bfa, VAR_7);

 switch (VAR_7) {
 case 130:
  FUNC_1(VAR_6, VAR_4);
  break;
 case 128:
  FUNC_2(VAR_6->bfa, &VAR_6->timer,
   VAR_5, VAR_6, VAR_0);
  FUNC_1(VAR_6, VAR_1);
  break;
 case 131:
  FUNC_2(VAR_6->bfa, &VAR_6->timer,
   VAR_5, VAR_6, VAR_0);
  FUNC_1(VAR_6, VAR_2);
  break;
 case 129:
  FUNC_1(VAR_6, VAR_3);
  break;
 default:
  FUNC_0(VAR_6->bfa, VAR_7);
 }
}
