
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bfa_fcs_itnim_s {TYPE_1__* fcs; TYPE_2__* rport; int seq_rec; int bfa_itnim; } ;
typedef enum bfa_fcs_itnim_event { ____Placeholder_bfa_fcs_itnim_event } bfa_fcs_itnim_event ;
struct TYPE_5__ {int pwwn; int bfa_rport; } ;
struct TYPE_4__ {int bfa; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bfa_fcs_itnim_s*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,struct bfa_fcs_itnim_s*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (struct bfa_fcs_itnim_s*,int ) ;
 int FUNC_6 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_7(struct bfa_fcs_itnim_s *VAR_4,
    enum bfa_fcs_itnim_event VAR_5)
{
 FUNC_6(VAR_4->fcs, VAR_4->rport->pwwn);
 FUNC_6(VAR_4->fcs, VAR_5);

 switch (VAR_5) {
 case 129:
  if (!VAR_4->bfa_itnim)
   VAR_4->bfa_itnim = FUNC_1(VAR_4->fcs->bfa,
     VAR_4->rport->bfa_rport, VAR_4);

  if (VAR_4->bfa_itnim) {
   FUNC_5(VAR_4, VAR_2);
   FUNC_2(VAR_4->bfa_itnim, VAR_4->seq_rec);
  } else {
   FUNC_5(VAR_4, VAR_3);
   FUNC_4(VAR_4->rport, VAR_0);
  }

  break;

 case 128:
  FUNC_5(VAR_4, VAR_3);
  FUNC_4(VAR_4->rport, VAR_1);
  break;

 case 130:
  FUNC_5(VAR_4, VAR_3);
  FUNC_0(VAR_4);
  break;

 default:
  FUNC_3(VAR_4->fcs, VAR_5);
 }
}
