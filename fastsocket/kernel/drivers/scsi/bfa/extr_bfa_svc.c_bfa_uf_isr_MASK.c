
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfi_uf_frm_rcvd_s {int dummy; } ;
struct TYPE_2__ {int msg_id; } ;
struct bfi_msg_s {TYPE_1__ mhdr; } ;
struct bfa_s {int dummy; } ;



 int FUNC_0 (int) ;
 int FUNC_1 (struct bfa_s*,int) ;
 int FUNC_2 (struct bfa_s*,struct bfi_uf_frm_rcvd_s*) ;

void
FUNC_3(struct bfa_s *VAR_0, struct bfi_msg_s *VAR_1)
{
 FUNC_1(VAR_0, VAR_1->mhdr.msg_id);

 switch (VAR_1->mhdr.msg_id) {
 case 128:
  FUNC_2(VAR_0, (struct bfi_uf_frm_rcvd_s *) VAR_1);
  break;

 default:
  FUNC_1(VAR_0, VAR_1->mhdr.msg_id);
  FUNC_0(1);
 }
}
