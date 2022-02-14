
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_fcs_itnim_s {int fcs; TYPE_1__* rport; } ;
typedef enum bfa_fcs_itnim_event { ____Placeholder_bfa_fcs_itnim_event } bfa_fcs_itnim_event ;
struct TYPE_2__ {int pwwn; } ;




 int VAR_0 ;
 int FUNC_0 (struct bfa_fcs_itnim_s*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (struct bfa_fcs_itnim_s*,int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void
FUNC_5(struct bfa_fcs_itnim_s *VAR_2,
        enum bfa_fcs_itnim_event VAR_3)
{
 FUNC_4(VAR_2->fcs, VAR_2->rport->pwwn);
 FUNC_4(VAR_2->fcs, VAR_3);

 switch (VAR_3) {
 case 128:
  FUNC_3(VAR_2, VAR_1);
  FUNC_2(VAR_2->rport, VAR_0);
  break;

 case 129:
  FUNC_3(VAR_2, VAR_1);
  FUNC_0(VAR_2);
  break;

 default:
  FUNC_1(VAR_2->fcs, VAR_3);
 }
}
