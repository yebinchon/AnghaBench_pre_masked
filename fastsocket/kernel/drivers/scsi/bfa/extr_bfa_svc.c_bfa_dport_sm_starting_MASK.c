
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int status; } ;
struct TYPE_4__ {TYPE_1__ rsp; } ;
struct bfa_dport_s {int bfa; int test_state; TYPE_2__ i2hmsg; int result; } ;
struct bfa_diag_dport_result_s {int dummy; } ;
typedef enum bfa_dport_sm_event { ____Placeholder_bfa_dport_sm_event } bfa_dport_sm_event ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bfa_dport_s*,int ) ;
 int FUNC_1 (struct bfa_dport_s*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct bfa_dport_s*,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_6(struct bfa_dport_s *VAR_7, enum bfa_dport_sm_event VAR_8)
{
 FUNC_4(VAR_7->bfa, VAR_8);

 switch (VAR_8) {
 case 130:
  FUNC_5(&VAR_7->result, 0,
    sizeof(struct bfa_diag_dport_result_s));
  if (VAR_7->i2hmsg.rsp.status == VAR_3) {
   VAR_7->test_state = VAR_2;
  } else {
   VAR_7->test_state = VAR_1;
   FUNC_1(VAR_7, VAR_0);
  }


 case 128:
  FUNC_3(VAR_7, VAR_6);
  break;

 case 129:
  FUNC_3(VAR_7, VAR_5);
  FUNC_0(VAR_7, VAR_4);
  break;

 default:
  FUNC_2(VAR_7->bfa, VAR_8);
 }
}
