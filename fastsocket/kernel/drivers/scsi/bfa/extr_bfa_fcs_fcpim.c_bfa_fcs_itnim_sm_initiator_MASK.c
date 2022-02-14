
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_fcs_itnim_s {int fcs; TYPE_1__* rport; } ;
typedef enum bfa_fcs_itnim_event { ____Placeholder_bfa_fcs_itnim_event } bfa_fcs_itnim_event ;
struct TYPE_2__ {int pwwn; } ;







 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bfa_fcs_itnim_s*) ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (struct bfa_fcs_itnim_s*,int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void
FUNC_5(struct bfa_fcs_itnim_s *VAR_3,
   enum bfa_fcs_itnim_event VAR_4)
{
 FUNC_4(VAR_3->fcs, VAR_3->rport->pwwn);
 FUNC_4(VAR_3->fcs, VAR_4);

 switch (VAR_4) {
 case 129:
  FUNC_3(VAR_3, VAR_2);
  FUNC_2(VAR_3->rport, VAR_1);
  break;




 case 131:
  FUNC_2(VAR_3->rport, VAR_0);
  break;

 case 128:
 case 130:
  break;

 case 132:
  FUNC_3(VAR_3, VAR_2);
  FUNC_0(VAR_3);
  break;

 default:
  FUNC_1(VAR_3->fcs, VAR_4);
 }
}
