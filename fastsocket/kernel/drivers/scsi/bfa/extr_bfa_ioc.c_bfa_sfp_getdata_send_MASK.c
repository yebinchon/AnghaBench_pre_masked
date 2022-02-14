
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfi_sfp_req_s {int mh; int memtype; } ;
struct TYPE_2__ {scalar_t__ msg; } ;
struct bfa_sfp_s {TYPE_1__ mbcmd; int ioc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bfa_sfp_s*,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct bfa_sfp_s *VAR_2)
{
 struct bfi_sfp_req_s *VAR_3 = (struct bfi_sfp_req_s *)VAR_2->mbcmd.msg;

 FUNC_2(VAR_2, VAR_3->memtype);


 FUNC_3(VAR_3->mh, VAR_0, VAR_1,
   FUNC_1(VAR_2->ioc));


 FUNC_0(VAR_2->ioc, &VAR_2->mbcmd);
}
