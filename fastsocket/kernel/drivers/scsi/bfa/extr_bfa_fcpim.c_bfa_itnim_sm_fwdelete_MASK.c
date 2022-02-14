
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_itnim_s {int bfa; TYPE_1__* rport; } ;
typedef enum bfa_itnim_event { ____Placeholder_bfa_itnim_event } bfa_itnim_event ;
struct TYPE_2__ {int rport_tag; } ;





 int FUNC_0 (struct bfa_itnim_s*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct bfa_itnim_s*,int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void
FUNC_4(struct bfa_itnim_s *VAR_3, enum bfa_itnim_event VAR_4)
{
 FUNC_3(VAR_3->bfa, VAR_3->rport->rport_tag);
 FUNC_3(VAR_3->bfa, VAR_4);

 switch (VAR_4) {
 case 129:
  FUNC_2(VAR_3, VAR_2);
  FUNC_0(VAR_3);
  break;

 case 130:
  FUNC_2(VAR_3, VAR_0);
  break;

 case 128:
  FUNC_2(VAR_3, VAR_1);
  FUNC_0(VAR_3);
  break;

 default:
  FUNC_1(VAR_3->bfa, VAR_4);
 }
}
