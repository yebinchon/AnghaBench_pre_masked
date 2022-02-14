
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; } ;
struct TYPE_4__ {TYPE_1__ scn; } ;
struct bfa_dport_s {int bfa; TYPE_2__ i2hmsg; int test_state; int dynamic; } ;
typedef enum bfa_dport_sm_event { ____Placeholder_bfa_dport_sm_event } bfa_dport_sm_event ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct bfa_dport_s*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct bfa_dport_s*,int ) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static void
FUNC_7(struct bfa_dport_s *VAR_7, enum bfa_dport_sm_event VAR_8)
{
 FUNC_6(VAR_7->bfa, VAR_8);

 switch (VAR_8) {
 case 130:
  FUNC_3(VAR_7->bfa);
  if (FUNC_1(VAR_7, VAR_2))
   FUNC_5(VAR_7, VAR_5);
  else
   FUNC_5(VAR_7, VAR_6);
  break;

 case 131:

  break;

 case 129:

  break;

 case 128:
  if (VAR_7->i2hmsg.scn.state == VAR_3) {
   FUNC_2(VAR_7->bfa);
   VAR_7->dynamic = VAR_1;
   VAR_7->test_state = VAR_0;
   FUNC_5(VAR_7, VAR_4);
  } else {
   FUNC_6(VAR_7->bfa, VAR_7->i2hmsg.scn.state);
   FUNC_0(1);
  }
  break;

 default:
  FUNC_4(VAR_7->bfa, VAR_8);
 }
}
