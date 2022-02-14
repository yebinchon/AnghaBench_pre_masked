
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfi_ioc_ctrl_req_s {int mh; } ;
struct bfa_ioc_s {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bfa_ioc_s*,struct bfi_ioc_ctrl_req_s*,int) ;
 int FUNC_1 (struct bfa_ioc_s*) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct bfa_ioc_s *VAR_2)
{
 struct bfi_ioc_ctrl_req_s VAR_3;

 FUNC_2(VAR_3.mh, VAR_1, VAR_0,
      FUNC_1(VAR_2));
 FUNC_0(VAR_2, &VAR_3, sizeof(struct bfi_ioc_ctrl_req_s));
}
