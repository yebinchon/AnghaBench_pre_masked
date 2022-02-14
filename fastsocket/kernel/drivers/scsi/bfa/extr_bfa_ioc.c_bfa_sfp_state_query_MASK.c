
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfi_sfp_req_s {scalar_t__ memtype; } ;
struct TYPE_2__ {scalar_t__ msg; } ;
struct bfa_sfp_s {scalar_t__ state; int state_query_lock; int lock; TYPE_1__ mbcmd; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct bfa_sfp_s*,int ) ;
 int FUNC_2 (struct bfa_sfp_s*,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct bfa_sfp_s *VAR_2)
{
 struct bfi_sfp_req_s *VAR_3 = (struct bfi_sfp_req_s *)VAR_2->mbcmd.msg;


 FUNC_0(VAR_2->state != VAR_0);
 FUNC_0(VAR_2->state_query_lock != 0);
 FUNC_2(VAR_2, VAR_2->state);

 VAR_2->state_query_lock = 1;
 VAR_3->memtype = 0;

 if (!VAR_2->lock)
  FUNC_1(VAR_2, VAR_1);
}
