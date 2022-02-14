
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bfa_s {int dummy; } ;
struct TYPE_5__ {int pwwn; } ;
struct TYPE_7__ {int pid; TYPE_1__ port_cfg; } ;
struct bfa_fcs_fabric_s {TYPE_2__* fcs; TYPE_4__ bport; int fab_type; } ;
typedef enum bfa_fcs_fabric_event { ____Placeholder_bfa_fcs_fabric_event } bfa_fcs_fabric_event ;
struct TYPE_6__ {struct bfa_s* bfa; } ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (struct bfa_s*) ;
 int FUNC_1 (struct bfa_s*) ;
 int FUNC_2 (struct bfa_s*) ;
 int FUNC_3 (struct bfa_fcs_fabric_s*) ;
 int FUNC_4 (struct bfa_fcs_fabric_s*) ;
 int FUNC_5 (struct bfa_fcs_fabric_s*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (struct bfa_fcs_fabric_s*,int ) ;
 int FUNC_10 (TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_11(struct bfa_fcs_fabric_s *VAR_6,
     enum bfa_fcs_fabric_event VAR_7)
{
 struct bfa_s *VAR_8 = VAR_6->fcs->bfa;

 FUNC_10(VAR_6->fcs, VAR_6->bport.port_cfg.pwwn);
 FUNC_10(VAR_6->fcs, VAR_7);

 switch (VAR_7) {
 case 128:
  if (!FUNC_2(VAR_6->fcs->bfa)) {
   FUNC_9(VAR_6, VAR_4);
   break;
  }
  if (FUNC_1(VAR_8) ==
    VAR_1) {
   VAR_6->fab_type = VAR_0;
   VAR_6->bport.pid = FUNC_0(VAR_8);
   VAR_6->bport.pid = FUNC_7(VAR_6->bport.pid);
   FUNC_9(VAR_6,
     VAR_5);
   FUNC_5(VAR_6);
   FUNC_6(&VAR_6->bport);
  } else {
   FUNC_9(VAR_6, VAR_3);
   FUNC_4(VAR_6);
  }
  break;

 case 129:
 case 130:
  break;

 case 131:
  FUNC_9(VAR_6, VAR_2);
  FUNC_3(VAR_6);
  break;

 default:
  FUNC_8(VAR_6->fcs, VAR_7);
 }
}
