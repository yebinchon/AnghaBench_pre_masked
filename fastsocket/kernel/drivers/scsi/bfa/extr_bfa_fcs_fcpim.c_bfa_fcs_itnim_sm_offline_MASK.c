
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_fcs_itnim_s {int fcs; TYPE_1__* rport; int prli_retries; } ;
typedef enum bfa_fcs_itnim_event { ____Placeholder_bfa_fcs_itnim_event } bfa_fcs_itnim_event ;
struct TYPE_2__ {int pwwn; } ;






 int VAR_0 ;
 int FUNC_0 (struct bfa_fcs_itnim_s*) ;
 int FUNC_1 (struct bfa_fcs_itnim_s*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (struct bfa_fcs_itnim_s*,int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static void
FUNC_6(struct bfa_fcs_itnim_s *VAR_3,
   enum bfa_fcs_itnim_event VAR_4)
{
 FUNC_5(VAR_3->fcs, VAR_3->rport->pwwn);
 FUNC_5(VAR_3->fcs, VAR_4);

 switch (VAR_4) {
 case 130:
  FUNC_4(VAR_3, VAR_2);
  VAR_3->prli_retries = 0;
  FUNC_1(VAR_3, ((void*)0));
  break;

 case 128:
  FUNC_3(VAR_3->rport, VAR_0);
  break;

 case 129:
  FUNC_4(VAR_3, VAR_1);
  break;

 case 131:
  FUNC_0(VAR_3);
  break;

 default:
  FUNC_2(VAR_3->fcs, VAR_4);
 }

}
