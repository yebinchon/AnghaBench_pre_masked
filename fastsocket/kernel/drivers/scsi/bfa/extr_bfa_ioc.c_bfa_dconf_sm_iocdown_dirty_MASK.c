
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct bfa_dconf_mod_s {TYPE_1__* bfa; int timer; } ;
typedef enum bfa_dconf_event { ____Placeholder_bfa_dconf_event } bfa_dconf_event ;
struct TYPE_4__ {int iocfc; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (struct bfa_dconf_mod_s*,int ) ;
 int FUNC_3 (TYPE_1__*,int *,int ,struct bfa_dconf_mod_s*,int ) ;
 int FUNC_4 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_5(struct bfa_dconf_mod_s *VAR_5,
   enum bfa_dconf_event VAR_6)
{
 FUNC_4(VAR_5->bfa, VAR_6);

 switch (VAR_6) {
 case 129:
  FUNC_3(VAR_5->bfa, &VAR_5->timer,
   VAR_4, VAR_5, VAR_0);
  FUNC_2(VAR_5, VAR_2);
  break;
 case 130:
  FUNC_2(VAR_5, VAR_3);
  FUNC_0(&VAR_5->bfa->iocfc, VAR_1);
  break;
 case 128:
  break;
 default:
  FUNC_1(VAR_5->bfa, VAR_6);
 }
}
