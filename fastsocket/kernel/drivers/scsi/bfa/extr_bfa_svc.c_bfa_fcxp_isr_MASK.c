
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int msg_id; } ;
struct bfi_msg_s {TYPE_1__ mhdr; } ;
struct bfi_fcxp_send_rsp_s {int dummy; } ;
struct bfa_s {int dummy; } ;



 int FUNC_0 (int) ;
 int FUNC_1 (struct bfa_s*,int) ;
 int FUNC_2 (struct bfa_s*,struct bfi_fcxp_send_rsp_s*) ;

void
FUNC_3(struct bfa_s *VAR_0, struct bfi_msg_s *VAR_1)
{
 switch (VAR_1->mhdr.msg_id) {
 case 128:
  FUNC_2(VAR_0, (struct bfi_fcxp_send_rsp_s *) VAR_1);
  break;

 default:
  FUNC_1(VAR_0, VAR_1->mhdr.msg_id);
  FUNC_0(1);
 }
}
