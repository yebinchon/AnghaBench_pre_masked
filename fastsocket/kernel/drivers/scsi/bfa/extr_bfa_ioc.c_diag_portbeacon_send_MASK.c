
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct bfi_diag_portbeacon_req_s {int period; int beacon; int mh; } ;
struct TYPE_4__ {scalar_t__ msg; } ;
struct TYPE_3__ {TYPE_2__ mbcmd; } ;
struct bfa_diag_s {TYPE_1__ beacon; int ioc; } ;
typedef int bfa_boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct bfa_diag_s *VAR_2, bfa_boolean_t VAR_3, u32 VAR_4)
{
 struct bfi_diag_portbeacon_req_s *VAR_5;

 VAR_5 = (struct bfi_diag_portbeacon_req_s *)VAR_2->beacon.mbcmd.msg;

 FUNC_2(VAR_5->mh, VAR_1, VAR_0,
  FUNC_1(VAR_2->ioc));
 VAR_5->beacon = VAR_3;
 VAR_5->period = FUNC_3(VAR_4);

 FUNC_0(VAR_2->ioc, &VAR_2->beacon.mbcmd);
}
