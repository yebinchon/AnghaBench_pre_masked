
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union bfi_lps_i2h_msg_u {int cvl_event; int logout_rsp; int login_rsp; struct bfi_msg_s* msg; } ;
struct TYPE_2__ {int msg_id; } ;
struct bfi_msg_s {TYPE_1__ mhdr; } ;
struct bfa_s {int dummy; } ;





 int FUNC_0 (int) ;
 int FUNC_1 (struct bfa_s*,int ) ;
 int FUNC_2 (struct bfa_s*,int ) ;
 int FUNC_3 (struct bfa_s*,int ) ;
 int FUNC_4 (struct bfa_s*,int) ;

void
FUNC_5(struct bfa_s *VAR_0, struct bfi_msg_s *VAR_1)
{
 union bfi_lps_i2h_msg_u VAR_2;

 FUNC_4(VAR_0, VAR_1->mhdr.msg_id);
 VAR_2.msg = VAR_1;

 switch (VAR_1->mhdr.msg_id) {
 case 129:
  FUNC_1(VAR_0, VAR_2.login_rsp);
  break;

 case 128:
  FUNC_2(VAR_0, VAR_2.logout_rsp);
  break;

 case 130:
  FUNC_3(VAR_0, VAR_2.cvl_event);
  break;

 default:
  FUNC_4(VAR_0, VAR_1->mhdr.msg_id);
  FUNC_0(1);
 }
}
