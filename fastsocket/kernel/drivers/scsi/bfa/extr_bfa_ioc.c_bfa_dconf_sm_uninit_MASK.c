
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct bfa_dconf_s {int dummy; } ;
struct bfa_dconf_mod_s {int min_cfg; TYPE_1__* bfa; int timer; int dconf; int instance; } ;
typedef enum bfa_dconf_event { ____Placeholder_bfa_dconf_event } bfa_dconf_event ;
typedef int bfa_status_t ;
struct TYPE_8__ {int iocfc; } ;







 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 void FUNC_2 (struct bfa_dconf_mod_s*,int) ;
 int VAR_5 ;
 int FUNC_3 (int ,int ,int ,int ,int,int ,int (*) (TYPE_1__*,int ),TYPE_1__*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (struct bfa_dconf_mod_s*,void (*) (struct bfa_dconf_mod_s*,int)) ;
 int FUNC_7 (TYPE_1__*,int *,int ,struct bfa_dconf_mod_s*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_10(struct bfa_dconf_mod_s *VAR_6, enum bfa_dconf_event VAR_7)
{
 bfa_status_t VAR_8;
 FUNC_9(VAR_6->bfa, VAR_7);

 switch (VAR_7) {
 case 130:
  if (VAR_6->min_cfg) {
   FUNC_9(VAR_6->bfa, VAR_6->min_cfg);
   FUNC_4(&VAR_6->bfa->iocfc,
     VAR_4);
   return;
  }
  FUNC_6(VAR_6, FUNC_2);
  FUNC_7(VAR_6->bfa, &VAR_6->timer,
   VAR_5, VAR_6, 2 * VAR_0);
  VAR_8 = FUNC_3(FUNC_0(VAR_6->bfa),
     VAR_1, VAR_6->instance,
     VAR_6->dconf,
     sizeof(struct bfa_dconf_s), 0,
     FUNC_1, VAR_6->bfa);
  if (VAR_8 != VAR_3) {
   FUNC_8(&VAR_6->timer);
   FUNC_1(VAR_6->bfa, VAR_2);
   FUNC_6(VAR_6, FUNC_10);
   return;
  }
  break;
 case 132:
  FUNC_4(&VAR_6->bfa->iocfc, VAR_4);
 case 129:
 case 128:
 case 131:
  break;
 default:
  FUNC_5(VAR_6->bfa, VAR_7);
 }
}
