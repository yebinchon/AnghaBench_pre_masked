
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfi_ioc_ctrl_req_s {int clscode; int mh; } ;
struct bfa_mbox_cmd_s {scalar_t__ msg; } ;
struct bfa_ioc_s {int clscode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bfa_ioc_s*,struct bfa_mbox_cmd_s*) ;
 int FUNC_1 (struct bfa_ioc_s*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct bfa_ioc_s *VAR_2)
{
 struct bfa_mbox_cmd_s VAR_3;
 struct bfi_ioc_ctrl_req_s *VAR_4 = (struct bfi_ioc_ctrl_req_s *) VAR_3.msg;

 FUNC_2(VAR_4->mh, VAR_1, VAR_0,
      FUNC_1(VAR_2));
 VAR_4->clscode = FUNC_3(VAR_2->clscode);
 FUNC_0(VAR_2, &VAR_3);
}
