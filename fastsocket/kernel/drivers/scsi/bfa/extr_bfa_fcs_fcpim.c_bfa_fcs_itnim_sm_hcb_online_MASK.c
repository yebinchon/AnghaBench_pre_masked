
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bfad_s {int dummy; } ;
struct bfa_fcs_itnim_s {TYPE_2__* fcs; int bfa_itnim; TYPE_1__* rport; int itnim_drv; } ;
typedef enum bfa_fcs_itnim_event { ____Placeholder_bfa_fcs_itnim_event } bfa_fcs_itnim_event ;
struct TYPE_5__ {scalar_t__ bfad; } ;
struct TYPE_4__ {int pwwn; int port; } ;





 int VAR_0 ;
 int FUNC_0 (int ,struct bfad_s*,int ,char*,char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bfa_fcs_itnim_s*,int ) ;
 int FUNC_3 (struct bfa_fcs_itnim_s*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_6 ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (struct bfa_fcs_itnim_s*,int ) ;
 int FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (char*,int) ;

__attribute__((used)) static void
FUNC_10(struct bfa_fcs_itnim_s *VAR_7,
       enum bfa_fcs_itnim_event VAR_8)
{
 struct bfad_s *VAR_9 = (struct bfad_s *)VAR_7->fcs->bfad;
 char VAR_10[VAR_1];
 char VAR_11[VAR_1];

 FUNC_8(VAR_7->fcs, VAR_7->rport->pwwn);
 FUNC_8(VAR_7->fcs, VAR_8);

 switch (VAR_8) {
 case 129:
  FUNC_7(VAR_7, VAR_5);
  FUNC_1(VAR_7->itnim_drv);
  FUNC_9(VAR_10, FUNC_4(VAR_7->rport->port));
  FUNC_9(VAR_11, VAR_7->rport->pwwn);
  FUNC_0(VAR_2, VAR_9, VAR_6,
  "Target (WWN = %s) is online for initiator (WWN = %s)\n",
  VAR_11, VAR_10);
  FUNC_2(VAR_7, VAR_0);
  break;

 case 128:
  FUNC_7(VAR_7, VAR_3);
  FUNC_5(VAR_7->bfa_itnim);
  break;

 case 130:
  FUNC_7(VAR_7, VAR_4);
  FUNC_3(VAR_7);
  break;

 default:
  FUNC_6(VAR_7->fcs, VAR_8);
 }
}
